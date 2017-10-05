// original code by Yazzn

#include "renderer.h"

Renderer::Renderer(ID3D11Device *direct3DDevice, const std::wstring &defaultFontFamily) :
    direct3DDevice(direct3DDevice),
    immediateContext(nullptr),
    inputLayout(nullptr),
    vertexShader(nullptr),
    pixelShader(nullptr),
    fontFactory(nullptr),
    fontWrapper(nullptr),
    defaultFontFamily(defaultFontFamily),
    maxVertices(1024 * 4 * 3)
{
    D3D11_INPUT_ELEMENT_DESC layout[] =
    {
        { "POSITION",	0, DXGI_FORMAT_R32G32B32_FLOAT,		0, 0,	D3D11_INPUT_PER_VERTEX_DATA, 0 },
        { "COLOR",		0, DXGI_FORMAT_R32G32B32A32_FLOAT,	0, 16 ,	D3D11_INPUT_PER_VERTEX_DATA, 0 },
    };

    ID3DBlob *vsBlob = nullptr;
    ID3DBlob *psBlob = nullptr;

    direct3DDevice->GetImmediateContext(&immediateContext);

    throwIfFailed(FW1CreateFactory(FW1_VERSION, &fontFactory));

    renderList = std::make_unique<RenderList>(fontFactory, maxVertices);

    throwIfFailed(fontFactory->CreateFontWrapper(direct3DDevice, defaultFontFamily.c_str(), &fontWrapper));


    throwIfFailed(D3DCompile(shader, std::size(shader), nullptr, nullptr, nullptr, "VS", "vs_4_0", 0, 0, &vsBlob, nullptr));
    throwIfFailed(D3DCompile(shader, std::size(shader), nullptr, nullptr, nullptr, "PS", "ps_4_0", 0, 0, &psBlob, nullptr));

    throwIfFailed(direct3DDevice->CreateVertexShader(vsBlob->GetBufferPointer(), vsBlob->GetBufferSize(), nullptr, &vertexShader));
    throwIfFailed(direct3DDevice->CreatePixelShader(psBlob->GetBufferPointer(), psBlob->GetBufferSize(), nullptr, &pixelShader));

    throwIfFailed(direct3DDevice->CreateInputLayout(layout, static_cast<UINT>(std::size(layout)), vsBlob->GetBufferPointer(), vsBlob->GetBufferSize(), &inputLayout));

    safeRelease(vsBlob);
    safeRelease(psBlob);


    D3D11_BLEND_DESC blendDesc{};

    blendDesc.RenderTarget->BlendEnable = TRUE;
    blendDesc.RenderTarget->SrcBlend = D3D11_BLEND_SRC_ALPHA;
    blendDesc.RenderTarget->DestBlend = D3D11_BLEND_INV_SRC_ALPHA;
    blendDesc.RenderTarget->SrcBlendAlpha = D3D11_BLEND_ONE;
    blendDesc.RenderTarget->DestBlendAlpha = D3D11_BLEND_ZERO;
    blendDesc.RenderTarget->BlendOp = D3D11_BLEND_OP_ADD;
    blendDesc.RenderTarget->BlendOpAlpha = D3D11_BLEND_OP_ADD;
    blendDesc.RenderTarget->RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;

    throwIfFailed(direct3DDevice->CreateBlendState(&blendDesc, &blendState));

    D3D11_BUFFER_DESC bufferDesc{};

    bufferDesc.Usage = D3D11_USAGE_DYNAMIC;
    bufferDesc.ByteWidth = sizeof(Vertex) * static_cast<UINT>(maxVertices);
    bufferDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;
    bufferDesc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
    bufferDesc.MiscFlags = 0;

    throwIfFailed(direct3DDevice->CreateBuffer(&bufferDesc, nullptr, &vertexBuffer));

    bufferDesc = {};

    bufferDesc.Usage = D3D11_USAGE_DYNAMIC;
    bufferDesc.ByteWidth = sizeof(XMMATRIX);
    bufferDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
    bufferDesc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
    bufferDesc.MiscFlags = 0;

    throwIfFailed(direct3DDevice->CreateBuffer(&bufferDesc, nullptr, &screenProjectionBuffer));

    D3D11_VIEWPORT viewport{};
    UINT numViewports = 1;

    immediateContext->RSGetViewports(&numViewports, &viewport);

    projection = XMMatrixOrthographicOffCenterLH(viewport.TopLeftX, viewport.Width, viewport.Height, viewport.TopLeftY,
        viewport.MinDepth, viewport.MaxDepth);

    D3D11_MAPPED_SUBRESOURCE mappedResource;
    throwIfFailed(immediateContext->Map(screenProjectionBuffer, 0, D3D11_MAP_WRITE_DISCARD, 0, &mappedResource));
    {
        std::memcpy(mappedResource.pData, &projection, sizeof(XMMATRIX));
    }
    immediateContext->Unmap(screenProjectionBuffer, 0);
}

