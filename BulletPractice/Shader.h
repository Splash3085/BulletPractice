#pragma once
#include <D3D11.h>
#include <D3DX11.h>
#include <xnamath.h>

class Shader
{
private:
	struct MatrixBufferType
	{
		XMFLOAT4X4 worldMatrix;		//���� ���
		XMFLOAT4X4 orthoMatrix;		//���� ���� ���
	};
public:
	Shader(ID3D11Device* device, LPCWSTR vertexPath, LPCWSTR pixelPath);
	Shader(Shader &) = default;
	~Shader();

	void render(ID3D11DeviceContext* deviceContext);

private:
	ID3D11VertexShader* m_VertexShader;
	ID3D11PixelShader* m_PixelShader;
	ID3D11InputLayout* m_InputLayout;
};