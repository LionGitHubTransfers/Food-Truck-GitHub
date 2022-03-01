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
// LionStudios.Runtime.Sdk.LionSdkInfo[]
struct LionSdkInfoU5BU5D_t2282DDDBCB310091563F0B82CC1E578709FB9850;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// LionStudios.Runtime.Sdk.LionSdkCollection
struct LionSdkCollection_t7D154562C4BB47F239594A24948A4836A785496C;
// LionStudios.Runtime.Sdk.LionSdkInfo
struct LionSdkInfo_tA0A56CF5A431535B44E6B9FD07B69D86C7411E00;
// LionStudios.Runtime.Sdk.LionSdkInfoRuntime
struct LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338;
// LionStudios.Runtime.Sdk.LionSdkService
struct LionSdkService_tE50DE3C7A46248C74F48CB7BFF0EF87F4E9C669B;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral361CFFFF73F96846F09A31772D20559EA15E4135;
IL2CPP_EXTERN_C String_t* _stringLiteral4A26A6A25CDEFD759BDDA4FE497622A870BEFF63;
IL2CPP_EXTERN_C String_t* _stringLiteral581DB911E05D07118B6B09D9FCE9D4FDFE4C0180;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisLionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338_m1E686FDE765ECF1545D35780CBEBEED9F93956E8_RuntimeMethod_var;

struct LionSdkInfoU5BU5D_t2282DDDBCB310091563F0B82CC1E578709FB9850;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3B131A721930EFEA009859EE8DA0D062B0916DD6 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// LionStudios.Runtime.Sdk.LionSdkCollection
struct LionSdkCollection_t7D154562C4BB47F239594A24948A4836A785496C  : public RuntimeObject
{
public:
	// LionStudios.Runtime.Sdk.LionSdkInfo[] LionStudios.Runtime.Sdk.LionSdkCollection::Sdks
	LionSdkInfoU5BU5D_t2282DDDBCB310091563F0B82CC1E578709FB9850* ___Sdks_0;

public:
	inline static int32_t get_offset_of_Sdks_0() { return static_cast<int32_t>(offsetof(LionSdkCollection_t7D154562C4BB47F239594A24948A4836A785496C, ___Sdks_0)); }
	inline LionSdkInfoU5BU5D_t2282DDDBCB310091563F0B82CC1E578709FB9850* get_Sdks_0() const { return ___Sdks_0; }
	inline LionSdkInfoU5BU5D_t2282DDDBCB310091563F0B82CC1E578709FB9850** get_address_of_Sdks_0() { return &___Sdks_0; }
	inline void set_Sdks_0(LionSdkInfoU5BU5D_t2282DDDBCB310091563F0B82CC1E578709FB9850* value)
	{
		___Sdks_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sdks_0), (void*)value);
	}
};