Renderer::~Renderer()
{
    safeRelease(vertexShader);
    safeRelease(pixelShader);
    safeRelease(vertexBuffer);
    safeRelease(screenProjectionBuffer);
    safeRelease(inputLayout);
    safeRelease(blendState);
    safeRelease(fontWrapper);
    safeRelease(fontFactory);
}

void Renderer::begin()
{
    immediateContext->VSSetShader(vertexShader, nullptr, 0);
    immediateContext->PSSetShader(pixelShader, nullptr, 0);

    immediateContext->OMSetBlendState(blendState, nullptr, 0xffffffff);

    immediateContext->VSSetConstantBuffers(0, 1, &screenProjectionBuffer);

    immediateContext->IASetInputLayout(inputLayout);

    UINT stride = sizeof(Vertex);
    UINT offset = 0;
    immediateContext->IASetVertexBuffers(0, 1, &vertexBuffer, &stride, &offset);

    fontWrapper->DrawString(immediateContext, L"", 0.0f, 0.0f, 0.0f, 0xff000000, FW1_RESTORESTATE | FW1_NOFLUSH);
}

void Renderer::end()
{
    renderList->clear();
}

void Renderer::draw(const RenderList::Ptr &renderList)
{
    if (std::size(renderList->vertices) > 0)
    {
        D3D11_MAPPED_SUBRESOURCE mappedResource;
        throwIfFailed(immediateContext->Map(vertexBuffer, 0, D3D11_MAP_WRITE_DISCARD, 0, &mappedResource));
        {
            std::memcpy(mappedResource.pData, renderList->vertices.data(), sizeof(Vertex) * std::size(renderList->vertices));
        }
        immediateContext->Unmap(vertexBuffer, 0);
    }

    std::size_t pos = 0;

    for (const auto &batch : renderList->batches)
    {
        immediateContext->IASetPrimitiveTopology(batch.topology);
        immediateContext->Draw(static_cast<UINT>(batch.count), static_cast<UINT>(pos));

        pos += batch.count;
    }

    fontWrapper->Flush(immediateContext);
    fontWrapper->DrawGeometry(immediateContext, renderList->textGeometry, nullptr, nullptr, FW1_RESTORESTATE);
}

void Renderer::draw()
{
    draw(renderList);
}

void Renderer::addVertex(const RenderList::Ptr &renderList, Vertex &vertex, D3D11_PRIMITIVE_TOPOLOGY topology)
{
    assert(topology != D3D11_PRIMITIVE_TOPOLOGY_LINESTRIP
        && "addVertex >Use addVertices to draw line/triangle strips!");
    assert(topology != D3D11_PRIMITIVE_TOPOLOGY_LINESTRIP_ADJ
        && "addVertex >Use addVertices to draw line/triangle strips!");
    assert(topology != D3D11_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP
        && "addVertex >Use addVertices to draw line/triangle strips!");
    assert(topology != D3D11_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP_ADJ
        && "addVertex >Use addVertices to draw line/triangle strips!");

    if (std::size(renderList->vertices) >= maxVertices)
        (this->renderList == renderList) ? draw(renderList) : throw std::exception(
            "Renderer::addVertex - Vertex buffer exhausted! Increase the size of the vertex buffer or add a custom implementation.");

    if (std::empty(renderList->batches) || renderList->batches.back().topology != topology)
        renderList->batches.emplace_back(0, topology);

    renderList->batches.back().count += 1;
    renderList->vertices.push_back(vertex);
}

void Renderer::addVertex(Vertex &vertex, D3D11_PRIMITIVE_TOPOLOGY topology)
{
    addVertex(renderList, vertex, topology);
}

void Renderer::drawText(const RenderList::Ptr &renderList, const Vec2 &pos, const std::wstring &text, const Color &color, std::uint32_t flags,
    float fontSize, const std::wstring &fontFamily)
{
    std::uint32_t transformedColor = XMCOLOR(color.f[2], color.f[1], color.f[0], color.f[3]);

    FW1_RECTF rect = { pos.x, pos.y, pos.x, pos.y };
    fontWrapper->AnalyzeString(nullptr, text.c_str(), (fontFamily == std::wstring{}) ? defaultFontFamily.c_str() :
        fontFamily.c_str(), fontSize, &rect, transformedColor, flags | FW1_NOFLUSH | FW1_NOWORDWRAP, renderList->textGeometry);
}

