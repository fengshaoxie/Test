// dllmain.h: 模块类的声明。

class CATLProject1Module : public ATL::CAtlDllModuleT< CATLProject1Module >
{
public :
	DECLARE_LIBID(LIBID_ATLProject1Lib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLPROJECT1, "{67e7233f-9b04-4c52-94b6-c58054a3291f}")
};

extern class CATLProject1Module _AtlModule;