// LionStudios.Runtime.Sdk.LionSdkInfo
struct LionSdkInfo_tA0A56CF5A431535B44E6B9FD07B69D86C7411E00  : public RuntimeObject
{
public:
	// System.Int32 LionStudios.Runtime.Sdk.LionSdkInfo::ID
	int32_t ___ID_0;
	// System.Boolean LionStudios.Runtime.Sdk.LionSdkInfo::IsSupported
	bool ___IsSupported_1;
	// System.Boolean LionStudios.Runtime.Sdk.LionSdkInfo::IsInstalled
	bool ___IsInstalled_2;
	// System.Boolean LionStudios.Runtime.Sdk.LionSdkInfo::AssetAndPackageRequired
	bool ___AssetAndPackageRequired_3;
	// System.String LionStudios.Runtime.Sdk.LionSdkInfo::AssetPath
	String_t* ___AssetPath_4;
	// System.String LionStudios.Runtime.Sdk.LionSdkInfo::PackageName
	String_t* ___PackageName_5;
	// System.String[] LionStudios.Runtime.Sdk.LionSdkInfo::RequiredDirectories
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___RequiredDirectories_6;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(LionSdkInfo_tA0A56CF5A431535B44E6B9FD07B69D86C7411E00, ___ID_0)); }
	inline int32_t get_ID_0() const { return ___ID_0; }
	inline int32_t* get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(int32_t value)
	{
		___ID_0 = value;
	}

	inline static int32_t get_offset_of_IsSupported_1() { return static_cast<int32_t>(offsetof(LionSdkInfo_tA0A56CF5A431535B44E6B9FD07B69D86C7411E00, ___IsSupported_1)); }
	inline bool get_IsSupported_1() const { return ___IsSupported_1; }
	inline bool* get_address_of_IsSupported_1() { return &___IsSupported_1; }
	inline void set_IsSupported_1(bool value)
	{
		___IsSupported_1 = value;
	}

	inline static int32_t get_offset_of_IsInstalled_2() { return static_cast<int32_t>(offsetof(LionSdkInfo_tA0A56CF5A431535B44E6B9FD07B69D86C7411E00, ___IsInstalled_2)); }
	inline bool get_IsInstalled_2() const { return ___IsInstalled_2; }
	inline bool* get_address_of_IsInstalled_2() { return &___IsInstalled_2; }
	inline void set_IsInstalled_2(bool value)
	{
		___IsInstalled_2 = value;
	}

	inline static int32_t get_offset_of_AssetAndPackageRequired_3() { return static_cast<int32_t>(offsetof(LionSdkInfo_tA0A56CF5A431535B44E6B9FD07B69D86C7411E00, ___AssetAndPackageRequired_3)); }
	inline bool get_AssetAndPackageRequired_3() const { return ___AssetAndPackageRequired_3; }
	inline bool* get_address_of_AssetAndPackageRequired_3() { return &___AssetAndPackageRequired_3; }
	inline void set_AssetAndPackageRequired_3(bool value)
	{
		___AssetAndPackageRequired_3 = value;
	}

	inline static int32_t get_offset_of_AssetPath_4() { return static_cast<int32_t>(offsetof(LionSdkInfo_tA0A56CF5A431535B44E6B9FD07B69D86C7411E00, ___AssetPath_4)); }
	inline String_t* get_AssetPath_4() const { return ___AssetPath_4; }
	inline String_t** get_address_of_AssetPath_4() { return &___AssetPath_4; }
	inline void set_AssetPath_4(String_t* value)
	{
		___AssetPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssetPath_4), (void*)value);
	}

	inline static int32_t get_offset_of_PackageName_5() { return static_cast<int32_t>(offsetof(LionSdkInfo_tA0A56CF5A431535B44E6B9FD07B69D86C7411E00, ___PackageName_5)); }
	inline String_t* get_PackageName_5() const { return ___PackageName_5; }
	inline String_t** get_address_of_PackageName_5() { return &___PackageName_5; }
	inline void set_PackageName_5(String_t* value)
	{
		___PackageName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PackageName_5), (void*)value);
	}

	inline static int32_t get_offset_of_RequiredDirectories_6() { return static_cast<int32_t>(offsetof(LionSdkInfo_tA0A56CF5A431535B44E6B9FD07B69D86C7411E00, ___RequiredDirectories_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_RequiredDirectories_6() const { return ___RequiredDirectories_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_RequiredDirectories_6() { return &___RequiredDirectories_6; }
	inline void set_RequiredDirectories_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___RequiredDirectories_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RequiredDirectories_6), (void*)value);
	}
};


// LionStudios.Runtime.Sdk.LionSdkService
struct LionSdkService_tE50DE3C7A46248C74F48CB7BFF0EF87F4E9C669B  : public RuntimeObject
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

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
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


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// LionStudios.Runtime.Sdk.SdkId
struct SdkId_tD9B12B05D8D21CDB37581D4FE6894A555F45B316 
{
public:
	// System.Int32 LionStudios.Runtime.Sdk.SdkId::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SdkId_tD9B12B05D8D21CDB37581D4FE6894A555F45B316, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// LionStudios.Runtime.Sdk.LionSdkInfoRuntime
struct LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean LionStudios.Runtime.Sdk.LionSdkInfoRuntime::defineScriptingSymbols
	bool ___defineScriptingSymbols_7;
	// LionStudios.Runtime.Sdk.LionSdkCollection LionStudios.Runtime.Sdk.LionSdkInfoRuntime::Sdks
	LionSdkCollection_t7D154562C4BB47F239594A24948A4836A785496C * ___Sdks_8;

public:
	inline static int32_t get_offset_of_defineScriptingSymbols_7() { return static_cast<int32_t>(offsetof(LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338, ___defineScriptingSymbols_7)); }
	inline bool get_defineScriptingSymbols_7() const { return ___defineScriptingSymbols_7; }
	inline bool* get_address_of_defineScriptingSymbols_7() { return &___defineScriptingSymbols_7; }
	inline void set_defineScriptingSymbols_7(bool value)
	{
		___defineScriptingSymbols_7 = value;
	}

	inline static int32_t get_offset_of_Sdks_8() { return static_cast<int32_t>(offsetof(LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338, ___Sdks_8)); }
	inline LionSdkCollection_t7D154562C4BB47F239594A24948A4836A785496C * get_Sdks_8() const { return ___Sdks_8; }
	inline LionSdkCollection_t7D154562C4BB47F239594A24948A4836A785496C ** get_address_of_Sdks_8() { return &___Sdks_8; }
	inline void set_Sdks_8(LionSdkCollection_t7D154562C4BB47F239594A24948A4836A785496C * value)
	{
		___Sdks_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sdks_8), (void*)value);
	}
};