void Renderer::drawText(const Vec2 &pos, const std::wstring &text, const Color &color, std::uint32_t flags,
    float fontSize, const std::wstring &fontFamily)
{
    drawText(renderList, pos, text, color, flags, fontSize, fontFamily);
}

Vec2 Renderer::getTextExtent(const std::wstring &text, float fontSize, const std::wstring &fontFamily) const
{
    FW1_RECTF nullRect = { 0.f, 0.f, 0.f, 0.f };
    FW1_RECTF rect = fontWrapper->MeasureString(text.c_str(), (fontFamily == std::wstring{}) ? defaultFontFamily.c_str() : fontFamily.c_str(),
        fontSize, &nullRect, FW1_NOWORDWRAP);
    return{ rect.Right, rect.Bottom };
}

void Renderer::drawPixel(const RenderList::Ptr &renderList, const Vec2 &pos, const Color &color)
{
    drawFilledRect(renderList, XMFLOAT4{ pos.x, pos.y, 1.f, 1.f }, color);
}

void Renderer::drawPixel(const Vec2 &pos, const Color &color)
{
    drawFilledRect(renderList, XMFLOAT4{ pos.x, pos.y, 1.f, 1.f }, color);
}

void Renderer::drawLine(const RenderList::Ptr &renderList, const Vec2 &from, const Vec2 &to, const Color &color)
{
    Vertex v[]
    {
        { from.x, from.y, 0.0f, color },
        { to.x, to.y, 0.0f, color }
    };

    addVertices(renderList, v, D3D11_PRIMITIVE_TOPOLOGY_LINELIST);
}

void Renderer::drawLine(const Vec2 &from, const Vec2 &to, const Color &color)
{
    drawLine(renderList, from, to, color);
}

void Renderer::drawFilledRect(const RenderList::Ptr &renderList, const Vec4 &rect, const Color &color)
{
    Vertex v[]
    {
        { rect.x,			rect.y,				0.f, color },
        { rect.x + rect.z,	rect.y,				0.f, color },
        { rect.x,			rect.y + rect.w,	0.f, color },

        { rect.x + rect.z,	rect.y,				0.f, color },
        { rect.x + rect.z,	rect.y + rect.w,	0.f, color },
        { rect.x,			rect.y + rect.w,	0.f, color }
    };

    addVertices(renderList, v, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
}

void Renderer::drawFilledRect(const Vec4 &rect, const Color &color)
{
    drawFilledRect(renderList, rect, color);
}

void Renderer::drawRect(const RenderList::Ptr &renderList, const Vec4 &rect, float strokeWidth, const Color &color)
{
    XMFLOAT4 tmp = rect;
    tmp.z = strokeWidth;
    drawFilledRect(renderList, tmp, color);
    tmp.x = rect.x + rect.z - strokeWidth;
    drawFilledRect(renderList, tmp, color);
    tmp.z = rect.z;
    tmp.x = rect.x;
    tmp.w = strokeWidth;
    drawFilledRect(renderList, tmp, color);
    tmp.y = rect.y + rect.w;
    drawFilledRect(renderList, tmp, color);
}

void Renderer::drawRect(const Vec4 &rect, float strokeWidth, const Color &color)
{
    drawRect(renderList, rect, strokeWidth, color);
}

void Renderer::drawOutlinedRect(const RenderList::Ptr &renderList, const Vec4 &rect, float strokeWidth, const Color &strokeColor, const Color &fillColor)
{
    drawFilledRect(renderList, rect, fillColor);
    drawRect(renderList, rect, strokeWidth, strokeColor);
}

void Renderer::drawOutlinedRect(const Vec4 &rect, float strokeWidth, const Color &strokeColor, const Color &fillColor)
{
    drawOutlinedRect(renderList, rect, strokeWidth, strokeColor, fillColor);
}

void Renderer::drawCircle(const RenderList::Ptr &renderList, const Vec2 &pos, float radius, const Color &color)
{
    const int segments = 24;

    Vertex v[segments + 1];

    for (int i = 0; i <= segments; i++)
    {
        float theta = 2.f * XM_PI * static_cast<float>(i) / static_cast<float>(segments);

        v[i] = Vertex{
            pos.x + radius * std::cos(theta),
            pos.y + radius * std::sin(theta),
            0.f, color
        };
    }

    addVertices(renderList, v, D3D11_PRIMITIVE_TOPOLOGY_LINESTRIP);
}

void Renderer::drawCircle(const Vec2 &pos, float radius, const Color &color)
{
    drawCircle(renderList, pos, radius, color);
}

std::shared_ptr<Renderer> Renderer::ptr()
{
    return shared_from_this();
}

IFW1Factory *Renderer::getFontFactory() const
{
    return fontFactory;
}