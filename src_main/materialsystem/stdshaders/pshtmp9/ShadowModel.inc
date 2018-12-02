//
// Generated by Microsoft (R) D3DX9 Shader Assembler
//
//  Source: ShadowModel.psh
//  Flags: /Zi 
//


static unsigned int pixelShader_ShadowModel_0[] =
{
    0xffff0101, 0x0035fffe, 0x47554244, 0x00000028, 0x000000b8, 0x00000000, 
    0x00000001, 0x0000007c, 0x00000007, 0x00000080, 0x00000000, 0x00000000, 
    0x00000000, 0x505c3a43, 0x656a6f72, 0x5c737463, 0x61746542, 0x65786946, 
    0x65425c72, 0x69466174, 0x676e6978, 0x6372735c, 0x69616d5f, 0x616d5c6e, 
    0x69726574, 0x79736c61, 0x6d657473, 0x6474735c, 0x64616873, 0x5c737265, 
    0x64616853, 0x6f4d776f, 0x2e6c6564, 0x00687370, 0x00000028, 0x0000000b, 
    0x000000dc, 0x0000000d, 0x000000f4, 0x0000000e, 0x000000fc, 0x0000000f, 
    0x00000104, 0x00000010, 0x0000010c, 0x00000014, 0x00000114, 0x00000015, 
    0x00000128, 0x58443344, 0x68532039, 0x72656461, 0x73734120, 0x6c626d65, 
    0xab007265, 0x00000051, 0xa00f0000, 0x3f800000, 0x3f800000, 0x3f800000, 
    0x3f800000, 0x00000042, 0xb00f0000, 0x00000041, 0xb00f0001, 0x00000041, 
    0xb00f0002, 0x00000041, 0xb00f0003, 0x00000012, 0x80070000, 0xb0ff0000, 
    0x90e40000, 0xa0e40000, 0x40000001, 0x80080000, 0xa0ff0000, 0x0000ffff
};
static PrecompiledShaderByteCode_t ShadowModel_pixel_shaders[1] = 
{
	{ pixelShader_ShadowModel_0, sizeof( pixelShader_ShadowModel_0 ) },
};
struct ShadowModelPixelShader_t : public PrecompiledShader_t
{
	ShadowModelPixelShader_t()
	{
		m_nFlags = SHADER_CUSTOM_ENUMERATION;
		m_pByteCode = ShadowModel_pixel_shaders;
		m_nShaderCount = 1;
		m_pName = "ShadowModel";
		GetShaderDLL()->InsertPrecompiledShader( PRECOMPILED_PIXEL_SHADER, this );
	}
};
static ShadowModelPixelShader_t ShadowModel_PixelShaderInstance;