struct LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338_StaticFields
{
public:
	// LionStudios.Runtime.Sdk.LionSdkInfoRuntime LionStudios.Runtime.Sdk.LionSdkInfoRuntime::_runtimeAsset
	LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * ____runtimeAsset_6;

public:
	inline static int32_t get_offset_of__runtimeAsset_6() { return static_cast<int32_t>(offsetof(LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338_StaticFields, ____runtimeAsset_6)); }
	inline LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * get__runtimeAsset_6() const { return ____runtimeAsset_6; }
	inline LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 ** get_address_of__runtimeAsset_6() { return &____runtimeAsset_6; }
	inline void set__runtimeAsset_6(LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * value)
	{
		____runtimeAsset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____runtimeAsset_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// LionStudios.Runtime.Sdk.LionSdkInfo[]
struct LionSdkInfoU5BU5D_t2282DDDBCB310091563F0B82CC1E578709FB9850  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LionSdkInfo_tA0A56CF5A431535B44E6B9FD07B69D86C7411E00 * m_Items[1];

public:
	inline LionSdkInfo_tA0A56CF5A431535B44E6B9FD07B69D86C7411E00 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LionSdkInfo_tA0A56CF5A431535B44E6B9FD07B69D86C7411E00 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LionSdkInfo_tA0A56CF5A431535B44E6B9FD07B69D86C7411E00 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LionSdkInfo_tA0A56CF5A431535B44E6B9FD07B69D86C7411E00 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LionSdkInfo_tA0A56CF5A431535B44E6B9FD07B69D86C7411E00 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LionSdkInfo_tA0A56CF5A431535B44E6B9FD07B69D86C7411E00 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared (String_t* ___path0, const RuntimeMethod* method);

// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<LionStudios.Runtime.Sdk.LionSdkInfoRuntime>(System.String)
inline LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * Resources_Load_TisLionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338_m1E686FDE765ECF1545D35780CBEBEED9F93956E8 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared)(___path0, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// LionStudios.Runtime.Sdk.LionSdkInfoRuntime LionStudios.Runtime.Sdk.LionSdkInfoRuntime::get_RuntimeInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * LionSdkInfoRuntime_get_RuntimeInfo_m904AFBCFADFD22FFEAD5C4189D8111762AFAFF7E (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator LionStudios.Runtime.Sdk.LionSdkCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LionSdkCollection_GetEnumerator_m811C8FA40EC553EC998BDFC4525FA74A388FF47E (LionSdkCollection_t7D154562C4BB47F239594A24948A4836A785496C * __this, const RuntimeMethod* method)
{
	{
		// return Sdks.GetEnumerator();
		LionSdkInfoU5BU5D_t2282DDDBCB310091563F0B82CC1E578709FB9850* L_0 = __this->get_Sdks_0();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		RuntimeObject* L_1;
		L_1 = Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void LionStudios.Runtime.Sdk.LionSdkCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LionSdkCollection__ctor_m22D009BF7C5F9F7AA6AAE8411E61D94337AE7160 (LionSdkCollection_t7D154562C4BB47F239594A24948A4836A785496C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LionStudios.Runtime.Sdk.LionSdkInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LionSdkInfo__ctor_m99B01CF2A00374A0774083FEB875DE0A1854D142 (LionSdkInfo_tA0A56CF5A431535B44E6B9FD07B69D86C7411E00 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// LionStudios.Runtime.Sdk.LionSdkInfoRuntime LionStudios.Runtime.Sdk.LionSdkInfoRuntime::get_RuntimeInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * LionSdkInfoRuntime_get_RuntimeInfo_m904AFBCFADFD22FFEAD5C4189D8111762AFAFF7E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisLionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338_m1E686FDE765ECF1545D35780CBEBEED9F93956E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral361CFFFF73F96846F09A31772D20559EA15E4135);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A26A6A25CDEFD759BDDA4FE497622A870BEFF63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral581DB911E05D07118B6B09D9FCE9D4FDFE4C0180);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * V_0 = NULL;
	{
		// if (_runtimeAsset == null)
		LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * L_0 = ((LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338_StaticFields*)il2cpp_codegen_static_fields_for(LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338_il2cpp_TypeInfo_var))->get__runtimeAsset_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// var asset = Resources.Load<LionSdkInfoRuntime>(assetPath.Replace(".asset", ""));
		NullCheck(_stringLiteral581DB911E05D07118B6B09D9FCE9D4FDFE4C0180);
		String_t* L_2;
		L_2 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(_stringLiteral581DB911E05D07118B6B09D9FCE9D4FDFE4C0180, _stringLiteral361CFFFF73F96846F09A31772D20559EA15E4135, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * L_3;
		L_3 = Resources_Load_TisLionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338_m1E686FDE765ECF1545D35780CBEBEED9F93956E8(L_2, /*hidden argument*/Resources_Load_TisLionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338_m1E686FDE765ECF1545D35780CBEBEED9F93956E8_RuntimeMethod_var);
		V_0 = L_3;
		// if (asset == null)
		LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		// Debug.LogWarning("Lion SDK Service: Failed to retrieve runtime SDKs. Resource is missing!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral4A26A6A25CDEFD759BDDA4FE497622A870BEFF63, /*hidden argument*/NULL);
		// return null;
		return (LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 *)NULL;
	}

IL_003c:
	{
		// _runtimeAsset = asset;
		LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * L_6 = V_0;
		((LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338_StaticFields*)il2cpp_codegen_static_fields_for(LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338_il2cpp_TypeInfo_var))->set__runtimeAsset_6(L_6);
	}

IL_0042:
	{
		// return _runtimeAsset;
		LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * L_7 = ((LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338_StaticFields*)il2cpp_codegen_static_fields_for(LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338_il2cpp_TypeInfo_var))->get__runtimeAsset_6();
		return L_7;
	}
}
// System.Void LionStudios.Runtime.Sdk.LionSdkInfoRuntime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LionSdkInfoRuntime__ctor_m333698101F95AC3144A4E029999335BDD60B2354 (LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] public bool defineScriptingSymbols = true;
		__this->set_defineScriptingSymbols_7((bool)1);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// LionStudios.Runtime.Sdk.LionSdkCollection LionStudios.Runtime.Sdk.LionSdkService::GetRuntimeSdkInfos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LionSdkCollection_t7D154562C4BB47F239594A24948A4836A785496C * LionSdkService_GetRuntimeSdkInfos_m4B1538D6D8A2F7A07AEC65F273A4C82DE5FB036E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * V_0 = NULL;
	{
		// LionSdkInfoRuntime runtimeSdkInfo = LionSdkInfoRuntime.RuntimeInfo;
		LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * L_0;
		L_0 = LionSdkInfoRuntime_get_RuntimeInfo_m904AFBCFADFD22FFEAD5C4189D8111762AFAFF7E(/*hidden argument*/NULL);
		V_0 = L_0;
		// return runtimeSdkInfo != null ? runtimeSdkInfo.Sdks : null;
		LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (LionSdkCollection_t7D154562C4BB47F239594A24948A4836A785496C *)NULL;
	}

IL_0011:
	{
		LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * L_3 = V_0;
		NullCheck(L_3);
		LionSdkCollection_t7D154562C4BB47F239594A24948A4836A785496C * L_4 = L_3->get_Sdks_8();
		return L_4;
	}
}
// System.Boolean LionStudios.Runtime.Sdk.LionSdkService::CanDefineScriptingSymbols()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LionSdkService_CanDefineScriptingSymbols_m7BF77C6A115ECBC8AEEF21281D935FA9BE082520 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * V_0 = NULL;
	{
		// LionSdkInfoRuntime runtimeSdkInfo = LionSdkInfoRuntime.RuntimeInfo;
		LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * L_0;
		L_0 = LionSdkInfoRuntime_get_RuntimeInfo_m904AFBCFADFD22FFEAD5C4189D8111762AFAFF7E(/*hidden argument*/NULL);
		V_0 = L_0;
		// return runtimeSdkInfo != null && runtimeSdkInfo.defineScriptingSymbols;
		LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = L_3->get_defineScriptingSymbols_7();
		return L_4;
	}

IL_0016:
	{
		return (bool)0;
	}
}
// System.Void LionStudios.Runtime.Sdk.LionSdkService::SetDefineScriptingSymbols(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LionSdkService_SetDefineScriptingSymbols_m316EEABD32D1BC45798DD8016CA29B3F26EA5E7D (bool ___shouldDefine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * V_0 = NULL;
	{
		// LionSdkInfoRuntime runtimeSdkInfo = LionSdkInfoRuntime.RuntimeInfo;
		LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * L_0;
		L_0 = LionSdkInfoRuntime_get_RuntimeInfo_m904AFBCFADFD22FFEAD5C4189D8111762AFAFF7E(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (runtimeSdkInfo != null)
		LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// runtimeSdkInfo.defineScriptingSymbols = shouldDefine;
		LionSdkInfoRuntime_t2698A08DDBF7C7438C97BB940076FA79028C4338 * L_3 = V_0;
		bool L_4 = ___shouldDefine0;
		NullCheck(L_3);
		L_3->set_defineScriptingSymbols_7(L_4);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void LionStudios.Runtime.Sdk.LionSdkService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LionSdkService__ctor_mB87ADC9E08CFF890E687034A9FE646391966180C (LionSdkService_tE50DE3C7A46248C74F48CB7BFF0EF87F4E9C669B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
