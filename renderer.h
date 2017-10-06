// original code by Yazzn

#pragma once

#include <exception>
#include <memory>
#include <vector>

#include <d3d11_1.h>
#include <DirectXMath.h>
#include <DirectXPackedVector.h>
#include <d3dcompiler.h>

#pragma warning(disable:4005) //dwrite.h conflicts with winerror.h
#pragma warning(disable:4458)

#include "FW1FontWrapper/FW1FontWrapper.h"
#include "shader.h"

using namespace DirectX;
using namespace DirectX::PackedVector;

using Vec4 = XMFLOAT4;
using Vec3 = XMFLOAT3;
using Vec2 = XMFLOAT2;

using Color = XMVECTORF32;

inline void throwIfFailed(HRESULT hr);

template <typename Ty>
inline void safeRelease(Ty &comPtr);

struct Vertex;
struct Batch;

class RenderList
{
    using Ptr = std::unique_ptr<RenderList>;

    friend class Renderer;
public:
    RenderList() = delete;

    RenderList(IFW1Factory *fontFactory, std::size_t maxVertices = 0)
    {
        vertices.reserve(maxVertices);
        throwIfFailed(fontFactory->CreateTextGeometry(&textGeometry));
    }

    ~RenderList()
    {
        safeRelease(textGeometry);
    }

    void clear()
    {
        vertices.clear();
        batches.clear();
        textGeometry->Clear();
    }

protected:
    std::vector<Vertex>	vertices;
    std::vector<Batch>	batches;

    IFW1TextGeometry	*textGeometry;
};

class Renderer
    : public std::enable_shared_from_this<Renderer>
{
public:
    Renderer(ID3D11Device *direct3DDevice, const std::wstring &defaultFontFamily = L"Verdana");

    ~Renderer();

    void begin();
    void end();
    void draw(const RenderList::Ptr &renderList);
    void draw();

    void addVertex(const RenderList::Ptr &renderList, Vertex &vertex, D3D11_PRIMITIVE_TOPOLOGY topology);
    void addVertex(Vertex &vertex, D3D11_PRIMITIVE_TOPOLOGY topology);

    template <std::size_t N>
    void addVertices(const RenderList::Ptr &renderList, Vertex(&vertexArr)[N], D3D11_PRIMITIVE_TOPOLOGY topology);

    template <std::size_t N>
    void addVertices(Vertex(&vertexArr)[N], D3D11_PRIMITIVE_TOPOLOGY topology);

    void drawText(const RenderList::Ptr &renderList, const Vec2 &pos, const std::wstring &text, const Color &color, std::uint32_t flags = FW1_LEFT,
        float fontSize = 10.f, const std::wstring &fontFamily = {});

    void drawText(const Vec2 &pos, const std::wstring &text, const Color &color, std::uint32_t flags = FW1_LEFT,
        float fontSize = 10.f, const std::wstring &fontFamily = {});

    Vec2 getTextExtent(const std::wstring &text, float fontSize = 10.f, const std::wstring &fontFamily = {}) const;

    void drawPixel(const Vec2 &pos, const Color &color);
    void drawPixel(const RenderList::Ptr &renderList, const Vec2 &pos, const Color &color);
    void drawLine(const Vec2 &from, const Vec2 &to, const Color &color);
    void drawLine(const RenderList::Ptr &renderList, const Vec2 &from, const Vec2 &to, const Color &color);
    void drawFilledRect(const Vec4 &rect, const Color &color);
    void drawFilledRect(const RenderList::Ptr &renderList, const Vec4 &rect, const Color &color);
    void drawRect(const Vec4 &rect, float strokeWidth, const Color &color);
    void drawRect(const RenderList::Ptr &renderList, const Vec4 &rect, float strokeWidth, const Color &color);
    void drawOutlinedRect(const Vec4 &rect, float strokeWidth, const Color &strokeColor, const Color &fillColor);
    void drawOutlinedRect(const RenderList::Ptr &renderList, const Vec4 &rect, float strokeWidth, const Color &strokeColor, const Color &fillColor);
    void drawCircle(const Vec2 &pos, float radius, const Color &color);
    void drawCircle(const RenderList::Ptr &renderList, const Vec2 &pos, float radius, const Color &color);

    IFW1Factory *getFontFactory() const;

    std::shared_ptr<Renderer> ptr();

private:
    ID3D11DeviceContext		*immediateContext;
    ID3D11Device			*direct3DDevice;

    ID3D11InputLayout		*inputLayout;
    ID3D11BlendState		*blendState;
    ID3D11VertexShader		*vertexShader;
    ID3D11PixelShader		*pixelShader;
    ID3D11Buffer			*vertexBuffer;
    ID3D11Buffer			*screenProjectionBuffer;

    IFW1Factory				*fontFactory;
    IFW1FontWrapper			*fontWrapper;

    XMMATRIX				projection;

    RenderList::Ptr			renderList;

    std::size_t				maxVertices;

    std::wstring			defaultFontFamily;
};

template <std::size_t N>
void Renderer::addVertices(const RenderList::Ptr &renderList, Vertex(&vertexArr)[N], D3D11_PRIMITIVE_TOPOLOGY topology)
{
    if (std::size(renderList->vertices) + N >= maxVertices)
        (&this->renderList == &renderList) ? draw(renderList) : throw std::exception(
            "Renderer::addVertex - Vertex buffer exhausted! Increase the size of the vertex buffer or add a custom implementation.");

    if (std::empty(renderList->batches) || renderList->batches.back().topology != topology)
        renderList->batches.emplace_back(0, topology);

    renderList->batches.back().count += N;

    renderList->vertices.resize(std::size(renderList->vertices) + N);
    std::memcpy(&renderList->vertices[std::size(renderList->vertices) - N], &vertexArr[0], N * sizeof(Vertex));

    switch (topology)
    {
    case D3D11_PRIMITIVE_TOPOLOGY_LINESTRIP:
    case D3D11_PRIMITIVE_TOPOLOGY_LINESTRIP_ADJ:
    case D3D11_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP:
    case D3D11_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP_ADJ:
    {
        Vertex seperator{};
        addVertex(seperator, D3D11_PRIMITIVE_TOPOLOGY_UNDEFINED);
        break;
    }
    default:
        break;
    }
}

template <std::size_t N>
void Renderer::addVertices(Vertex(&vertexArr)[N], D3D11_PRIMITIVE_TOPOLOGY topology)
{
    addVertices(renderList, vertexArr, topology);
}

inline void throwIfFailed(HRESULT hr)
{
    if (FAILED(hr))
    {
        throw std::exception("Crucial Direct3D 11 operation failed! ");
    }
}

template <typename Ty>
inline void safeRelease(Ty &comPtr)
{
    static_assert(std::is_pointer<Ty>::value,
        "safeRelease - comPtr not a pointer.");

    static_assert(std::is_base_of<IUnknown, std::remove_pointer<Ty>::type>::value,
        "safeRelease - remove_ptr<comPtr>::type is not a com object.");

    if (comPtr)
    {
        comPtr->Release();
        comPtr = nullptr;
    }
}

struct Vertex
{
    Vertex() = default;
    Vertex(float x, float y, float z, Color col)
        : pos(x, y, z), col(col)
    {}

    Vec3 pos;
    Color col;
};

struct Batch
{
    Batch(std::size_t count, D3D11_PRIMITIVE_TOPOLOGY topology)
        : count(count), topology(topology)
    {}

    std::size_t count;
    D3D11_PRIMITIVE_TOPOLOGY topology;
};