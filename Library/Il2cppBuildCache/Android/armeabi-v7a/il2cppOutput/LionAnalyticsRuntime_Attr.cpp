#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC;
// System.ParamArrayAttribute
struct ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F;
// UnityEngine.Scripting.PreserveAttribute
struct PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.RuntimeInitializeOnLoadMethodAttribute
struct RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D;
// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25;
// LionStudios.Suite.Core.SettingSectionAttribute
struct SettingSectionAttribute_t2D53AAB28E78D8A8500DDF9D6E526527E843EFED;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.ParamArrayAttribute
struct ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Scripting.PreserveAttribute
struct PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.HeaderAttribute
struct HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String UnityEngine.HeaderAttribute::header
	String_t* ___header_0;

public:
	inline static int32_t get_offset_of_header_0() { return static_cast<int32_t>(offsetof(HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB, ___header_0)); }
	inline String_t* get_header_0() const { return ___header_0; }
	inline String_t** get_address_of_header_0() { return &___header_0; }
	inline void set_header_0(String_t* value)
	{
		___header_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___header_0), (void*)value);
	}
};


// UnityEngine.RuntimeInitializeLoadType
struct RuntimeInitializeLoadType_t78BE0E3079AE8955C97DF6A9814A6E6BFA146EA5 
{
public:
	// System.Int32 UnityEngine.RuntimeInitializeLoadType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimeInitializeLoadType_t78BE0E3079AE8955C97DF6A9814A6E6BFA146EA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};


// UnityEngine.RuntimeInitializeOnLoadMethodAttribute
struct RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D  : public PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948
{
public:
	// UnityEngine.RuntimeInitializeLoadType UnityEngine.RuntimeInitializeOnLoadMethodAttribute::m_LoadType
	int32_t ___m_LoadType_0;

public:
	inline static int32_t get_offset_of_m_LoadType_0() { return static_cast<int32_t>(offsetof(RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D, ___m_LoadType_0)); }
	inline int32_t get_m_LoadType_0() const { return ___m_LoadType_0; }
	inline int32_t* get_address_of_m_LoadType_0() { return &___m_LoadType_0; }
	inline void set_m_LoadType_0(int32_t value)
	{
		___m_LoadType_0 = value;
	}
};


// LionStudios.Suite.Core.SettingSectionAttribute
struct SettingSectionAttribute_t2D53AAB28E78D8A8500DDF9D6E526527E843EFED  : public HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void UnityEngine.Scripting.PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_mBD1EEF1095DBD581365C77729CF4ACB914859CD2 (PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void UnityEngine.RuntimeInitializeOnLoadMethodAttribute::.ctor(UnityEngine.RuntimeInitializeLoadType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeInitializeOnLoadMethodAttribute__ctor_mE79C8FD7B18EC53391334A6E6A66CAF09CDA8516 (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * __this, int32_t ___loadType0, const RuntimeMethod* method);
// System.Void System.ParamArrayAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719 (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SerializeField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3 (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void LionStudios.Suite.Core.SettingSectionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingSectionAttribute__ctor_m6E453ECD0F10E35812453D25FE4EE69D5FD1D9E5 (SettingSectionAttribute_t2D53AAB28E78D8A8500DDF9D6E526527E843EFED * __this, String_t* ___header0, const RuntimeMethod* method);
static void LionAnalyticsRuntime_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 * tmp = (PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948 *)cache->attributes[0];
		PreserveAttribute__ctor_mBD1EEF1095DBD581365C77729CF4ACB914859CD2(tmp, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[1];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[2];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[3];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[4];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
}
static void AnalyticsManager_t40183A0DFD899710D9EA547355209DBF8AA13F52_CustomAttributesCacheGenerator_AnalyticsManager_OnAppStart_m58DEE91E648688B47B0E940499CFCE3B1773CEB7(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mE79C8FD7B18EC53391334A6E6A66CAF09CDA8516(tmp, 1LL, NULL);
	}
}
static void AnalyticsManager_t40183A0DFD899710D9EA547355209DBF8AA13F52_CustomAttributesCacheGenerator_AnalyticsManager_LogEvent_mC0287C865EA85DB5178C4A1F9AF883C72C1797B0____exclusiveTo2(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void Engagement_t8BDC8258686C637F0D2985AFC0E9F8E8C03F7FB6_CustomAttributesCacheGenerator_Engagement_RegisterEngagementEvent_m6E32EC4F66D2EB4952E1CB76001EF92C39D3885F____milestones1(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void Milestone_tC21567858AEA340C8DCF160A1702F67B9B6F3048_CustomAttributesCacheGenerator_value(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Milestone_tC21567858AEA340C8DCF160A1702F67B9B6F3048_CustomAttributesCacheGenerator_adjustToken(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Milestone_tC21567858AEA340C8DCF160A1702F67B9B6F3048_CustomAttributesCacheGenerator_firebaseToken(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void EngagementInfo_t58AD64FBD5900C41FACFF9D49CE1004E08C12AB4_CustomAttributesCacheGenerator_eventName(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void EngagementInfo_t58AD64FBD5900C41FACFF9D49CE1004E08C12AB4_CustomAttributesCacheGenerator_fireCount(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void EngagementInfo_t58AD64FBD5900C41FACFF9D49CE1004E08C12AB4_CustomAttributesCacheGenerator_milestones(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void LionAnalytics_t1890CC39C5BE98C761FD2BD8C8D330EE26F800DC_CustomAttributesCacheGenerator_OnLogEvent(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void LionAnalytics_t1890CC39C5BE98C761FD2BD8C8D330EE26F800DC_CustomAttributesCacheGenerator_LionAnalytics_add_OnLogEvent_m422E1B7E5183E29908749731482B880BEF6A3E7C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void LionAnalytics_t1890CC39C5BE98C761FD2BD8C8D330EE26F800DC_CustomAttributesCacheGenerator_LionAnalytics_remove_OnLogEvent_mF0BA5A51C9FEC4C00904A8CDC0A1D07A5BF5954C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void LionAnalytics_t1890CC39C5BE98C761FD2BD8C8D330EE26F800DC_CustomAttributesCacheGenerator_LionAnalytics_LogEvent_mC72EC1F4BA43469CAC9BF08EA90076B44D3C758C____exclusiveTo4(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void LionEventDelegate_t3D4482D5C141FA965E7BBD2356A940B49FE0EB7B_CustomAttributesCacheGenerator_LionEventDelegate_Invoke_m3236CD137CD77038E07DF94B4EB49C14D9F64913____exclusiveTo2(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void LionAnalyticsApplication_tC2C726B195A4C8B2AA0FF01ACB5AB222EB27282F_CustomAttributesCacheGenerator_LionAnalyticsApplication_OnAppStart_m326B6093FBEC61E92D1CCB981B54D631FA629845(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mE79C8FD7B18EC53391334A6E6A66CAF09CDA8516(tmp, 0LL, NULL);
	}
}
static void LionAnalyticsApplication_tC2C726B195A4C8B2AA0FF01ACB5AB222EB27282F_CustomAttributesCacheGenerator_LionAnalyticsApplication_OnEventFired_mCB3451F4176B614DDECCF57E52712E0D4820D29A____exclusiveTo2(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void LionAnalyticsSettings_t67EBB74AD1D91A1799B550A33ADC32FDF4370FA0_CustomAttributesCacheGenerator_heartbeatInterval(CustomAttributesCache* cache)
{
	{
		SettingSectionAttribute_t2D53AAB28E78D8A8500DDF9D6E526527E843EFED * tmp = (SettingSectionAttribute_t2D53AAB28E78D8A8500DDF9D6E526527E843EFED *)cache->attributes[0];
		SettingSectionAttribute__ctor_m6E453ECD0F10E35812453D25FE4EE69D5FD1D9E5(tmp, il2cpp_codegen_string_new_wrapper("\x47\x65\x6E\x65\x72\x61\x6C"), NULL);
	}
}
static void LionAnalyticsSettings_t67EBB74AD1D91A1799B550A33ADC32FDF4370FA0_CustomAttributesCacheGenerator_enableFirebaseEvents(CustomAttributesCache* cache)
{
	{
		SettingSectionAttribute_t2D53AAB28E78D8A8500DDF9D6E526527E843EFED * tmp = (SettingSectionAttribute_t2D53AAB28E78D8A8500DDF9D6E526527E843EFED *)cache->attributes[0];
		SettingSectionAttribute__ctor_m6E453ECD0F10E35812453D25FE4EE69D5FD1D9E5(tmp, il2cpp_codegen_string_new_wrapper("\x45\x76\x65\x6E\x74\x20\x46\x69\x72\x69\x6E\x67"), NULL);
	}
}
static void RealCurrency_tA0EFC1AFE431F82425622D954EBCD6F9F5390BD5_CustomAttributesCacheGenerator_realCurrencyAmount(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void RealCurrency_tA0EFC1AFE431F82425622D954EBCD6F9F5390BD5_CustomAttributesCacheGenerator_realCurrencyType(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void VirtualCurrency_tEEC3FBF300DB9FBECC2932E1A82BCA28E2E0C8C3_CustomAttributesCacheGenerator_virtualCurrencyAmount(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void VirtualCurrency_tEEC3FBF300DB9FBECC2932E1A82BCA28E2E0C8C3_CustomAttributesCacheGenerator_virtualCurrencyName(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void VirtualCurrency_tEEC3FBF300DB9FBECC2932E1A82BCA28E2E0C8C3_CustomAttributesCacheGenerator_virtualCurrencyType(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Item_tA0DDAD94177D6C1150DED69834B0746591C1D86A_CustomAttributesCacheGenerator_itemAmount(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Item_tA0DDAD94177D6C1150DED69834B0746591C1D86A_CustomAttributesCacheGenerator_itemName(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Item_tA0DDAD94177D6C1150DED69834B0746591C1D86A_CustomAttributesCacheGenerator_itemType(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Product_t5E5E21E442B0272BD34DF28B173F129BD4EE4666_CustomAttributesCacheGenerator_items(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Product_t5E5E21E442B0272BD34DF28B173F129BD4EE4666_CustomAttributesCacheGenerator_realCurrency(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Product_t5E5E21E442B0272BD34DF28B173F129BD4EE4666_CustomAttributesCacheGenerator_virtualCurrencies(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Reward_t67579E0F6F9BD1C68A83D094E8B528914297960D_CustomAttributesCacheGenerator_rewardName(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Reward_t67579E0F6F9BD1C68A83D094E8B528914297960D_CustomAttributesCacheGenerator_rewardProducts(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Transaction_tC041ED4C68894B42BFB521942CE20D98A3FC278D_CustomAttributesCacheGenerator_type(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Transaction_tC041ED4C68894B42BFB521942CE20D98A3FC278D_CustomAttributesCacheGenerator_name(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Transaction_tC041ED4C68894B42BFB521942CE20D98A3FC278D_CustomAttributesCacheGenerator_productRecieved(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Transaction_tC041ED4C68894B42BFB521942CE20D98A3FC278D_CustomAttributesCacheGenerator_productSpent(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Transaction_tC041ED4C68894B42BFB521942CE20D98A3FC278D_CustomAttributesCacheGenerator_transactionID(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void LionGameEvent_t2662696AC14E2DEF7591ED3C7FE925394535D0C3_CustomAttributesCacheGenerator_eventParams(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void DeltaDNA_tF446FB7B7131782641F5CCC5E1DD96D5DEE4E0B8_CustomAttributesCacheGenerator_U3CIsInitializedU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DeltaDNA_tF446FB7B7131782641F5CCC5E1DD96D5DEE4E0B8_CustomAttributesCacheGenerator_DeltaDNA_set_IsInitialized_m2F9F841DE193AE13FB0128083BD5F8926FF6D63B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_tEFBCF69FF0227EC1D5327A834DE602A98FD48331_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ObjectToDictionaryHelper_t74A6A7841771D6FAEC4F3930D08185D64F4F7BA7_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void U3CU3Ec_tAE8EA512A5F7FD541FB72C9EEBF3352BF45D2A0D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GameAnalytics_t9C3727F31F2AD2A46F533922F11BD6495AA85E87_CustomAttributesCacheGenerator_U3CIsInitializedU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GameAnalytics_t9C3727F31F2AD2A46F533922F11BD6495AA85E87_CustomAttributesCacheGenerator_GameAnalytics_get_IsInitialized_m1DFE10B230BBDF89CD70B36024B5DF0A9AED642B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GameAnalytics_t9C3727F31F2AD2A46F533922F11BD6495AA85E87_CustomAttributesCacheGenerator_GameAnalytics_set_IsInitialized_m21B94916EED9E469FA88BB7709FE4732B8A20135(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_tC40DBE10825ABD5AAD795465F1930A1BAE050775_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_LionAnalyticsRuntime_AttributeGenerators[];
const CustomAttributesCacheGenerator g_LionAnalyticsRuntime_AttributeGenerators[47] = 
{
	U3CU3Ec_tEFBCF69FF0227EC1D5327A834DE602A98FD48331_CustomAttributesCacheGenerator,
	ObjectToDictionaryHelper_t74A6A7841771D6FAEC4F3930D08185D64F4F7BA7_CustomAttributesCacheGenerator,
	U3CU3Ec_tAE8EA512A5F7FD541FB72C9EEBF3352BF45D2A0D_CustomAttributesCacheGenerator,
	U3CU3Ec_tC40DBE10825ABD5AAD795465F1930A1BAE050775_CustomAttributesCacheGenerator,
	Milestone_tC21567858AEA340C8DCF160A1702F67B9B6F3048_CustomAttributesCacheGenerator_value,
	Milestone_tC21567858AEA340C8DCF160A1702F67B9B6F3048_CustomAttributesCacheGenerator_adjustToken,
	Milestone_tC21567858AEA340C8DCF160A1702F67B9B6F3048_CustomAttributesCacheGenerator_firebaseToken,
	EngagementInfo_t58AD64FBD5900C41FACFF9D49CE1004E08C12AB4_CustomAttributesCacheGenerator_eventName,
	EngagementInfo_t58AD64FBD5900C41FACFF9D49CE1004E08C12AB4_CustomAttributesCacheGenerator_fireCount,
	EngagementInfo_t58AD64FBD5900C41FACFF9D49CE1004E08C12AB4_CustomAttributesCacheGenerator_milestones,
	LionAnalytics_t1890CC39C5BE98C761FD2BD8C8D330EE26F800DC_CustomAttributesCacheGenerator_OnLogEvent,
	LionAnalyticsSettings_t67EBB74AD1D91A1799B550A33ADC32FDF4370FA0_CustomAttributesCacheGenerator_heartbeatInterval,
	LionAnalyticsSettings_t67EBB74AD1D91A1799B550A33ADC32FDF4370FA0_CustomAttributesCacheGenerator_enableFirebaseEvents,
	RealCurrency_tA0EFC1AFE431F82425622D954EBCD6F9F5390BD5_CustomAttributesCacheGenerator_realCurrencyAmount,
	RealCurrency_tA0EFC1AFE431F82425622D954EBCD6F9F5390BD5_CustomAttributesCacheGenerator_realCurrencyType,
	VirtualCurrency_tEEC3FBF300DB9FBECC2932E1A82BCA28E2E0C8C3_CustomAttributesCacheGenerator_virtualCurrencyAmount,
	VirtualCurrency_tEEC3FBF300DB9FBECC2932E1A82BCA28E2E0C8C3_CustomAttributesCacheGenerator_virtualCurrencyName,
	VirtualCurrency_tEEC3FBF300DB9FBECC2932E1A82BCA28E2E0C8C3_CustomAttributesCacheGenerator_virtualCurrencyType,
	Item_tA0DDAD94177D6C1150DED69834B0746591C1D86A_CustomAttributesCacheGenerator_itemAmount,
	Item_tA0DDAD94177D6C1150DED69834B0746591C1D86A_CustomAttributesCacheGenerator_itemName,
	Item_tA0DDAD94177D6C1150DED69834B0746591C1D86A_CustomAttributesCacheGenerator_itemType,
	Product_t5E5E21E442B0272BD34DF28B173F129BD4EE4666_CustomAttributesCacheGenerator_items,
	Product_t5E5E21E442B0272BD34DF28B173F129BD4EE4666_CustomAttributesCacheGenerator_realCurrency,
	Product_t5E5E21E442B0272BD34DF28B173F129BD4EE4666_CustomAttributesCacheGenerator_virtualCurrencies,
	Reward_t67579E0F6F9BD1C68A83D094E8B528914297960D_CustomAttributesCacheGenerator_rewardName,
	Reward_t67579E0F6F9BD1C68A83D094E8B528914297960D_CustomAttributesCacheGenerator_rewardProducts,
	Transaction_tC041ED4C68894B42BFB521942CE20D98A3FC278D_CustomAttributesCacheGenerator_type,
	Transaction_tC041ED4C68894B42BFB521942CE20D98A3FC278D_CustomAttributesCacheGenerator_name,
	Transaction_tC041ED4C68894B42BFB521942CE20D98A3FC278D_CustomAttributesCacheGenerator_productRecieved,
	Transaction_tC041ED4C68894B42BFB521942CE20D98A3FC278D_CustomAttributesCacheGenerator_productSpent,
	Transaction_tC041ED4C68894B42BFB521942CE20D98A3FC278D_CustomAttributesCacheGenerator_transactionID,
	LionGameEvent_t2662696AC14E2DEF7591ED3C7FE925394535D0C3_CustomAttributesCacheGenerator_eventParams,
	DeltaDNA_tF446FB7B7131782641F5CCC5E1DD96D5DEE4E0B8_CustomAttributesCacheGenerator_U3CIsInitializedU3Ek__BackingField,
	GameAnalytics_t9C3727F31F2AD2A46F533922F11BD6495AA85E87_CustomAttributesCacheGenerator_U3CIsInitializedU3Ek__BackingField,
	AnalyticsManager_t40183A0DFD899710D9EA547355209DBF8AA13F52_CustomAttributesCacheGenerator_AnalyticsManager_OnAppStart_m58DEE91E648688B47B0E940499CFCE3B1773CEB7,
	LionAnalytics_t1890CC39C5BE98C761FD2BD8C8D330EE26F800DC_CustomAttributesCacheGenerator_LionAnalytics_add_OnLogEvent_m422E1B7E5183E29908749731482B880BEF6A3E7C,
	LionAnalytics_t1890CC39C5BE98C761FD2BD8C8D330EE26F800DC_CustomAttributesCacheGenerator_LionAnalytics_remove_OnLogEvent_mF0BA5A51C9FEC4C00904A8CDC0A1D07A5BF5954C,
	LionAnalyticsApplication_tC2C726B195A4C8B2AA0FF01ACB5AB222EB27282F_CustomAttributesCacheGenerator_LionAnalyticsApplication_OnAppStart_m326B6093FBEC61E92D1CCB981B54D631FA629845,
	DeltaDNA_tF446FB7B7131782641F5CCC5E1DD96D5DEE4E0B8_CustomAttributesCacheGenerator_DeltaDNA_set_IsInitialized_m2F9F841DE193AE13FB0128083BD5F8926FF6D63B,
	GameAnalytics_t9C3727F31F2AD2A46F533922F11BD6495AA85E87_CustomAttributesCacheGenerator_GameAnalytics_get_IsInitialized_m1DFE10B230BBDF89CD70B36024B5DF0A9AED642B,
	GameAnalytics_t9C3727F31F2AD2A46F533922F11BD6495AA85E87_CustomAttributesCacheGenerator_GameAnalytics_set_IsInitialized_m21B94916EED9E469FA88BB7709FE4732B8A20135,
	AnalyticsManager_t40183A0DFD899710D9EA547355209DBF8AA13F52_CustomAttributesCacheGenerator_AnalyticsManager_LogEvent_mC0287C865EA85DB5178C4A1F9AF883C72C1797B0____exclusiveTo2,
	Engagement_t8BDC8258686C637F0D2985AFC0E9F8E8C03F7FB6_CustomAttributesCacheGenerator_Engagement_RegisterEngagementEvent_m6E32EC4F66D2EB4952E1CB76001EF92C39D3885F____milestones1,
	LionAnalytics_t1890CC39C5BE98C761FD2BD8C8D330EE26F800DC_CustomAttributesCacheGenerator_LionAnalytics_LogEvent_mC72EC1F4BA43469CAC9BF08EA90076B44D3C758C____exclusiveTo4,
	LionEventDelegate_t3D4482D5C141FA965E7BBD2356A940B49FE0EB7B_CustomAttributesCacheGenerator_LionEventDelegate_Invoke_m3236CD137CD77038E07DF94B4EB49C14D9F64913____exclusiveTo2,
	LionAnalyticsApplication_tC2C726B195A4C8B2AA0FF01ACB5AB222EB27282F_CustomAttributesCacheGenerator_LionAnalyticsApplication_OnEventFired_mCB3451F4176B614DDECCF57E52712E0D4820D29A____exclusiveTo2,
	LionAnalyticsRuntime_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
