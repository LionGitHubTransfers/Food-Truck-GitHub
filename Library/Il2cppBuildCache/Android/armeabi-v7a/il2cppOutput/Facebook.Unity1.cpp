#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InterfaceActionInvoker9
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Facebook.Unity.Utilities/Callback`1<System.Object>
struct Callback_1_tF838C06A8F58095205FFA0726E0806CDB03C6A97;
// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>
struct Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>
struct FacebookDelegate_1_t19DCD0CB7469670B22F77F21012DC78320E30269;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t7F874B0ABF0EA33627106C3B0E881E2DED8AD362;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>
struct FacebookDelegate_1_tBF767821D6227C2B047C48CC1B33AC20C07FFB55;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>
struct FacebookDelegate_1_t6279CFE16F644D3D23CB58078ED3D07E6AFBEDE9;
// Facebook.Unity.FacebookDelegate`1<System.Object>
struct FacebookDelegate_1_tF0451F78E13CCF394CCDEF8CE64B89F9C5FCED99;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Object>
struct Func_2_tC2D0A554B56BFFA7277B37446A6B1EC55DDB43D5;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>
struct Func_2_t3FFD2A062C881BA94689CF1CA146C49E3109D7A5;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// Facebook.Unity.AccessToken
struct AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Facebook.Unity.Mobile.Android.AndroidFacebook
struct AndroidFacebook_t60B3A6C3AC97799AEF427D3C4413AF27290A9E1E;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Facebook.Unity.AsyncRequestString
struct AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2;
// Facebook.Unity.AuthenticationToken
struct AuthenticationToken_t887C43F6128D9D8E937994618969472D97FC0E61;
// Facebook.Unity.CallbackManager
struct CallbackManager_tC11D9B61B64435A0F8A365915AE8C49D3A7E67E7;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// Facebook.Unity.Canvas.CanvasFacebook
struct CanvasFacebook_tAA30DBE4032D110838045C7410570F9DB39C8637;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Facebook.Unity.Editor.EditorFacebookMockDialog
struct EditorFacebookMockDialog_tED6E44AFBC3DF5B93DB89A7137CDF227687DB951;
// Facebook.Unity.FBLocation
struct FBLocation_t2C326DEEF3612A5BDB88503AA1F843CC6655254F;
// Facebook.Unity.FacebookGameObject
struct FacebookGameObject_t6FC4F88C6F002C8663BD2429B8E090A960E341BA;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// Facebook.Unity.Gameroom.GameroomFacebook
struct GameroomFacebook_t5F063C3632F0F61E7EAB6B5E594C21F46D669F20;
// Facebook.Unity.Gameroom.GameroomFacebookGameObject
struct GameroomFacebookGameObject_t5A562D965FCCF7838C82251F00C524F3CFAD51D0;
// Facebook.Unity.GraphResult
struct GraphResult_t5FFF348FCD41CB781E8BE359FB14160489B86883;
// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t20FD43E26003761ABD29BE7379356065AAB4334F;
// Facebook.Unity.IAccessTokenRefreshResult
struct IAccessTokenRefreshResult_t9BCFB7CA7B0528A1813829FB5BBE2B00E077F0F9;
// Facebook.Unity.Mobile.Android.IAndroidWrapper
struct IAndroidWrapper_tA91EC6E26D9D5186A59BDF8BE3BC1292249E338E;
// Facebook.Unity.IAppLinkResult
struct IAppLinkResult_t311ED239B46A836F13AB4CD39B46A7525C5B07E2;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Facebook.Unity.Canvas.ICanvasJSWrapper
struct ICanvasJSWrapper_t16FE1C3B3C1D41E8538B9F450265CB3EDEF4074D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Facebook.Unity.Editor.IEditorWrapper
struct IEditorWrapper_t2BECBF4E329F9C5AF446C385A941E5429EC1EF54;
// Facebook.Unity.IFacebook
struct IFacebook_tE52E2B26B8CEB4198305B2E057464365267090A9;
// Facebook.Unity.IFacebookImplementation
struct IFacebookImplementation_t585A0ED076FE969A829FDBCCFE78CEDEE11B47DC;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Facebook.Unity.Gameroom.IGameroomFacebookImplementation
struct IGameroomFacebookImplementation_t70B030DF075F9711EFB68B801A2E93BD5788F204;
// Facebook.Unity.Gameroom.IGameroomWrapper
struct IGameroomWrapper_t419C49C4F512DB75601E18FC3F6F41944FC21431;
// Facebook.Unity.IGraphResult
struct IGraphResult_t16EC3CFB7D8A9729222B2365BEE2F219B9811C3F;
// Facebook.Unity.Mobile.IOS.IIOSWrapper
struct IIOSWrapper_t6B72DF9BA276BAE907EBBBC4803C48D631764962;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// Facebook.Unity.ILoginResult
struct ILoginResult_tD6F3F563B1F887B8A2BE1CF596637650359C6703;
// Facebook.Unity.Mobile.IMobileFacebook
struct IMobileFacebook_t962A52DB163C36DE5F9B1B08B422A3FDC964E1A2;
// Facebook.Unity.Mobile.IOS.IOSFacebook
struct IOSFacebook_t37653B5398AACEE2A4D3688D563788544E513307;
// Facebook.Unity.IPayFacebook
struct IPayFacebook_tF1D22BCC25D4E5D84D956862277B986414A2AC5C;
// Facebook.Unity.IPayResult
struct IPayResult_t086F49E02AD56937D82451830418BB5436A2FA46;
// Facebook.Unity.InitDelegate
struct InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// Facebook.Unity.LoginResult
struct LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Facebook.Unity.Editor.Dialogs.MockLoginDialog
struct MockLoginDialog_t9CF05624F932E4AC61432980C65D8A59B6CA8202;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Facebook.Unity.Profile
struct Profile_tCC112B8E256DCA324D698BB44B95C3F614B36DA8;
// Facebook.Unity.ResultContainer
struct ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// Facebook.Unity.UserAgeRange
struct UserAgeRange_t83D15D5C6AAEF71B67C128F01325A09D298CB4BE;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2;
// UnityEngine.WWWForm
struct WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Facebook.Unity.Mobile.Android.AndroidFacebook/<>c
struct U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD;
// Facebook.Unity.AsyncRequestString/<Start>d__9
struct U3CStartU3Ed__9_t619A356D65AD06788AE694D9A1B27A38A4BB7DA4;
// Facebook.Unity.Canvas.CanvasFacebook/<>c
struct U3CU3Ec_t02C80072E1F79793486660F0BC57274F8045F458;
// Facebook.Unity.Canvas.CanvasFacebook/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_t0C304C31318E62E8685EE88F061F2CA6BAF07951;
// Facebook.Unity.CodelessCrawler/<GenSnapshot>d__4
struct U3CGenSnapshotU3Ed__4_t4B5784FDB861343907AB4DD9FD48DC33D7117F0A;
// Facebook.Unity.FB/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t96F783DEAEE6492B06A555EFD436C664B3208E3A;
// Facebook.Unity.FB/CompiledFacebookLoader
struct CompiledFacebookLoader_t1EE238D974A0BED1DA0BC94C1847155659DDB349;
// Facebook.Unity.FB/OnDLLLoaded
struct OnDLLLoaded_tF6931D34771F7C57F71E731BFE7B86676BCA26FC;
// Facebook.Unity.FacebookBase/<>c
struct U3CU3Ec_t53E3994EE79BD19A2AEE97604EDBCD10CE5C858C;
// Facebook.Unity.FacebookLogger/DebugLogger
struct DebugLogger_t580F68C2BC119A2580DCFEE27B8C52BDC1D80D36;
// Facebook.Unity.FacebookScheduler/<DelayEvent>d__1
struct U3CDelayEventU3Ed__1_t5B41FBF2618D632C0B0B1A8DC4C662ECFEA5241F;
// Facebook.Unity.Gameroom.GameroomFacebook/OnComplete
struct OnComplete_tDE1F16FBF428F5A978FDDBF43106E8B6465EC241;
// Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4
struct U3CWaitForPipeResponseU3Ed__4_t4A416F461521640A7202078016C783C772C785FF;
// Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict
struct NativeDict_t7F0F20CA44B5C90D5076D1EB289255DDEA8F42AF;
// Facebook.MiniJSON.Json/Parser
struct Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5;
// Facebook.MiniJSON.Json/Serializer
struct Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66;
// Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tD6EC22C3A6D96467F8872D905E76417DEBD50EF2;
// Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_1
struct U3CU3Ec__DisplayClass4_1_t056A49F163C02E87FC239F5CBA664067200F7165;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;
// Facebook.Unity.Utilities/<>c
struct U3CU3Ec_t07DB35654B84F9536C79685DDE68969F89E08208;

IL2CPP_EXTERN_C RuntimeClass* AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidFacebook_t60B3A6C3AC97799AEF427D3C4413AF27290A9E1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CanvasFacebook_tAA30DBE4032D110838045C7410570F9DB39C8637_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodelessCrawler_t85819DEFF58EEA402B26524950C20319B05EF11B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EditorFacebook_t4CE9311FD5798AFD943D6482B226B6439312CBDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FacebookLogger_t0F27F4DDF3EB5BA82DB668A6F4C6DFF45EB5E80B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FacebookSettings_tAC373F51E9F99E33E69D709A9D7517656A4784CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameroomFacebook_t5F063C3632F0F61E7EAB6B5E594C21F46D669F20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphResult_t5FFF348FCD41CB781E8BE359FB14160489B86883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tFBD6BBCAEB863478E70CD1504627E429F27569AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t692ABF80A29FB82368A57AE22841134E3626E47A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGameroomFacebookImplementation_t70B030DF075F9711EFB68B801A2E93BD5788F204_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMobileFacebook_t962A52DB163C36DE5F9B1B08B422A3FDC964E1A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOSFacebook_t37653B5398AACEE2A4D3688D563788544E513307_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPayFacebook_tF1D22BCC25D4E5D84D956862277B986414A2AC5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResult_tE2C6E14B59E6319C21F14DD742A81C3FD18CD7B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Json_tE1BF00925B378B16FE51D56A77E44547E84C03DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_1_t056A49F163C02E87FC239F5CBA664067200F7165_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t02C80072E1F79793486660F0BC57274F8045F458_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t07DB35654B84F9536C79685DDE68969F89E08208_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t53E3994EE79BD19A2AEE97604EDBCD10CE5C858C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral028D7034AFF25D3F9A597A5740013E38DA19D317;
IL2CPP_EXTERN_C String_t* _stringLiteral0B09BDDCF49998D084C7F5812B74CC75E585E07E;
IL2CPP_EXTERN_C String_t* _stringLiteral0E0A5DD7448FDA396D48F77CFABCEBB72D6A5D19;
IL2CPP_EXTERN_C String_t* _stringLiteral126A04A5A066C00B77AB4F3483884A7606F6BC5D;
IL2CPP_EXTERN_C String_t* _stringLiteral19D3A81B765D034E8C41B2AB7A578C2C3487E054;
IL2CPP_EXTERN_C String_t* _stringLiteral30A7BF1FEE5DF8662ED83E80AA4537E34CC0361B;
IL2CPP_EXTERN_C String_t* _stringLiteral3E1A3C74C7169410C083C38E4316E0B616B1FB85;
IL2CPP_EXTERN_C String_t* _stringLiteral3F3FFF195FC51E628335B6613953826BB06DAEB4;
IL2CPP_EXTERN_C String_t* _stringLiteral46C0DBF8E329C836732C7C6705567D71C6792B50;
IL2CPP_EXTERN_C String_t* _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4BB4572C6AC73940D49948BC96E824C0CFA913C8;
IL2CPP_EXTERN_C String_t* _stringLiteral586A13F06AE71843C594D008B796A8DE2A0A1597;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral61C5BF6A6E4334AE2F67DAEAABE3F356020EDF3F;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral783DB8EDE0D1EDC2174AC1931718AC55B6E28426;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9C633E7C674E23EA753146B1D433678CB78C44D6;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C2DC3333076E17431CD723AAF28851A9E0594E;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA5D04E432BAC10E5BF00FAEE5AD03DFA57F88C4C;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralD0FFE255F631035C3E8FE88B4BA4AE40910A8DE5;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralE79F08E3990626B5F3144E992D4D2F7D14584EC0;
IL2CPP_EXTERN_C String_t* _stringLiteralE8DE737330234B3EAC92FAE2AAB6B7DB5326CB91;
IL2CPP_EXTERN_C String_t* _stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF468E0BCDE9855E7830073A32AF7323CC7E46952;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralFADDF05B43A17EA6A8388C2C998770D78F8909EE;
IL2CPP_EXTERN_C String_t* _stringLiteralFD4706B02823C71252FBF63A74CF03433A8DADF0;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA304DCE1819EEDA733FB5961DF71438C48F96B;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_1_Invoke_m68DA77FC073985AEBA44E208A3826A0D1A0F4526_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Canvas_get_FacebookPayImpl_m8598573BC92C2F84A99E4F21CA4CB1D6EE4A7107_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FacebookDelegate_1_Invoke_m9653C735B153146CE4B92F6E8BB3CDA447AADB6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FacebookDelegate_1__ctor_m9191F920293FB38D34AEFF835D0CDC350C82FA2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mobile_get_MobileFacebookImpl_m4ABCFB81CEDB44023E871E65BF4F8A4CD097987A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayEventU3Ed__1_System_Collections_IEnumerator_Reset_m66BAF46423AA07B0D2D5FDB768D863A6803814BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGenSnapshotU3Ed__4_System_Collections_IEnumerator_Reset_mA698BF518628E3A06BB8B7EC033342F6CF8EBFAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__9_System_Collections_IEnumerator_Reset_mAC4C9A86B93095D3F39A525E6D4FEA6368E6CF8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_1_U3CSendSuccessResultU3Eb__1_m31D2106A057FC52C260EB0EB214FD48795440834_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForPipeResponseU3Ed__4_System_Collections_IEnumerator_Reset_mA5E7F4E34F9BEEF8C32E3AF93E7AE8D525411B6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utilities_TryGetValue_TisIDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_m31E18EDD7089F929896DB8F2E2000A726D95244B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utilities_TryGetValue_TisIList_1_t707982BD768B18C51D263C759F33BCDBDFA44901_mC5A9385470CA6BC0F4EDA1B39807C93F0EABFABB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utilities_TryGetValue_TisString_t_m3616C0960546F48FAF831005C69AB3773EE3AC5A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// Facebook.Unity.FacebookBase
struct FacebookBase_t54BC547C9FED87F66FF339072136A02AF87DF0CC  : public RuntimeObject
{
public:
	// Facebook.Unity.InitDelegate Facebook.Unity.FacebookBase::onInitCompleteDelegate
	InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D * ___onInitCompleteDelegate_0;
	// System.Boolean Facebook.Unity.FacebookBase::<Initialized>k__BackingField
	bool ___U3CInitializedU3Ek__BackingField_1;
	// Facebook.Unity.CallbackManager Facebook.Unity.FacebookBase::<CallbackManager>k__BackingField
	CallbackManager_tC11D9B61B64435A0F8A365915AE8C49D3A7E67E7 * ___U3CCallbackManagerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_onInitCompleteDelegate_0() { return static_cast<int32_t>(offsetof(FacebookBase_t54BC547C9FED87F66FF339072136A02AF87DF0CC, ___onInitCompleteDelegate_0)); }
	inline InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D * get_onInitCompleteDelegate_0() const { return ___onInitCompleteDelegate_0; }
	inline InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D ** get_address_of_onInitCompleteDelegate_0() { return &___onInitCompleteDelegate_0; }
	inline void set_onInitCompleteDelegate_0(InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D * value)
	{
		___onInitCompleteDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onInitCompleteDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInitializedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FacebookBase_t54BC547C9FED87F66FF339072136A02AF87DF0CC, ___U3CInitializedU3Ek__BackingField_1)); }
	inline bool get_U3CInitializedU3Ek__BackingField_1() const { return ___U3CInitializedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CInitializedU3Ek__BackingField_1() { return &___U3CInitializedU3Ek__BackingField_1; }
	inline void set_U3CInitializedU3Ek__BackingField_1(bool value)
	{
		___U3CInitializedU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CCallbackManagerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FacebookBase_t54BC547C9FED87F66FF339072136A02AF87DF0CC, ___U3CCallbackManagerU3Ek__BackingField_2)); }
	inline CallbackManager_tC11D9B61B64435A0F8A365915AE8C49D3A7E67E7 * get_U3CCallbackManagerU3Ek__BackingField_2() const { return ___U3CCallbackManagerU3Ek__BackingField_2; }
	inline CallbackManager_tC11D9B61B64435A0F8A365915AE8C49D3A7E67E7 ** get_address_of_U3CCallbackManagerU3Ek__BackingField_2() { return &___U3CCallbackManagerU3Ek__BackingField_2; }
	inline void set_U3CCallbackManagerU3Ek__BackingField_2(CallbackManager_tC11D9B61B64435A0F8A365915AE8C49D3A7E67E7 * value)
	{
		___U3CCallbackManagerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCallbackManagerU3Ek__BackingField_2), (void*)value);
	}
};


// Facebook.MiniJSON.Json
struct Json_tE1BF00925B378B16FE51D56A77E44547E84C03DB  : public RuntimeObject
{
public:

public:
};

struct Json_tE1BF00925B378B16FE51D56A77E44547E84C03DB_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo Facebook.MiniJSON.Json::numberFormat
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numberFormat_0;

public:
	inline static int32_t get_offset_of_numberFormat_0() { return static_cast<int32_t>(offsetof(Json_tE1BF00925B378B16FE51D56A77E44547E84C03DB_StaticFields, ___numberFormat_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numberFormat_0() const { return ___numberFormat_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numberFormat_0() { return &___numberFormat_0; }
	inline void set_numberFormat_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numberFormat_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberFormat_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Facebook.Unity.ResultContainer
struct ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5  : public RuntimeObject
{
public:
	// System.String Facebook.Unity.ResultContainer::<RawResult>k__BackingField
	String_t* ___U3CRawResultU3Ek__BackingField_1;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.ResultContainer::<ResultDictionary>k__BackingField
	RuntimeObject* ___U3CResultDictionaryU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CRawResultU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5, ___U3CRawResultU3Ek__BackingField_1)); }
	inline String_t* get_U3CRawResultU3Ek__BackingField_1() const { return ___U3CRawResultU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CRawResultU3Ek__BackingField_1() { return &___U3CRawResultU3Ek__BackingField_1; }
	inline void set_U3CRawResultU3Ek__BackingField_1(String_t* value)
	{
		___U3CRawResultU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRawResultU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultDictionaryU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5, ___U3CResultDictionaryU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CResultDictionaryU3Ek__BackingField_2() const { return ___U3CResultDictionaryU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CResultDictionaryU3Ek__BackingField_2() { return &___U3CResultDictionaryU3Ek__BackingField_2; }
	inline void set_U3CResultDictionaryU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CResultDictionaryU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultDictionaryU3Ek__BackingField_2), (void*)value);
	}
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// UnityEngine.WWWForm
struct WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___formData_0)); }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * get_formData_0() const { return ___formData_0; }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formData_0), (void*)value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___fieldNames_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldNames_1), (void*)value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___fileNames_2)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileNames_2), (void*)value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___types_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_types_3() const { return ___types_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___types_3), (void*)value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___boundary_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundary_4), (void*)value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Facebook.Unity.Mobile.Android.AndroidFacebook/<>c
struct U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD_StaticFields
{
public:
	// Facebook.Unity.Mobile.Android.AndroidFacebook/<>c Facebook.Unity.Mobile.Android.AndroidFacebook/<>c::<>9
	U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD * ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String> Facebook.Unity.Mobile.Android.AndroidFacebook/<>c::<>9__65_0
	Func_2_t3FFD2A062C881BA94689CF1CA146C49E3109D7A5 * ___U3CU3E9__65_0_1;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Object> Facebook.Unity.Mobile.Android.AndroidFacebook/<>c::<>9__65_1
	Func_2_tC2D0A554B56BFFA7277B37446A6B1EC55DDB43D5 * ___U3CU3E9__65_1_2;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String> Facebook.Unity.Mobile.Android.AndroidFacebook/<>c::<>9__66_0
	Func_2_t3FFD2A062C881BA94689CF1CA146C49E3109D7A5 * ___U3CU3E9__66_0_3;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Object> Facebook.Unity.Mobile.Android.AndroidFacebook/<>c::<>9__66_1
	Func_2_tC2D0A554B56BFFA7277B37446A6B1EC55DDB43D5 * ___U3CU3E9__66_1_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__65_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD_StaticFields, ___U3CU3E9__65_0_1)); }
	inline Func_2_t3FFD2A062C881BA94689CF1CA146C49E3109D7A5 * get_U3CU3E9__65_0_1() const { return ___U3CU3E9__65_0_1; }
	inline Func_2_t3FFD2A062C881BA94689CF1CA146C49E3109D7A5 ** get_address_of_U3CU3E9__65_0_1() { return &___U3CU3E9__65_0_1; }
	inline void set_U3CU3E9__65_0_1(Func_2_t3FFD2A062C881BA94689CF1CA146C49E3109D7A5 * value)
	{
		___U3CU3E9__65_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__65_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__65_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD_StaticFields, ___U3CU3E9__65_1_2)); }
	inline Func_2_tC2D0A554B56BFFA7277B37446A6B1EC55DDB43D5 * get_U3CU3E9__65_1_2() const { return ___U3CU3E9__65_1_2; }
	inline Func_2_tC2D0A554B56BFFA7277B37446A6B1EC55DDB43D5 ** get_address_of_U3CU3E9__65_1_2() { return &___U3CU3E9__65_1_2; }
	inline void set_U3CU3E9__65_1_2(Func_2_tC2D0A554B56BFFA7277B37446A6B1EC55DDB43D5 * value)
	{
		___U3CU3E9__65_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__65_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__66_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD_StaticFields, ___U3CU3E9__66_0_3)); }
	inline Func_2_t3FFD2A062C881BA94689CF1CA146C49E3109D7A5 * get_U3CU3E9__66_0_3() const { return ___U3CU3E9__66_0_3; }
	inline Func_2_t3FFD2A062C881BA94689CF1CA146C49E3109D7A5 ** get_address_of_U3CU3E9__66_0_3() { return &___U3CU3E9__66_0_3; }
	inline void set_U3CU3E9__66_0_3(Func_2_t3FFD2A062C881BA94689CF1CA146C49E3109D7A5 * value)
	{
		___U3CU3E9__66_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__66_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__66_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD_StaticFields, ___U3CU3E9__66_1_4)); }
	inline Func_2_tC2D0A554B56BFFA7277B37446A6B1EC55DDB43D5 * get_U3CU3E9__66_1_4() const { return ___U3CU3E9__66_1_4; }
	inline Func_2_tC2D0A554B56BFFA7277B37446A6B1EC55DDB43D5 ** get_address_of_U3CU3E9__66_1_4() { return &___U3CU3E9__66_1_4; }
	inline void set_U3CU3E9__66_1_4(Func_2_tC2D0A554B56BFFA7277B37446A6B1EC55DDB43D5 * value)
	{
		___U3CU3E9__66_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__66_1_4), (void*)value);
	}
};


// Facebook.Unity.AsyncRequestString/<Start>d__9
struct U3CStartU3Ed__9_t619A356D65AD06788AE694D9A1B27A38A4BB7DA4  : public RuntimeObject
{
public:
	// System.Int32 Facebook.Unity.AsyncRequestString/<Start>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.Unity.AsyncRequestString/<Start>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Facebook.Unity.AsyncRequestString Facebook.Unity.AsyncRequestString/<Start>d__9::<>4__this
	AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * ___U3CU3E4__this_2;
	// UnityEngine.WWW Facebook.Unity.AsyncRequestString/<Start>d__9::<www>5__2
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__9_t619A356D65AD06788AE694D9A1B27A38A4BB7DA4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__9_t619A356D65AD06788AE694D9A1B27A38A4BB7DA4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__9_t619A356D65AD06788AE694D9A1B27A38A4BB7DA4, ___U3CU3E4__this_2)); }
	inline AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__9_t619A356D65AD06788AE694D9A1B27A38A4BB7DA4, ___U3CwwwU3E5__2_3)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// Facebook.Unity.Canvas.CanvasFacebook/<>c
struct U3CU3Ec_t02C80072E1F79793486660F0BC57274F8045F458  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t02C80072E1F79793486660F0BC57274F8045F458_StaticFields
{
public:
	// Facebook.Unity.Canvas.CanvasFacebook/<>c Facebook.Unity.Canvas.CanvasFacebook/<>c::<>9
	U3CU3Ec_t02C80072E1F79793486660F0BC57274F8045F458 * ___U3CU3E9_0;
	// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer> Facebook.Unity.Canvas.CanvasFacebook/<>c::<>9__40_0
	Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A * ___U3CU3E9__40_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t02C80072E1F79793486660F0BC57274F8045F458_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t02C80072E1F79793486660F0BC57274F8045F458 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t02C80072E1F79793486660F0BC57274F8045F458 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t02C80072E1F79793486660F0BC57274F8045F458 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__40_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t02C80072E1F79793486660F0BC57274F8045F458_StaticFields, ___U3CU3E9__40_0_1)); }
	inline Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A * get_U3CU3E9__40_0_1() const { return ___U3CU3E9__40_0_1; }
	inline Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A ** get_address_of_U3CU3E9__40_0_1() { return &___U3CU3E9__40_0_1; }
	inline void set_U3CU3E9__40_0_1(Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A * value)
	{
		___U3CU3E9__40_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__40_0_1), (void*)value);
	}
};


// Facebook.Unity.Canvas.CanvasFacebook/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_t0C304C31318E62E8685EE88F061F2CA6BAF07951  : public RuntimeObject
{
public:
	// Facebook.Unity.ResultContainer Facebook.Unity.Canvas.CanvasFacebook/<>c__DisplayClass47_0::result
	ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * ___result_0;
	// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer> Facebook.Unity.Canvas.CanvasFacebook/<>c__DisplayClass47_0::callback
	Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A * ___callback_1;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t0C304C31318E62E8685EE88F061F2CA6BAF07951, ___result_0)); }
	inline ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * get_result_0() const { return ___result_0; }
	inline ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t0C304C31318E62E8685EE88F061F2CA6BAF07951, ___callback_1)); }
	inline Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A * get_callback_1() const { return ___callback_1; }
	inline Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};


// Facebook.Unity.CodelessCrawler/<GenSnapshot>d__4
struct U3CGenSnapshotU3Ed__4_t4B5784FDB861343907AB4DD9FD48DC33D7117F0A  : public RuntimeObject
{
public:
	// System.Int32 Facebook.Unity.CodelessCrawler/<GenSnapshot>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.Unity.CodelessCrawler/<GenSnapshot>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGenSnapshotU3Ed__4_t4B5784FDB861343907AB4DD9FD48DC33D7117F0A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGenSnapshotU3Ed__4_t4B5784FDB861343907AB4DD9FD48DC33D7117F0A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// Facebook.Unity.FB/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t96F783DEAEE6492B06A555EFD436C664B3208E3A  : public RuntimeObject
{
public:
	// Facebook.Unity.InitDelegate Facebook.Unity.FB/<>c__DisplayClass36_0::onInitComplete
	InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D * ___onInitComplete_0;
	// System.String Facebook.Unity.FB/<>c__DisplayClass36_0::appId
	String_t* ___appId_1;
	// System.Boolean Facebook.Unity.FB/<>c__DisplayClass36_0::cookie
	bool ___cookie_2;
	// System.Boolean Facebook.Unity.FB/<>c__DisplayClass36_0::logging
	bool ___logging_3;
	// System.Boolean Facebook.Unity.FB/<>c__DisplayClass36_0::status
	bool ___status_4;
	// System.Boolean Facebook.Unity.FB/<>c__DisplayClass36_0::xfbml
	bool ___xfbml_5;
	// System.String Facebook.Unity.FB/<>c__DisplayClass36_0::authResponse
	String_t* ___authResponse_6;
	// System.Boolean Facebook.Unity.FB/<>c__DisplayClass36_0::frictionlessRequests
	bool ___frictionlessRequests_7;
	// System.String Facebook.Unity.FB/<>c__DisplayClass36_0::javascriptSDKLocale
	String_t* ___javascriptSDKLocale_8;
	// Facebook.Unity.HideUnityDelegate Facebook.Unity.FB/<>c__DisplayClass36_0::onHideUnity
	HideUnityDelegate_t20FD43E26003761ABD29BE7379356065AAB4334F * ___onHideUnity_9;

public:
	inline static int32_t get_offset_of_onInitComplete_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t96F783DEAEE6492B06A555EFD436C664B3208E3A, ___onInitComplete_0)); }
	inline InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D * get_onInitComplete_0() const { return ___onInitComplete_0; }
	inline InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D ** get_address_of_onInitComplete_0() { return &___onInitComplete_0; }
	inline void set_onInitComplete_0(InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D * value)
	{
		___onInitComplete_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onInitComplete_0), (void*)value);
	}

	inline static int32_t get_offset_of_appId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t96F783DEAEE6492B06A555EFD436C664B3208E3A, ___appId_1)); }
	inline String_t* get_appId_1() const { return ___appId_1; }
	inline String_t** get_address_of_appId_1() { return &___appId_1; }
	inline void set_appId_1(String_t* value)
	{
		___appId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appId_1), (void*)value);
	}

	inline static int32_t get_offset_of_cookie_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t96F783DEAEE6492B06A555EFD436C664B3208E3A, ___cookie_2)); }
	inline bool get_cookie_2() const { return ___cookie_2; }
	inline bool* get_address_of_cookie_2() { return &___cookie_2; }
	inline void set_cookie_2(bool value)
	{
		___cookie_2 = value;
	}

	inline static int32_t get_offset_of_logging_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t96F783DEAEE6492B06A555EFD436C664B3208E3A, ___logging_3)); }
	inline bool get_logging_3() const { return ___logging_3; }
	inline bool* get_address_of_logging_3() { return &___logging_3; }
	inline void set_logging_3(bool value)
	{
		___logging_3 = value;
	}

	inline static int32_t get_offset_of_status_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t96F783DEAEE6492B06A555EFD436C664B3208E3A, ___status_4)); }
	inline bool get_status_4() const { return ___status_4; }
	inline bool* get_address_of_status_4() { return &___status_4; }
	inline void set_status_4(bool value)
	{
		___status_4 = value;
	}

	inline static int32_t get_offset_of_xfbml_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t96F783DEAEE6492B06A555EFD436C664B3208E3A, ___xfbml_5)); }
	inline bool get_xfbml_5() const { return ___xfbml_5; }
	inline bool* get_address_of_xfbml_5() { return &___xfbml_5; }
	inline void set_xfbml_5(bool value)
	{
		___xfbml_5 = value;
	}

	inline static int32_t get_offset_of_authResponse_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t96F783DEAEE6492B06A555EFD436C664B3208E3A, ___authResponse_6)); }
	inline String_t* get_authResponse_6() const { return ___authResponse_6; }
	inline String_t** get_address_of_authResponse_6() { return &___authResponse_6; }
	inline void set_authResponse_6(String_t* value)
	{
		___authResponse_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authResponse_6), (void*)value);
	}

	inline static int32_t get_offset_of_frictionlessRequests_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t96F783DEAEE6492B06A555EFD436C664B3208E3A, ___frictionlessRequests_7)); }
	inline bool get_frictionlessRequests_7() const { return ___frictionlessRequests_7; }
	inline bool* get_address_of_frictionlessRequests_7() { return &___frictionlessRequests_7; }
	inline void set_frictionlessRequests_7(bool value)
	{
		___frictionlessRequests_7 = value;
	}

	inline static int32_t get_offset_of_javascriptSDKLocale_8() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t96F783DEAEE6492B06A555EFD436C664B3208E3A, ___javascriptSDKLocale_8)); }
	inline String_t* get_javascriptSDKLocale_8() const { return ___javascriptSDKLocale_8; }
	inline String_t** get_address_of_javascriptSDKLocale_8() { return &___javascriptSDKLocale_8; }
	inline void set_javascriptSDKLocale_8(String_t* value)
	{
		___javascriptSDKLocale_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javascriptSDKLocale_8), (void*)value);
	}

	inline static int32_t get_offset_of_onHideUnity_9() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t96F783DEAEE6492B06A555EFD436C664B3208E3A, ___onHideUnity_9)); }
	inline HideUnityDelegate_t20FD43E26003761ABD29BE7379356065AAB4334F * get_onHideUnity_9() const { return ___onHideUnity_9; }
	inline HideUnityDelegate_t20FD43E26003761ABD29BE7379356065AAB4334F ** get_address_of_onHideUnity_9() { return &___onHideUnity_9; }
	inline void set_onHideUnity_9(HideUnityDelegate_t20FD43E26003761ABD29BE7379356065AAB4334F * value)
	{
		___onHideUnity_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHideUnity_9), (void*)value);
	}
};


// Facebook.Unity.FB/Canvas
struct Canvas_tA06A6FC14A40FFE0B5231CA00121D40AE4F06A9F  : public RuntimeObject
{
public:

public:
};


// Facebook.Unity.FB/Mobile
struct Mobile_t2039ABDF422BEAED6D69D9A0125A686B71ECFD24  : public RuntimeObject
{
public:

public:
};


// Facebook.Unity.FacebookBase/<>c
struct U3CU3Ec_t53E3994EE79BD19A2AEE97604EDBCD10CE5C858C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t53E3994EE79BD19A2AEE97604EDBCD10CE5C858C_StaticFields
{
public:
	// Facebook.Unity.FacebookBase/<>c Facebook.Unity.FacebookBase/<>c::<>9
	U3CU3Ec_t53E3994EE79BD19A2AEE97604EDBCD10CE5C858C * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> Facebook.Unity.FacebookBase/<>c::<>9__41_0
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__41_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t53E3994EE79BD19A2AEE97604EDBCD10CE5C858C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t53E3994EE79BD19A2AEE97604EDBCD10CE5C858C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t53E3994EE79BD19A2AEE97604EDBCD10CE5C858C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t53E3994EE79BD19A2AEE97604EDBCD10CE5C858C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t53E3994EE79BD19A2AEE97604EDBCD10CE5C858C_StaticFields, ___U3CU3E9__41_0_1)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__41_0_1() const { return ___U3CU3E9__41_0_1; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__41_0_1() { return &___U3CU3E9__41_0_1; }
	inline void set_U3CU3E9__41_0_1(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__41_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_0_1), (void*)value);
	}
};


// Facebook.Unity.FacebookLogger/DebugLogger
struct DebugLogger_t580F68C2BC119A2580DCFEE27B8C52BDC1D80D36  : public RuntimeObject
{
public:

public:
};


// Facebook.Unity.FacebookScheduler/<DelayEvent>d__1
struct U3CDelayEventU3Ed__1_t5B41FBF2618D632C0B0B1A8DC4C662ECFEA5241F  : public RuntimeObject
{
public:
	// System.Int32 Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int64 Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::delay
	int64_t ___delay_2;
	// System.Action Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayEventU3Ed__1_t5B41FBF2618D632C0B0B1A8DC4C662ECFEA5241F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayEventU3Ed__1_t5B41FBF2618D632C0B0B1A8DC4C662ECFEA5241F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CDelayEventU3Ed__1_t5B41FBF2618D632C0B0B1A8DC4C662ECFEA5241F, ___delay_2)); }
	inline int64_t get_delay_2() const { return ___delay_2; }
	inline int64_t* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(int64_t value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CDelayEventU3Ed__1_t5B41FBF2618D632C0B0B1A8DC4C662ECFEA5241F, ___action_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_3() const { return ___action_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}
};


// Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4
struct U3CWaitForPipeResponseU3Ed__4_t4A416F461521640A7202078016C783C772C785FF  : public RuntimeObject
{
public:
	// System.Int32 Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Facebook.Unity.Gameroom.GameroomFacebookGameObject Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::<>4__this
	GameroomFacebookGameObject_t5A562D965FCCF7838C82251F00C524F3CFAD51D0 * ___U3CU3E4__this_2;
	// Facebook.Unity.Gameroom.GameroomFacebook/OnComplete Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::onCompleteDelegate
	OnComplete_tDE1F16FBF428F5A978FDDBF43106E8B6465EC241 * ___onCompleteDelegate_3;
	// System.String Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::callbackId
	String_t* ___callbackId_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForPipeResponseU3Ed__4_t4A416F461521640A7202078016C783C772C785FF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForPipeResponseU3Ed__4_t4A416F461521640A7202078016C783C772C785FF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitForPipeResponseU3Ed__4_t4A416F461521640A7202078016C783C772C785FF, ___U3CU3E4__this_2)); }
	inline GameroomFacebookGameObject_t5A562D965FCCF7838C82251F00C524F3CFAD51D0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameroomFacebookGameObject_t5A562D965FCCF7838C82251F00C524F3CFAD51D0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameroomFacebookGameObject_t5A562D965FCCF7838C82251F00C524F3CFAD51D0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_onCompleteDelegate_3() { return static_cast<int32_t>(offsetof(U3CWaitForPipeResponseU3Ed__4_t4A416F461521640A7202078016C783C772C785FF, ___onCompleteDelegate_3)); }
	inline OnComplete_tDE1F16FBF428F5A978FDDBF43106E8B6465EC241 * get_onCompleteDelegate_3() const { return ___onCompleteDelegate_3; }
	inline OnComplete_tDE1F16FBF428F5A978FDDBF43106E8B6465EC241 ** get_address_of_onCompleteDelegate_3() { return &___onCompleteDelegate_3; }
	inline void set_onCompleteDelegate_3(OnComplete_tDE1F16FBF428F5A978FDDBF43106E8B6465EC241 * value)
	{
		___onCompleteDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCompleteDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_callbackId_4() { return static_cast<int32_t>(offsetof(U3CWaitForPipeResponseU3Ed__4_t4A416F461521640A7202078016C783C772C785FF, ___callbackId_4)); }
	inline String_t* get_callbackId_4() const { return ___callbackId_4; }
	inline String_t** get_address_of_callbackId_4() { return &___callbackId_4; }
	inline void set_callbackId_4(String_t* value)
	{
		___callbackId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackId_4), (void*)value);
	}
};


// Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict
struct NativeDict_t7F0F20CA44B5C90D5076D1EB289255DDEA8F42AF  : public RuntimeObject
{
public:
	// System.Int32 Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::<NumEntries>k__BackingField
	int32_t ___U3CNumEntriesU3Ek__BackingField_0;
	// System.String[] Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::<Keys>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CKeysU3Ek__BackingField_1;
	// System.String[] Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::<Values>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CValuesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CNumEntriesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeDict_t7F0F20CA44B5C90D5076D1EB289255DDEA8F42AF, ___U3CNumEntriesU3Ek__BackingField_0)); }
	inline int32_t get_U3CNumEntriesU3Ek__BackingField_0() const { return ___U3CNumEntriesU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CNumEntriesU3Ek__BackingField_0() { return &___U3CNumEntriesU3Ek__BackingField_0; }
	inline void set_U3CNumEntriesU3Ek__BackingField_0(int32_t value)
	{
		___U3CNumEntriesU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CKeysU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NativeDict_t7F0F20CA44B5C90D5076D1EB289255DDEA8F42AF, ___U3CKeysU3Ek__BackingField_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CKeysU3Ek__BackingField_1() const { return ___U3CKeysU3Ek__BackingField_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CKeysU3Ek__BackingField_1() { return &___U3CKeysU3Ek__BackingField_1; }
	inline void set_U3CKeysU3Ek__BackingField_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CKeysU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeysU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValuesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NativeDict_t7F0F20CA44B5C90D5076D1EB289255DDEA8F42AF, ___U3CValuesU3Ek__BackingField_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CValuesU3Ek__BackingField_2() const { return ___U3CValuesU3Ek__BackingField_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CValuesU3Ek__BackingField_2() { return &___U3CValuesU3Ek__BackingField_2; }
	inline void set_U3CValuesU3Ek__BackingField_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CValuesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValuesU3Ek__BackingField_2), (void*)value);
	}
};


// Facebook.MiniJSON.Json/Parser
struct Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5  : public RuntimeObject
{
public:
	// System.IO.StringReader Facebook.MiniJSON.Json/Parser::json
	StringReader_t74E352C280EAC22C878867444978741F19E1F895 * ___json_0;

public:
	inline static int32_t get_offset_of_json_0() { return static_cast<int32_t>(offsetof(Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5, ___json_0)); }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 * get_json_0() const { return ___json_0; }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 ** get_address_of_json_0() { return &___json_0; }
	inline void set_json_0(StringReader_t74E352C280EAC22C878867444978741F19E1F895 * value)
	{
		___json_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_0), (void*)value);
	}
};


// Facebook.MiniJSON.Json/Serializer
struct Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66  : public RuntimeObject
{
public:
	// System.Text.StringBuilder Facebook.MiniJSON.Json/Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builder_0), (void*)value);
	}
};


// Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tD6EC22C3A6D96467F8872D905E76417DEBD50EF2  : public RuntimeObject
{
public:
	// Facebook.Unity.Editor.Dialogs.MockLoginDialog Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_0::<>4__this
	MockLoginDialog_t9CF05624F932E4AC61432980C65D8A59B6CA8202 * ___U3CU3E4__this_0;
	// System.String Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_0::graphDomain
	String_t* ___graphDomain_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tD6EC22C3A6D96467F8872D905E76417DEBD50EF2, ___U3CU3E4__this_0)); }
	inline MockLoginDialog_t9CF05624F932E4AC61432980C65D8A59B6CA8202 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline MockLoginDialog_t9CF05624F932E4AC61432980C65D8A59B6CA8202 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(MockLoginDialog_t9CF05624F932E4AC61432980C65D8A59B6CA8202 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_graphDomain_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tD6EC22C3A6D96467F8872D905E76417DEBD50EF2, ___graphDomain_1)); }
	inline String_t* get_graphDomain_1() const { return ___graphDomain_1; }
	inline String_t** get_address_of_graphDomain_1() { return &___graphDomain_1; }
	inline void set_graphDomain_1(String_t* value)
	{
		___graphDomain_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphDomain_1), (void*)value);
	}
};


// Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_1
struct U3CU3Ec__DisplayClass4_1_t056A49F163C02E87FC239F5CBA664067200F7165  : public RuntimeObject
{
public:
	// System.String Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_1::facebookID
	String_t* ___facebookID_0;
	// Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_0 Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass4_0_tD6EC22C3A6D96467F8872D905E76417DEBD50EF2 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_facebookID_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_1_t056A49F163C02E87FC239F5CBA664067200F7165, ___facebookID_0)); }
	inline String_t* get_facebookID_0() const { return ___facebookID_0; }
	inline String_t** get_address_of_facebookID_0() { return &___facebookID_0; }
	inline void set_facebookID_0(String_t* value)
	{
		___facebookID_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___facebookID_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_1_t056A49F163C02E87FC239F5CBA664067200F7165, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass4_0_tD6EC22C3A6D96467F8872D905E76417DEBD50EF2 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass4_0_tD6EC22C3A6D96467F8872D905E76417DEBD50EF2 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass4_0_tD6EC22C3A6D96467F8872D905E76417DEBD50EF2 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Facebook.Unity.Utilities/<>c
struct U3CU3Ec_t07DB35654B84F9536C79685DDE68969F89E08208  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t07DB35654B84F9536C79685DDE68969F89E08208_StaticFields
{
public:
	// Facebook.Unity.Utilities/<>c Facebook.Unity.Utilities/<>c::<>9
	U3CU3Ec_t07DB35654B84F9536C79685DDE68969F89E08208 * ___U3CU3E9_0;
	// System.Func`2<System.Object,System.String> Facebook.Unity.Utilities/<>c::<>9__19_0
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ___U3CU3E9__19_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t07DB35654B84F9536C79685DDE68969F89E08208_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t07DB35654B84F9536C79685DDE68969F89E08208 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t07DB35654B84F9536C79685DDE68969F89E08208 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t07DB35654B84F9536C79685DDE68969F89E08208 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t07DB35654B84F9536C79685DDE68969F89E08208_StaticFields, ___U3CU3E9__19_0_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get_U3CU3E9__19_0_1() const { return ___U3CU3E9__19_0_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of_U3CU3E9__19_0_1() { return &___U3CU3E9__19_0_1; }
	inline void set_U3CU3E9__19_0_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		___U3CU3E9__19_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int64>
struct Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// Facebook.Unity.Canvas.CanvasFacebook
struct CanvasFacebook_tAA30DBE4032D110838045C7410570F9DB39C8637  : public FacebookBase_t54BC547C9FED87F66FF339072136A02AF87DF0CC
{
public:
	// System.String Facebook.Unity.Canvas.CanvasFacebook::appId
	String_t* ___appId_3;
	// System.String Facebook.Unity.Canvas.CanvasFacebook::appLinkUrl
	String_t* ___appLinkUrl_4;
	// Facebook.Unity.Canvas.ICanvasJSWrapper Facebook.Unity.Canvas.CanvasFacebook::canvasJSWrapper
	RuntimeObject* ___canvasJSWrapper_5;
	// Facebook.Unity.HideUnityDelegate Facebook.Unity.Canvas.CanvasFacebook::onHideUnityDelegate
	HideUnityDelegate_t20FD43E26003761ABD29BE7379356065AAB4334F * ___onHideUnityDelegate_6;
	// System.Boolean Facebook.Unity.Canvas.CanvasFacebook::<LimitEventUsage>k__BackingField
	bool ___U3CLimitEventUsageU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_appId_3() { return static_cast<int32_t>(offsetof(CanvasFacebook_tAA30DBE4032D110838045C7410570F9DB39C8637, ___appId_3)); }
	inline String_t* get_appId_3() const { return ___appId_3; }
	inline String_t** get_address_of_appId_3() { return &___appId_3; }
	inline void set_appId_3(String_t* value)
	{
		___appId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appId_3), (void*)value);
	}

	inline static int32_t get_offset_of_appLinkUrl_4() { return static_cast<int32_t>(offsetof(CanvasFacebook_tAA30DBE4032D110838045C7410570F9DB39C8637, ___appLinkUrl_4)); }
	inline String_t* get_appLinkUrl_4() const { return ___appLinkUrl_4; }
	inline String_t** get_address_of_appLinkUrl_4() { return &___appLinkUrl_4; }
	inline void set_appLinkUrl_4(String_t* value)
	{
		___appLinkUrl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appLinkUrl_4), (void*)value);
	}

	inline static int32_t get_offset_of_canvasJSWrapper_5() { return static_cast<int32_t>(offsetof(CanvasFacebook_tAA30DBE4032D110838045C7410570F9DB39C8637, ___canvasJSWrapper_5)); }
	inline RuntimeObject* get_canvasJSWrapper_5() const { return ___canvasJSWrapper_5; }
	inline RuntimeObject** get_address_of_canvasJSWrapper_5() { return &___canvasJSWrapper_5; }
	inline void set_canvasJSWrapper_5(RuntimeObject* value)
	{
		___canvasJSWrapper_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvasJSWrapper_5), (void*)value);
	}

	inline static int32_t get_offset_of_onHideUnityDelegate_6() { return static_cast<int32_t>(offsetof(CanvasFacebook_tAA30DBE4032D110838045C7410570F9DB39C8637, ___onHideUnityDelegate_6)); }
	inline HideUnityDelegate_t20FD43E26003761ABD29BE7379356065AAB4334F * get_onHideUnityDelegate_6() const { return ___onHideUnityDelegate_6; }
	inline HideUnityDelegate_t20FD43E26003761ABD29BE7379356065AAB4334F ** get_address_of_onHideUnityDelegate_6() { return &___onHideUnityDelegate_6; }
	inline void set_onHideUnityDelegate_6(HideUnityDelegate_t20FD43E26003761ABD29BE7379356065AAB4334F * value)
	{
		___onHideUnityDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHideUnityDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLimitEventUsageU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CanvasFacebook_tAA30DBE4032D110838045C7410570F9DB39C8637, ___U3CLimitEventUsageU3Ek__BackingField_7)); }
	inline bool get_U3CLimitEventUsageU3Ek__BackingField_7() const { return ___U3CLimitEventUsageU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CLimitEventUsageU3Ek__BackingField_7() { return &___U3CLimitEventUsageU3Ek__BackingField_7; }
	inline void set_U3CLimitEventUsageU3Ek__BackingField_7(bool value)
	{
		___U3CLimitEventUsageU3Ek__BackingField_7 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// Facebook.Unity.Gameroom.GameroomFacebook
struct GameroomFacebook_t5F063C3632F0F61E7EAB6B5E594C21F46D669F20  : public FacebookBase_t54BC547C9FED87F66FF339072136A02AF87DF0CC
{
public:
	// System.String Facebook.Unity.Gameroom.GameroomFacebook::appId
	String_t* ___appId_3;
	// Facebook.Unity.Gameroom.IGameroomWrapper Facebook.Unity.Gameroom.GameroomFacebook::gameroomWrapper
	RuntimeObject* ___gameroomWrapper_4;
	// System.Boolean Facebook.Unity.Gameroom.GameroomFacebook::<LimitEventUsage>k__BackingField
	bool ___U3CLimitEventUsageU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_appId_3() { return static_cast<int32_t>(offsetof(GameroomFacebook_t5F063C3632F0F61E7EAB6B5E594C21F46D669F20, ___appId_3)); }
	inline String_t* get_appId_3() const { return ___appId_3; }
	inline String_t** get_address_of_appId_3() { return &___appId_3; }
	inline void set_appId_3(String_t* value)
	{
		___appId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appId_3), (void*)value);
	}

	inline static int32_t get_offset_of_gameroomWrapper_4() { return static_cast<int32_t>(offsetof(GameroomFacebook_t5F063C3632F0F61E7EAB6B5E594C21F46D669F20, ___gameroomWrapper_4)); }
	inline RuntimeObject* get_gameroomWrapper_4() const { return ___gameroomWrapper_4; }
	inline RuntimeObject** get_address_of_gameroomWrapper_4() { return &___gameroomWrapper_4; }
	inline void set_gameroomWrapper_4(RuntimeObject* value)
	{
		___gameroomWrapper_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameroomWrapper_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLimitEventUsageU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GameroomFacebook_t5F063C3632F0F61E7EAB6B5E594C21F46D669F20, ___U3CLimitEventUsageU3Ek__BackingField_5)); }
	inline bool get_U3CLimitEventUsageU3Ek__BackingField_5() const { return ___U3CLimitEventUsageU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CLimitEventUsageU3Ek__BackingField_5() { return &___U3CLimitEventUsageU3Ek__BackingField_5; }
	inline void set_U3CLimitEventUsageU3Ek__BackingField_5(bool value)
	{
		___U3CLimitEventUsageU3Ek__BackingField_5 = value;
	}
};


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ____uwr_0;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2, ____uwr_0)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uwr_0), (void*)value);
	}
};


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Nullable`1<System.DateTime>
struct Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D 
{
public:
	// T System.Nullable`1::value
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___value_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_value_0() const { return ___value_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Facebook.Unity.FacebookUnityPlatform
struct FacebookUnityPlatform_t48F4C8544ED06A73FF342DE3F4B5C6BF74EE2A91 
{
public:
	// System.Int32 Facebook.Unity.FacebookUnityPlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FacebookUnityPlatform_t48F4C8544ED06A73FF342DE3F4B5C6BF74EE2A91, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Facebook.Unity.HttpMethod
struct HttpMethod_t922A8F74E73EA92A3DBCB1D474C19952F2CBFD1E 
{
public:
	// System.Int32 Facebook.Unity.HttpMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpMethod_t922A8F74E73EA92A3DBCB1D474C19952F2CBFD1E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Facebook.Unity.LoginTracking
struct LoginTracking_t36B4B12D45A6022A2FE6C37623BA32E606DB57C5 
{
public:
	// System.Int32 Facebook.Unity.LoginTracking::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoginTracking_t36B4B12D45A6022A2FE6C37623BA32E606DB57C5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberStyles
struct NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Facebook.Unity.ResultBase
struct ResultBase_tCD4C11D5601FB7FFB697BFFB5A17A84AC666752A  : public RuntimeObject
{
public:
	// System.String Facebook.Unity.ResultBase::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Facebook.Unity.ResultBase::<ErrorDictionary>k__BackingField
	RuntimeObject* ___U3CErrorDictionaryU3Ek__BackingField_1;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.ResultBase::<ResultDictionary>k__BackingField
	RuntimeObject* ___U3CResultDictionaryU3Ek__BackingField_2;
	// System.String Facebook.Unity.ResultBase::<RawResult>k__BackingField
	String_t* ___U3CRawResultU3Ek__BackingField_3;
	// System.Boolean Facebook.Unity.ResultBase::<Cancelled>k__BackingField
	bool ___U3CCancelledU3Ek__BackingField_4;
	// System.String Facebook.Unity.ResultBase::<CallbackId>k__BackingField
	String_t* ___U3CCallbackIdU3Ek__BackingField_5;
	// System.Nullable`1<System.Int64> Facebook.Unity.ResultBase::<CanvasErrorCode>k__BackingField
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___U3CCanvasErrorCodeU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ResultBase_tCD4C11D5601FB7FFB697BFFB5A17A84AC666752A, ___U3CErrorU3Ek__BackingField_0)); }
	inline String_t* get_U3CErrorU3Ek__BackingField_0() const { return ___U3CErrorU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CErrorU3Ek__BackingField_0() { return &___U3CErrorU3Ek__BackingField_0; }
	inline void set_U3CErrorU3Ek__BackingField_0(String_t* value)
	{
		___U3CErrorU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrorDictionaryU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ResultBase_tCD4C11D5601FB7FFB697BFFB5A17A84AC666752A, ___U3CErrorDictionaryU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CErrorDictionaryU3Ek__BackingField_1() const { return ___U3CErrorDictionaryU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CErrorDictionaryU3Ek__BackingField_1() { return &___U3CErrorDictionaryU3Ek__BackingField_1; }
	inline void set_U3CErrorDictionaryU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CErrorDictionaryU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorDictionaryU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultDictionaryU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ResultBase_tCD4C11D5601FB7FFB697BFFB5A17A84AC666752A, ___U3CResultDictionaryU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CResultDictionaryU3Ek__BackingField_2() const { return ___U3CResultDictionaryU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CResultDictionaryU3Ek__BackingField_2() { return &___U3CResultDictionaryU3Ek__BackingField_2; }
	inline void set_U3CResultDictionaryU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CResultDictionaryU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultDictionaryU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRawResultU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ResultBase_tCD4C11D5601FB7FFB697BFFB5A17A84AC666752A, ___U3CRawResultU3Ek__BackingField_3)); }
	inline String_t* get_U3CRawResultU3Ek__BackingField_3() const { return ___U3CRawResultU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CRawResultU3Ek__BackingField_3() { return &___U3CRawResultU3Ek__BackingField_3; }
	inline void set_U3CRawResultU3Ek__BackingField_3(String_t* value)
	{
		___U3CRawResultU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRawResultU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCancelledU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ResultBase_tCD4C11D5601FB7FFB697BFFB5A17A84AC666752A, ___U3CCancelledU3Ek__BackingField_4)); }
	inline bool get_U3CCancelledU3Ek__BackingField_4() const { return ___U3CCancelledU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CCancelledU3Ek__BackingField_4() { return &___U3CCancelledU3Ek__BackingField_4; }
	inline void set_U3CCancelledU3Ek__BackingField_4(bool value)
	{
		___U3CCancelledU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CCallbackIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ResultBase_tCD4C11D5601FB7FFB697BFFB5A17A84AC666752A, ___U3CCallbackIdU3Ek__BackingField_5)); }
	inline String_t* get_U3CCallbackIdU3Ek__BackingField_5() const { return ___U3CCallbackIdU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CCallbackIdU3Ek__BackingField_5() { return &___U3CCallbackIdU3Ek__BackingField_5; }
	inline void set_U3CCallbackIdU3Ek__BackingField_5(String_t* value)
	{
		___U3CCallbackIdU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCallbackIdU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCanvasErrorCodeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ResultBase_tCD4C11D5601FB7FFB697BFFB5A17A84AC666752A, ___U3CCanvasErrorCodeU3Ek__BackingField_6)); }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  get_U3CCanvasErrorCodeU3Ek__BackingField_6() const { return ___U3CCanvasErrorCodeU3Ek__BackingField_6; }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * get_address_of_U3CCanvasErrorCodeU3Ek__BackingField_6() { return &___U3CCanvasErrorCodeU3Ek__BackingField_6; }
	inline void set_U3CCanvasErrorCodeU3Ek__BackingField_6(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  value)
	{
		___U3CCanvasErrorCodeU3Ek__BackingField_6 = value;
	}
};


// Facebook.Unity.ShareDialogMode
struct ShareDialogMode_tEC9C3E5B2930ED7155899666687E8D2B88D770DF 
{
public:
	// System.Int32 Facebook.Unity.ShareDialogMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShareDialogMode_tEC9C3E5B2930ED7155899666687E8D2B88D770DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};


// System.UriFormat
struct UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Facebook.Unity.ComponentFactory/IfNotExist
struct IfNotExist_t31D2C102C2E6D8C741E2B9764542137B82C39741 
{
public:
	// System.Int32 Facebook.Unity.ComponentFactory/IfNotExist::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IfNotExist_t31D2C102C2E6D8C741E2B9764542137B82C39741, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// Facebook.MiniJSON.Json/Parser/TOKEN
struct TOKEN_t2FA9BB70EE639DC5BBDA3DE2B904D6424C5DF1A2 
{
public:
	// System.Int32 Facebook.MiniJSON.Json/Parser/TOKEN::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOKEN_t2FA9BB70EE639DC5BBDA3DE2B904D6424C5DF1A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Facebook.Unity.AccessToken
struct AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE  : public RuntimeObject
{
public:
	// System.String Facebook.Unity.AccessToken::<TokenString>k__BackingField
	String_t* ___U3CTokenStringU3Ek__BackingField_1;
	// System.DateTime Facebook.Unity.AccessToken::<ExpirationTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CExpirationTimeU3Ek__BackingField_2;
	// System.Collections.Generic.IEnumerable`1<System.String> Facebook.Unity.AccessToken::<Permissions>k__BackingField
	RuntimeObject* ___U3CPermissionsU3Ek__BackingField_3;
	// System.String Facebook.Unity.AccessToken::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;
	// System.Nullable`1<System.DateTime> Facebook.Unity.AccessToken::<LastRefresh>k__BackingField
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___U3CLastRefreshU3Ek__BackingField_5;
	// System.String Facebook.Unity.AccessToken::<GraphDomain>k__BackingField
	String_t* ___U3CGraphDomainU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTokenStringU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE, ___U3CTokenStringU3Ek__BackingField_1)); }
	inline String_t* get_U3CTokenStringU3Ek__BackingField_1() const { return ___U3CTokenStringU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTokenStringU3Ek__BackingField_1() { return &___U3CTokenStringU3Ek__BackingField_1; }
	inline void set_U3CTokenStringU3Ek__BackingField_1(String_t* value)
	{
		___U3CTokenStringU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenStringU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExpirationTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE, ___U3CExpirationTimeU3Ek__BackingField_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CExpirationTimeU3Ek__BackingField_2() const { return ___U3CExpirationTimeU3Ek__BackingField_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CExpirationTimeU3Ek__BackingField_2() { return &___U3CExpirationTimeU3Ek__BackingField_2; }
	inline void set_U3CExpirationTimeU3Ek__BackingField_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CExpirationTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CPermissionsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE, ___U3CPermissionsU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CPermissionsU3Ek__BackingField_3() const { return ___U3CPermissionsU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CPermissionsU3Ek__BackingField_3() { return &___U3CPermissionsU3Ek__BackingField_3; }
	inline void set_U3CPermissionsU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CPermissionsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPermissionsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE, ___U3CUserIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_4() const { return ___U3CUserIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_4() { return &___U3CUserIdU3Ek__BackingField_4; }
	inline void set_U3CUserIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLastRefreshU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE, ___U3CLastRefreshU3Ek__BackingField_5)); }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  get_U3CLastRefreshU3Ek__BackingField_5() const { return ___U3CLastRefreshU3Ek__BackingField_5; }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * get_address_of_U3CLastRefreshU3Ek__BackingField_5() { return &___U3CLastRefreshU3Ek__BackingField_5; }
	inline void set_U3CLastRefreshU3Ek__BackingField_5(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  value)
	{
		___U3CLastRefreshU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CGraphDomainU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE, ___U3CGraphDomainU3Ek__BackingField_6)); }
	inline String_t* get_U3CGraphDomainU3Ek__BackingField_6() const { return ___U3CGraphDomainU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CGraphDomainU3Ek__BackingField_6() { return &___U3CGraphDomainU3Ek__BackingField_6; }
	inline void set_U3CGraphDomainU3Ek__BackingField_6(String_t* value)
	{
		___U3CGraphDomainU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGraphDomainU3Ek__BackingField_6), (void*)value);
	}
};

struct AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE_StaticFields
{
public:
	// Facebook.Unity.AccessToken Facebook.Unity.AccessToken::<CurrentAccessToken>k__BackingField
	AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE * ___U3CCurrentAccessTokenU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CCurrentAccessTokenU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE_StaticFields, ___U3CCurrentAccessTokenU3Ek__BackingField_0)); }
	inline AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE * get_U3CCurrentAccessTokenU3Ek__BackingField_0() const { return ___U3CCurrentAccessTokenU3Ek__BackingField_0; }
	inline AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE ** get_address_of_U3CCurrentAccessTokenU3Ek__BackingField_0() { return &___U3CCurrentAccessTokenU3Ek__BackingField_0; }
	inline void set_U3CCurrentAccessTokenU3Ek__BackingField_0(AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE * value)
	{
		___U3CCurrentAccessTokenU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentAccessTokenU3Ek__BackingField_0), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Facebook.Unity.Editor.EditorFacebook
struct EditorFacebook_t4CE9311FD5798AFD943D6482B226B6439312CBDF  : public FacebookBase_t54BC547C9FED87F66FF339072136A02AF87DF0CC
{
public:
	// Facebook.Unity.Editor.IEditorWrapper Facebook.Unity.Editor.EditorFacebook::editorWrapper
	RuntimeObject* ___editorWrapper_3;
	// System.Boolean Facebook.Unity.Editor.EditorFacebook::<LimitEventUsage>k__BackingField
	bool ___U3CLimitEventUsageU3Ek__BackingField_4;
	// Facebook.Unity.ShareDialogMode Facebook.Unity.Editor.EditorFacebook::<ShareDialogMode>k__BackingField
	int32_t ___U3CShareDialogModeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_editorWrapper_3() { return static_cast<int32_t>(offsetof(EditorFacebook_t4CE9311FD5798AFD943D6482B226B6439312CBDF, ___editorWrapper_3)); }
	inline RuntimeObject* get_editorWrapper_3() const { return ___editorWrapper_3; }
	inline RuntimeObject** get_address_of_editorWrapper_3() { return &___editorWrapper_3; }
	inline void set_editorWrapper_3(RuntimeObject* value)
	{
		___editorWrapper_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___editorWrapper_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLimitEventUsageU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(EditorFacebook_t4CE9311FD5798AFD943D6482B226B6439312CBDF, ___U3CLimitEventUsageU3Ek__BackingField_4)); }
	inline bool get_U3CLimitEventUsageU3Ek__BackingField_4() const { return ___U3CLimitEventUsageU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CLimitEventUsageU3Ek__BackingField_4() { return &___U3CLimitEventUsageU3Ek__BackingField_4; }
	inline void set_U3CLimitEventUsageU3Ek__BackingField_4(bool value)
	{
		___U3CLimitEventUsageU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CShareDialogModeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(EditorFacebook_t4CE9311FD5798AFD943D6482B226B6439312CBDF, ___U3CShareDialogModeU3Ek__BackingField_5)); }
	inline int32_t get_U3CShareDialogModeU3Ek__BackingField_5() const { return ___U3CShareDialogModeU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CShareDialogModeU3Ek__BackingField_5() { return &___U3CShareDialogModeU3Ek__BackingField_5; }
	inline void set_U3CShareDialogModeU3Ek__BackingField_5(int32_t value)
	{
		___U3CShareDialogModeU3Ek__BackingField_5 = value;
	}
};


// Facebook.Unity.GraphResult
struct GraphResult_t5FFF348FCD41CB781E8BE359FB14160489B86883  : public ResultBase_tCD4C11D5601FB7FFB697BFFB5A17A84AC666752A
{
public:
	// System.Collections.Generic.IList`1<System.Object> Facebook.Unity.GraphResult::<ResultList>k__BackingField
	RuntimeObject* ___U3CResultListU3Ek__BackingField_7;
	// UnityEngine.Texture2D Facebook.Unity.GraphResult::<Texture>k__BackingField
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3CTextureU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CResultListU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GraphResult_t5FFF348FCD41CB781E8BE359FB14160489B86883, ___U3CResultListU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CResultListU3Ek__BackingField_7() const { return ___U3CResultListU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CResultListU3Ek__BackingField_7() { return &___U3CResultListU3Ek__BackingField_7; }
	inline void set_U3CResultListU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CResultListU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultListU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTextureU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GraphResult_t5FFF348FCD41CB781E8BE359FB14160489B86883, ___U3CTextureU3Ek__BackingField_8)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U3CTextureU3Ek__BackingField_8() const { return ___U3CTextureU3Ek__BackingField_8; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U3CTextureU3Ek__BackingField_8() { return &___U3CTextureU3Ek__BackingField_8; }
	inline void set_U3CTextureU3Ek__BackingField_8(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U3CTextureU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTextureU3Ek__BackingField_8), (void*)value);
	}
};


// Facebook.Unity.LoginResult
struct LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8  : public ResultBase_tCD4C11D5601FB7FFB697BFFB5A17A84AC666752A
{
public:
	// Facebook.Unity.AccessToken Facebook.Unity.LoginResult::<AccessToken>k__BackingField
	AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE * ___U3CAccessTokenU3Ek__BackingField_14;
	// Facebook.Unity.AuthenticationToken Facebook.Unity.LoginResult::<AuthenticationToken>k__BackingField
	AuthenticationToken_t887C43F6128D9D8E937994618969472D97FC0E61 * ___U3CAuthenticationTokenU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_U3CAccessTokenU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8, ___U3CAccessTokenU3Ek__BackingField_14)); }
	inline AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE * get_U3CAccessTokenU3Ek__BackingField_14() const { return ___U3CAccessTokenU3Ek__BackingField_14; }
	inline AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE ** get_address_of_U3CAccessTokenU3Ek__BackingField_14() { return &___U3CAccessTokenU3Ek__BackingField_14; }
	inline void set_U3CAccessTokenU3Ek__BackingField_14(AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE * value)
	{
		___U3CAccessTokenU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAccessTokenU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthenticationTokenU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8, ___U3CAuthenticationTokenU3Ek__BackingField_15)); }
	inline AuthenticationToken_t887C43F6128D9D8E937994618969472D97FC0E61 * get_U3CAuthenticationTokenU3Ek__BackingField_15() const { return ___U3CAuthenticationTokenU3Ek__BackingField_15; }
	inline AuthenticationToken_t887C43F6128D9D8E937994618969472D97FC0E61 ** get_address_of_U3CAuthenticationTokenU3Ek__BackingField_15() { return &___U3CAuthenticationTokenU3Ek__BackingField_15; }
	inline void set_U3CAuthenticationTokenU3Ek__BackingField_15(AuthenticationToken_t887C43F6128D9D8E937994618969472D97FC0E61 * value)
	{
		___U3CAuthenticationTokenU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthenticationTokenU3Ek__BackingField_15), (void*)value);
	}
};

struct LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8_StaticFields
{
public:
	// System.String Facebook.Unity.LoginResult::UserIdKey
	String_t* ___UserIdKey_7;
	// System.String Facebook.Unity.LoginResult::ExpirationTimestampKey
	String_t* ___ExpirationTimestampKey_8;
	// System.String Facebook.Unity.LoginResult::PermissionsKey
	String_t* ___PermissionsKey_9;
	// System.String Facebook.Unity.LoginResult::AccessTokenKey
	String_t* ___AccessTokenKey_10;
	// System.String Facebook.Unity.LoginResult::GraphDomain
	String_t* ___GraphDomain_11;
	// System.String Facebook.Unity.LoginResult::AuthTokenString
	String_t* ___AuthTokenString_12;
	// System.String Facebook.Unity.LoginResult::AuthNonce
	String_t* ___AuthNonce_13;

public:
	inline static int32_t get_offset_of_UserIdKey_7() { return static_cast<int32_t>(offsetof(LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8_StaticFields, ___UserIdKey_7)); }
	inline String_t* get_UserIdKey_7() const { return ___UserIdKey_7; }
	inline String_t** get_address_of_UserIdKey_7() { return &___UserIdKey_7; }
	inline void set_UserIdKey_7(String_t* value)
	{
		___UserIdKey_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UserIdKey_7), (void*)value);
	}

	inline static int32_t get_offset_of_ExpirationTimestampKey_8() { return static_cast<int32_t>(offsetof(LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8_StaticFields, ___ExpirationTimestampKey_8)); }
	inline String_t* get_ExpirationTimestampKey_8() const { return ___ExpirationTimestampKey_8; }
	inline String_t** get_address_of_ExpirationTimestampKey_8() { return &___ExpirationTimestampKey_8; }
	inline void set_ExpirationTimestampKey_8(String_t* value)
	{
		___ExpirationTimestampKey_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpirationTimestampKey_8), (void*)value);
	}

	inline static int32_t get_offset_of_PermissionsKey_9() { return static_cast<int32_t>(offsetof(LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8_StaticFields, ___PermissionsKey_9)); }
	inline String_t* get_PermissionsKey_9() const { return ___PermissionsKey_9; }
	inline String_t** get_address_of_PermissionsKey_9() { return &___PermissionsKey_9; }
	inline void set_PermissionsKey_9(String_t* value)
	{
		___PermissionsKey_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PermissionsKey_9), (void*)value);
	}

	inline static int32_t get_offset_of_AccessTokenKey_10() { return static_cast<int32_t>(offsetof(LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8_StaticFields, ___AccessTokenKey_10)); }
	inline String_t* get_AccessTokenKey_10() const { return ___AccessTokenKey_10; }
	inline String_t** get_address_of_AccessTokenKey_10() { return &___AccessTokenKey_10; }
	inline void set_AccessTokenKey_10(String_t* value)
	{
		___AccessTokenKey_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AccessTokenKey_10), (void*)value);
	}

	inline static int32_t get_offset_of_GraphDomain_11() { return static_cast<int32_t>(offsetof(LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8_StaticFields, ___GraphDomain_11)); }
	inline String_t* get_GraphDomain_11() const { return ___GraphDomain_11; }
	inline String_t** get_address_of_GraphDomain_11() { return &___GraphDomain_11; }
	inline void set_GraphDomain_11(String_t* value)
	{
		___GraphDomain_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GraphDomain_11), (void*)value);
	}

	inline static int32_t get_offset_of_AuthTokenString_12() { return static_cast<int32_t>(offsetof(LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8_StaticFields, ___AuthTokenString_12)); }
	inline String_t* get_AuthTokenString_12() const { return ___AuthTokenString_12; }
	inline String_t** get_address_of_AuthTokenString_12() { return &___AuthTokenString_12; }
	inline void set_AuthTokenString_12(String_t* value)
	{
		___AuthTokenString_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AuthTokenString_12), (void*)value);
	}

	inline static int32_t get_offset_of_AuthNonce_13() { return static_cast<int32_t>(offsetof(LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8_StaticFields, ___AuthNonce_13)); }
	inline String_t* get_AuthNonce_13() const { return ___AuthNonce_13; }
	inline String_t** get_address_of_AuthNonce_13() { return &___AuthNonce_13; }
	inline void set_AuthNonce_13(String_t* value)
	{
		___AuthNonce_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AuthNonce_13), (void*)value);
	}
};


// Facebook.Unity.Mobile.MobileFacebook
struct MobileFacebook_t46D8F1D430B209D4478FBE7EE68DEB2F4C125F23  : public FacebookBase_t54BC547C9FED87F66FF339072136A02AF87DF0CC
{
public:
	// Facebook.Unity.ShareDialogMode Facebook.Unity.Mobile.MobileFacebook::shareDialogMode
	int32_t ___shareDialogMode_3;

public:
	inline static int32_t get_offset_of_shareDialogMode_3() { return static_cast<int32_t>(offsetof(MobileFacebook_t46D8F1D430B209D4478FBE7EE68DEB2F4C125F23, ___shareDialogMode_3)); }
	inline int32_t get_shareDialogMode_3() const { return ___shareDialogMode_3; }
	inline int32_t* get_address_of_shareDialogMode_3() { return &___shareDialogMode_3; }
	inline void set_shareDialogMode_3(int32_t value)
	{
		___shareDialogMode_3 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nativeDigits_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// Facebook.Unity.Profile
struct Profile_tCC112B8E256DCA324D698BB44B95C3F614B36DA8  : public RuntimeObject
{
public:
	// System.String Facebook.Unity.Profile::<UserID>k__BackingField
	String_t* ___U3CUserIDU3Ek__BackingField_0;
	// System.String Facebook.Unity.Profile::<FirstName>k__BackingField
	String_t* ___U3CFirstNameU3Ek__BackingField_1;
	// System.String Facebook.Unity.Profile::<MiddleName>k__BackingField
	String_t* ___U3CMiddleNameU3Ek__BackingField_2;
	// System.String Facebook.Unity.Profile::<LastName>k__BackingField
	String_t* ___U3CLastNameU3Ek__BackingField_3;
	// System.String Facebook.Unity.Profile::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_4;
	// System.String Facebook.Unity.Profile::<Email>k__BackingField
	String_t* ___U3CEmailU3Ek__BackingField_5;
	// System.String Facebook.Unity.Profile::<ImageURL>k__BackingField
	String_t* ___U3CImageURLU3Ek__BackingField_6;
	// System.String Facebook.Unity.Profile::<LinkURL>k__BackingField
	String_t* ___U3CLinkURLU3Ek__BackingField_7;
	// System.String[] Facebook.Unity.Profile::<FriendIDs>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CFriendIDsU3Ek__BackingField_8;
	// System.Nullable`1<System.DateTime> Facebook.Unity.Profile::<Birthday>k__BackingField
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___U3CBirthdayU3Ek__BackingField_9;
	// Facebook.Unity.UserAgeRange Facebook.Unity.Profile::<AgeRange>k__BackingField
	UserAgeRange_t83D15D5C6AAEF71B67C128F01325A09D298CB4BE * ___U3CAgeRangeU3Ek__BackingField_10;
	// Facebook.Unity.FBLocation Facebook.Unity.Profile::<Hometown>k__BackingField
	FBLocation_t2C326DEEF3612A5BDB88503AA1F843CC6655254F * ___U3CHometownU3Ek__BackingField_11;
	// Facebook.Unity.FBLocation Facebook.Unity.Profile::<Location>k__BackingField
	FBLocation_t2C326DEEF3612A5BDB88503AA1F843CC6655254F * ___U3CLocationU3Ek__BackingField_12;
	// System.String Facebook.Unity.Profile::<Gender>k__BackingField
	String_t* ___U3CGenderU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CUserIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Profile_tCC112B8E256DCA324D698BB44B95C3F614B36DA8, ___U3CUserIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CUserIDU3Ek__BackingField_0() const { return ___U3CUserIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CUserIDU3Ek__BackingField_0() { return &___U3CUserIDU3Ek__BackingField_0; }
	inline void set_U3CUserIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CUserIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIDU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFirstNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Profile_tCC112B8E256DCA324D698BB44B95C3F614B36DA8, ___U3CFirstNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CFirstNameU3Ek__BackingField_1() const { return ___U3CFirstNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CFirstNameU3Ek__BackingField_1() { return &___U3CFirstNameU3Ek__BackingField_1; }
	inline void set_U3CFirstNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CFirstNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFirstNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMiddleNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Profile_tCC112B8E256DCA324D698BB44B95C3F614B36DA8, ___U3CMiddleNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CMiddleNameU3Ek__BackingField_2() const { return ___U3CMiddleNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMiddleNameU3Ek__BackingField_2() { return &___U3CMiddleNameU3Ek__BackingField_2; }
	inline void set_U3CMiddleNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CMiddleNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMiddleNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLastNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Profile_tCC112B8E256DCA324D698BB44B95C3F614B36DA8, ___U3CLastNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CLastNameU3Ek__BackingField_3() const { return ___U3CLastNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CLastNameU3Ek__BackingField_3() { return &___U3CLastNameU3Ek__BackingField_3; }
	inline void set_U3CLastNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CLastNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLastNameU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Profile_tCC112B8E256DCA324D698BB44B95C3F614B36DA8, ___U3CNameU3Ek__BackingField_4)); }
	inline String_t* get_U3CNameU3Ek__BackingField_4() const { return ___U3CNameU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_4() { return &___U3CNameU3Ek__BackingField_4; }
	inline void set_U3CNameU3Ek__BackingField_4(String_t* value)
	{
		___U3CNameU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEmailU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Profile_tCC112B8E256DCA324D698BB44B95C3F614B36DA8, ___U3CEmailU3Ek__BackingField_5)); }
	inline String_t* get_U3CEmailU3Ek__BackingField_5() const { return ___U3CEmailU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CEmailU3Ek__BackingField_5() { return &___U3CEmailU3Ek__BackingField_5; }
	inline void set_U3CEmailU3Ek__BackingField_5(String_t* value)
	{
		___U3CEmailU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEmailU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CImageURLU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Profile_tCC112B8E256DCA324D698BB44B95C3F614B36DA8, ___U3CImageURLU3Ek__BackingField_6)); }
	inline String_t* get_U3CImageURLU3Ek__BackingField_6() const { return ___U3CImageURLU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CImageURLU3Ek__BackingField_6() { return &___U3CImageURLU3Ek__BackingField_6; }
	inline void set_U3CImageURLU3Ek__BackingField_6(String_t* value)
	{
		___U3CImageURLU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CImageURLU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLinkURLU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Profile_tCC112B8E256DCA324D698BB44B95C3F614B36DA8, ___U3CLinkURLU3Ek__BackingField_7)); }
	inline String_t* get_U3CLinkURLU3Ek__BackingField_7() const { return ___U3CLinkURLU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CLinkURLU3Ek__BackingField_7() { return &___U3CLinkURLU3Ek__BackingField_7; }
	inline void set_U3CLinkURLU3Ek__BackingField_7(String_t* value)
	{
		___U3CLinkURLU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLinkURLU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFriendIDsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Profile_tCC112B8E256DCA324D698BB44B95C3F614B36DA8, ___U3CFriendIDsU3Ek__BackingField_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CFriendIDsU3Ek__BackingField_8() const { return ___U3CFriendIDsU3Ek__BackingField_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CFriendIDsU3Ek__BackingField_8() { return &___U3CFriendIDsU3Ek__BackingField_8; }
	inline void set_U3CFriendIDsU3Ek__BackingField_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CFriendIDsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFriendIDsU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBirthdayU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Profile_tCC112B8E256DCA324D698BB44B95C3F614B36DA8, ___U3CBirthdayU3Ek__BackingField_9)); }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  get_U3CBirthdayU3Ek__BackingField_9() const { return ___U3CBirthdayU3Ek__BackingField_9; }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * get_address_of_U3CBirthdayU3Ek__BackingField_9() { return &___U3CBirthdayU3Ek__BackingField_9; }
	inline void set_U3CBirthdayU3Ek__BackingField_9(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  value)
	{
		___U3CBirthdayU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CAgeRangeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Profile_tCC112B8E256DCA324D698BB44B95C3F614B36DA8, ___U3CAgeRangeU3Ek__BackingField_10)); }
	inline UserAgeRange_t83D15D5C6AAEF71B67C128F01325A09D298CB4BE * get_U3CAgeRangeU3Ek__BackingField_10() const { return ___U3CAgeRangeU3Ek__BackingField_10; }
	inline UserAgeRange_t83D15D5C6AAEF71B67C128F01325A09D298CB4BE ** get_address_of_U3CAgeRangeU3Ek__BackingField_10() { return &___U3CAgeRangeU3Ek__BackingField_10; }
	inline void set_U3CAgeRangeU3Ek__BackingField_10(UserAgeRange_t83D15D5C6AAEF71B67C128F01325A09D298CB4BE * value)
	{
		___U3CAgeRangeU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAgeRangeU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHometownU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Profile_tCC112B8E256DCA324D698BB44B95C3F614B36DA8, ___U3CHometownU3Ek__BackingField_11)); }
	inline FBLocation_t2C326DEEF3612A5BDB88503AA1F843CC6655254F * get_U3CHometownU3Ek__BackingField_11() const { return ___U3CHometownU3Ek__BackingField_11; }
	inline FBLocation_t2C326DEEF3612A5BDB88503AA1F843CC6655254F ** get_address_of_U3CHometownU3Ek__BackingField_11() { return &___U3CHometownU3Ek__BackingField_11; }
	inline void set_U3CHometownU3Ek__BackingField_11(FBLocation_t2C326DEEF3612A5BDB88503AA1F843CC6655254F * value)
	{
		___U3CHometownU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHometownU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocationU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Profile_tCC112B8E256DCA324D698BB44B95C3F614B36DA8, ___U3CLocationU3Ek__BackingField_12)); }
	inline FBLocation_t2C326DEEF3612A5BDB88503AA1F843CC6655254F * get_U3CLocationU3Ek__BackingField_12() const { return ___U3CLocationU3Ek__BackingField_12; }
	inline FBLocation_t2C326DEEF3612A5BDB88503AA1F843CC6655254F ** get_address_of_U3CLocationU3Ek__BackingField_12() { return &___U3CLocationU3Ek__BackingField_12; }
	inline void set_U3CLocationU3Ek__BackingField_12(FBLocation_t2C326DEEF3612A5BDB88503AA1F843CC6655254F * value)
	{
		___U3CLocationU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocationU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGenderU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Profile_tCC112B8E256DCA324D698BB44B95C3F614B36DA8, ___U3CGenderU3Ek__BackingField_13)); }
	inline String_t* get_U3CGenderU3Ek__BackingField_13() const { return ___U3CGenderU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CGenderU3Ek__BackingField_13() { return &___U3CGenderU3Ek__BackingField_13; }
	inline void set_U3CGenderU3Ek__BackingField_13(String_t* value)
	{
		___U3CGenderU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGenderU3Ek__BackingField_13), (void*)value);
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_21)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>
struct Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>
struct FacebookDelegate_1_t19DCD0CB7469670B22F77F21012DC78320E30269  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t7F874B0ABF0EA33627106C3B0E881E2DED8AD362  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>
struct FacebookDelegate_1_tBF767821D6227C2B047C48CC1B33AC20C07FFB55  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>
struct FacebookDelegate_1_t6279CFE16F644D3D23CB58078ED3D07E6AFBEDE9  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.Unity.Mobile.Android.AndroidFacebook
struct AndroidFacebook_t60B3A6C3AC97799AEF427D3C4413AF27290A9E1E  : public MobileFacebook_t46D8F1D430B209D4478FBE7EE68DEB2F4C125F23
{
public:
	// System.Boolean Facebook.Unity.Mobile.Android.AndroidFacebook::limitEventUsage
	bool ___limitEventUsage_4;
	// Facebook.Unity.Mobile.Android.IAndroidWrapper Facebook.Unity.Mobile.Android.AndroidFacebook::androidWrapper
	RuntimeObject* ___androidWrapper_5;
	// System.String Facebook.Unity.Mobile.Android.AndroidFacebook::userID
	String_t* ___userID_6;
	// System.String Facebook.Unity.Mobile.Android.AndroidFacebook::<KeyHash>k__BackingField
	String_t* ___U3CKeyHashU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_limitEventUsage_4() { return static_cast<int32_t>(offsetof(AndroidFacebook_t60B3A6C3AC97799AEF427D3C4413AF27290A9E1E, ___limitEventUsage_4)); }
	inline bool get_limitEventUsage_4() const { return ___limitEventUsage_4; }
	inline bool* get_address_of_limitEventUsage_4() { return &___limitEventUsage_4; }
	inline void set_limitEventUsage_4(bool value)
	{
		___limitEventUsage_4 = value;
	}

	inline static int32_t get_offset_of_androidWrapper_5() { return static_cast<int32_t>(offsetof(AndroidFacebook_t60B3A6C3AC97799AEF427D3C4413AF27290A9E1E, ___androidWrapper_5)); }
	inline RuntimeObject* get_androidWrapper_5() const { return ___androidWrapper_5; }
	inline RuntimeObject** get_address_of_androidWrapper_5() { return &___androidWrapper_5; }
	inline void set_androidWrapper_5(RuntimeObject* value)
	{
		___androidWrapper_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___androidWrapper_5), (void*)value);
	}

	inline static int32_t get_offset_of_userID_6() { return static_cast<int32_t>(offsetof(AndroidFacebook_t60B3A6C3AC97799AEF427D3C4413AF27290A9E1E, ___userID_6)); }
	inline String_t* get_userID_6() const { return ___userID_6; }
	inline String_t** get_address_of_userID_6() { return &___userID_6; }
	inline void set_userID_6(String_t* value)
	{
		___userID_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userID_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CKeyHashU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AndroidFacebook_t60B3A6C3AC97799AEF427D3C4413AF27290A9E1E, ___U3CKeyHashU3Ek__BackingField_7)); }
	inline String_t* get_U3CKeyHashU3Ek__BackingField_7() const { return ___U3CKeyHashU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CKeyHashU3Ek__BackingField_7() { return &___U3CKeyHashU3Ek__BackingField_7; }
	inline void set_U3CKeyHashU3Ek__BackingField_7(String_t* value)
	{
		___U3CKeyHashU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeyHashU3Ek__BackingField_7), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Facebook.Unity.FB
struct FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};

struct FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_StaticFields
{
public:
	// Facebook.Unity.IFacebook Facebook.Unity.FB::facebook
	RuntimeObject* ___facebook_5;
	// System.Boolean Facebook.Unity.FB::isInitCalled
	bool ___isInitCalled_6;
	// System.String Facebook.Unity.FB::facebookDomain
	String_t* ___facebookDomain_7;
	// System.String Facebook.Unity.FB::gamingDomain
	String_t* ___gamingDomain_8;
	// System.String Facebook.Unity.FB::graphApiVersion
	String_t* ___graphApiVersion_9;
	// System.String Facebook.Unity.FB::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_10;
	// System.String Facebook.Unity.FB::<ClientToken>k__BackingField
	String_t* ___U3CClientTokenU3Ek__BackingField_11;
	// Facebook.Unity.FB/OnDLLLoaded Facebook.Unity.FB::<OnDLLLoadedDelegate>k__BackingField
	OnDLLLoaded_tF6931D34771F7C57F71E731BFE7B86676BCA26FC * ___U3COnDLLLoadedDelegateU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_facebook_5() { return static_cast<int32_t>(offsetof(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_StaticFields, ___facebook_5)); }
	inline RuntimeObject* get_facebook_5() const { return ___facebook_5; }
	inline RuntimeObject** get_address_of_facebook_5() { return &___facebook_5; }
	inline void set_facebook_5(RuntimeObject* value)
	{
		___facebook_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___facebook_5), (void*)value);
	}

	inline static int32_t get_offset_of_isInitCalled_6() { return static_cast<int32_t>(offsetof(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_StaticFields, ___isInitCalled_6)); }
	inline bool get_isInitCalled_6() const { return ___isInitCalled_6; }
	inline bool* get_address_of_isInitCalled_6() { return &___isInitCalled_6; }
	inline void set_isInitCalled_6(bool value)
	{
		___isInitCalled_6 = value;
	}

	inline static int32_t get_offset_of_facebookDomain_7() { return static_cast<int32_t>(offsetof(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_StaticFields, ___facebookDomain_7)); }
	inline String_t* get_facebookDomain_7() const { return ___facebookDomain_7; }
	inline String_t** get_address_of_facebookDomain_7() { return &___facebookDomain_7; }
	inline void set_facebookDomain_7(String_t* value)
	{
		___facebookDomain_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___facebookDomain_7), (void*)value);
	}

	inline static int32_t get_offset_of_gamingDomain_8() { return static_cast<int32_t>(offsetof(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_StaticFields, ___gamingDomain_8)); }
	inline String_t* get_gamingDomain_8() const { return ___gamingDomain_8; }
	inline String_t** get_address_of_gamingDomain_8() { return &___gamingDomain_8; }
	inline void set_gamingDomain_8(String_t* value)
	{
		___gamingDomain_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gamingDomain_8), (void*)value);
	}

	inline static int32_t get_offset_of_graphApiVersion_9() { return static_cast<int32_t>(offsetof(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_StaticFields, ___graphApiVersion_9)); }
	inline String_t* get_graphApiVersion_9() const { return ___graphApiVersion_9; }
	inline String_t** get_address_of_graphApiVersion_9() { return &___graphApiVersion_9; }
	inline void set_graphApiVersion_9(String_t* value)
	{
		___graphApiVersion_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphApiVersion_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_StaticFields, ___U3CAppIdU3Ek__BackingField_10)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_10() const { return ___U3CAppIdU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_10() { return &___U3CAppIdU3Ek__BackingField_10; }
	inline void set_U3CAppIdU3Ek__BackingField_10(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppIdU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClientTokenU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_StaticFields, ___U3CClientTokenU3Ek__BackingField_11)); }
	inline String_t* get_U3CClientTokenU3Ek__BackingField_11() const { return ___U3CClientTokenU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CClientTokenU3Ek__BackingField_11() { return &___U3CClientTokenU3Ek__BackingField_11; }
	inline void set_U3CClientTokenU3Ek__BackingField_11(String_t* value)
	{
		___U3CClientTokenU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientTokenU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnDLLLoadedDelegateU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_StaticFields, ___U3COnDLLLoadedDelegateU3Ek__BackingField_12)); }
	inline OnDLLLoaded_tF6931D34771F7C57F71E731BFE7B86676BCA26FC * get_U3COnDLLLoadedDelegateU3Ek__BackingField_12() const { return ___U3COnDLLLoadedDelegateU3Ek__BackingField_12; }
	inline OnDLLLoaded_tF6931D34771F7C57F71E731BFE7B86676BCA26FC ** get_address_of_U3COnDLLLoadedDelegateU3Ek__BackingField_12() { return &___U3COnDLLLoadedDelegateU3Ek__BackingField_12; }
	inline void set_U3COnDLLLoadedDelegateU3Ek__BackingField_12(OnDLLLoaded_tF6931D34771F7C57F71E731BFE7B86676BCA26FC * value)
	{
		___U3COnDLLLoadedDelegateU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnDLLLoadedDelegateU3Ek__BackingField_12), (void*)value);
	}
};


// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t20FD43E26003761ABD29BE7379356065AAB4334F  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.Unity.Mobile.IOS.IOSFacebook
struct IOSFacebook_t37653B5398AACEE2A4D3688D563788544E513307  : public MobileFacebook_t46D8F1D430B209D4478FBE7EE68DEB2F4C125F23
{
public:
	// System.Boolean Facebook.Unity.Mobile.IOS.IOSFacebook::limitEventUsage
	bool ___limitEventUsage_4;
	// Facebook.Unity.Mobile.IOS.IIOSWrapper Facebook.Unity.Mobile.IOS.IOSFacebook::iosWrapper
	RuntimeObject* ___iosWrapper_5;
	// System.String Facebook.Unity.Mobile.IOS.IOSFacebook::userID
	String_t* ___userID_6;

public:
	inline static int32_t get_offset_of_limitEventUsage_4() { return static_cast<int32_t>(offsetof(IOSFacebook_t37653B5398AACEE2A4D3688D563788544E513307, ___limitEventUsage_4)); }
	inline bool get_limitEventUsage_4() const { return ___limitEventUsage_4; }
	inline bool* get_address_of_limitEventUsage_4() { return &___limitEventUsage_4; }
	inline void set_limitEventUsage_4(bool value)
	{
		___limitEventUsage_4 = value;
	}

	inline static int32_t get_offset_of_iosWrapper_5() { return static_cast<int32_t>(offsetof(IOSFacebook_t37653B5398AACEE2A4D3688D563788544E513307, ___iosWrapper_5)); }
	inline RuntimeObject* get_iosWrapper_5() const { return ___iosWrapper_5; }
	inline RuntimeObject** get_address_of_iosWrapper_5() { return &___iosWrapper_5; }
	inline void set_iosWrapper_5(RuntimeObject* value)
	{
		___iosWrapper_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iosWrapper_5), (void*)value);
	}

	inline static int32_t get_offset_of_userID_6() { return static_cast<int32_t>(offsetof(IOSFacebook_t37653B5398AACEE2A4D3688D563788544E513307, ___userID_6)); }
	inline String_t* get_userID_6() const { return ___userID_6; }
	inline String_t** get_address_of_userID_6() { return &___userID_6; }
	inline void set_userID_6(String_t* value)
	{
		___userID_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userID_6), (void*)value);
	}
};


// Facebook.Unity.InitDelegate
struct InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Facebook.Unity.FB/OnDLLLoaded
struct OnDLLLoaded_tF6931D34771F7C57F71E731BFE7B86676BCA26FC  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.Unity.Gameroom.GameroomFacebook/OnComplete
struct OnComplete_tDE1F16FBF428F5A978FDDBF43106E8B6465EC241  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Facebook.Unity.AsyncRequestString
struct AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Uri Facebook.Unity.AsyncRequestString::url
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___url_4;
	// Facebook.Unity.HttpMethod Facebook.Unity.AsyncRequestString::method
	int32_t ___method_5;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Facebook.Unity.AsyncRequestString::formData
	RuntimeObject* ___formData_6;
	// UnityEngine.WWWForm Facebook.Unity.AsyncRequestString::query
	WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * ___query_7;
	// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult> Facebook.Unity.AsyncRequestString::callback
	FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190 * ___callback_8;

public:
	inline static int32_t get_offset_of_url_4() { return static_cast<int32_t>(offsetof(AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2, ___url_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_url_4() const { return ___url_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_url_4() { return &___url_4; }
	inline void set_url_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___url_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_4), (void*)value);
	}

	inline static int32_t get_offset_of_method_5() { return static_cast<int32_t>(offsetof(AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2, ___method_5)); }
	inline int32_t get_method_5() const { return ___method_5; }
	inline int32_t* get_address_of_method_5() { return &___method_5; }
	inline void set_method_5(int32_t value)
	{
		___method_5 = value;
	}

	inline static int32_t get_offset_of_formData_6() { return static_cast<int32_t>(offsetof(AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2, ___formData_6)); }
	inline RuntimeObject* get_formData_6() const { return ___formData_6; }
	inline RuntimeObject** get_address_of_formData_6() { return &___formData_6; }
	inline void set_formData_6(RuntimeObject* value)
	{
		___formData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formData_6), (void*)value);
	}

	inline static int32_t get_offset_of_query_7() { return static_cast<int32_t>(offsetof(AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2, ___query_7)); }
	inline WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * get_query_7() const { return ___query_7; }
	inline WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB ** get_address_of_query_7() { return &___query_7; }
	inline void set_query_7(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * value)
	{
		___query_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___query_7), (void*)value);
	}

	inline static int32_t get_offset_of_callback_8() { return static_cast<int32_t>(offsetof(AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2, ___callback_8)); }
	inline FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190 * get_callback_8() const { return ___callback_8; }
	inline FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190 ** get_address_of_callback_8() { return &___callback_8; }
	inline void set_callback_8(FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190 * value)
	{
		___callback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_8), (void*)value);
	}
};


// Facebook.Unity.CodelessCrawler
struct CodelessCrawler_t85819DEFF58EEA402B26524950C20319B05EF11B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct CodelessCrawler_t85819DEFF58EEA402B26524950C20319B05EF11B_StaticFields
{
public:
	// System.Boolean Facebook.Unity.CodelessCrawler::isGeneratingSnapshot
	bool ___isGeneratingSnapshot_4;
	// UnityEngine.Camera Facebook.Unity.CodelessCrawler::mainCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___mainCamera_5;

public:
	inline static int32_t get_offset_of_isGeneratingSnapshot_4() { return static_cast<int32_t>(offsetof(CodelessCrawler_t85819DEFF58EEA402B26524950C20319B05EF11B_StaticFields, ___isGeneratingSnapshot_4)); }
	inline bool get_isGeneratingSnapshot_4() const { return ___isGeneratingSnapshot_4; }
	inline bool* get_address_of_isGeneratingSnapshot_4() { return &___isGeneratingSnapshot_4; }
	inline void set_isGeneratingSnapshot_4(bool value)
	{
		___isGeneratingSnapshot_4 = value;
	}

	inline static int32_t get_offset_of_mainCamera_5() { return static_cast<int32_t>(offsetof(CodelessCrawler_t85819DEFF58EEA402B26524950C20319B05EF11B_StaticFields, ___mainCamera_5)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_mainCamera_5() const { return ___mainCamera_5; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_mainCamera_5() { return &___mainCamera_5; }
	inline void set_mainCamera_5(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___mainCamera_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainCamera_5), (void*)value);
	}
};


// Facebook.Unity.Editor.EditorFacebookMockDialog
struct EditorFacebookMockDialog_tED6E44AFBC3DF5B93DB89A7137CDF227687DB951  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rect Facebook.Unity.Editor.EditorFacebookMockDialog::modalRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___modalRect_4;
	// UnityEngine.GUIStyle Facebook.Unity.Editor.EditorFacebookMockDialog::modalStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___modalStyle_5;
	// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer> Facebook.Unity.Editor.EditorFacebookMockDialog::<Callback>k__BackingField
	Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A * ___U3CCallbackU3Ek__BackingField_6;
	// System.String Facebook.Unity.Editor.EditorFacebookMockDialog::<CallbackID>k__BackingField
	String_t* ___U3CCallbackIDU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_modalRect_4() { return static_cast<int32_t>(offsetof(EditorFacebookMockDialog_tED6E44AFBC3DF5B93DB89A7137CDF227687DB951, ___modalRect_4)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_modalRect_4() const { return ___modalRect_4; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_modalRect_4() { return &___modalRect_4; }
	inline void set_modalRect_4(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___modalRect_4 = value;
	}

	inline static int32_t get_offset_of_modalStyle_5() { return static_cast<int32_t>(offsetof(EditorFacebookMockDialog_tED6E44AFBC3DF5B93DB89A7137CDF227687DB951, ___modalStyle_5)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_modalStyle_5() const { return ___modalStyle_5; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_modalStyle_5() { return &___modalStyle_5; }
	inline void set_modalStyle_5(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___modalStyle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modalStyle_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCallbackU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(EditorFacebookMockDialog_tED6E44AFBC3DF5B93DB89A7137CDF227687DB951, ___U3CCallbackU3Ek__BackingField_6)); }
	inline Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A * get_U3CCallbackU3Ek__BackingField_6() const { return ___U3CCallbackU3Ek__BackingField_6; }
	inline Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A ** get_address_of_U3CCallbackU3Ek__BackingField_6() { return &___U3CCallbackU3Ek__BackingField_6; }
	inline void set_U3CCallbackU3Ek__BackingField_6(Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A * value)
	{
		___U3CCallbackU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCallbackU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCallbackIDU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(EditorFacebookMockDialog_tED6E44AFBC3DF5B93DB89A7137CDF227687DB951, ___U3CCallbackIDU3Ek__BackingField_7)); }
	inline String_t* get_U3CCallbackIDU3Ek__BackingField_7() const { return ___U3CCallbackIDU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CCallbackIDU3Ek__BackingField_7() { return &___U3CCallbackIDU3Ek__BackingField_7; }
	inline void set_U3CCallbackIDU3Ek__BackingField_7(String_t* value)
	{
		___U3CCallbackIDU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCallbackIDU3Ek__BackingField_7), (void*)value);
	}
};


// Facebook.Unity.FacebookGameObject
struct FacebookGameObject_t6FC4F88C6F002C8663BD2429B8E090A960E341BA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Facebook.Unity.IFacebookImplementation Facebook.Unity.FacebookGameObject::<Facebook>k__BackingField
	RuntimeObject* ___U3CFacebookU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CFacebookU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FacebookGameObject_t6FC4F88C6F002C8663BD2429B8E090A960E341BA, ___U3CFacebookU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CFacebookU3Ek__BackingField_4() const { return ___U3CFacebookU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CFacebookU3Ek__BackingField_4() { return &___U3CFacebookU3Ek__BackingField_4; }
	inline void set_U3CFacebookU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CFacebookU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFacebookU3Ek__BackingField_4), (void*)value);
	}
};


// Facebook.Unity.FB/CompiledFacebookLoader
struct CompiledFacebookLoader_t1EE238D974A0BED1DA0BC94C1847155659DDB349  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Facebook.Unity.Gameroom.GameroomFacebookGameObject
struct GameroomFacebookGameObject_t5A562D965FCCF7838C82251F00C524F3CFAD51D0  : public FacebookGameObject_t6FC4F88C6F002C8663BD2429B8E090A960E341BA
{
public:

public:
};


// Facebook.Unity.Editor.Dialogs.MockLoginDialog
struct MockLoginDialog_t9CF05624F932E4AC61432980C65D8A59B6CA8202  : public EditorFacebookMockDialog_tED6E44AFBC3DF5B93DB89A7137CDF227687DB951
{
public:
	// System.String Facebook.Unity.Editor.Dialogs.MockLoginDialog::accessToken
	String_t* ___accessToken_8;

public:
	inline static int32_t get_offset_of_accessToken_8() { return static_cast<int32_t>(offsetof(MockLoginDialog_t9CF05624F932E4AC61432980C65D8A59B6CA8202, ___accessToken_8)); }
	inline String_t* get_accessToken_8() const { return ___accessToken_8; }
	inline String_t** get_address_of_accessToken_8() { return &___accessToken_8; }
	inline void set_accessToken_8(String_t* value)
	{
		___accessToken_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___accessToken_8), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void Facebook.Unity.FacebookDelegate`1<System.Object>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacebookDelegate_1_Invoke_m025BFAC0160ABE9CC41D6608431DF9FCA2E8E958_gshared (FacebookDelegate_1_tF0451F78E13CCF394CCDEF8CE64B89F9C5FCED99 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Boolean Facebook.Unity.Utilities::TryGetValue<System.Object>(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utilities_TryGetValue_TisRuntimeObject_m79EF0D1B5694075C46826FB1541143A091DFF918_gshared (RuntimeObject* ___dictionary0, String_t* ___key1, RuntimeObject ** ___value2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void Facebook.Unity.Utilities/Callback`1<System.Object>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_1_Invoke_m51AC25245B4C013AF7E2CE060A564A28440D9FBF_gshared (Callback_1_tF838C06A8F58095205FFA0726E0806CDB03C6A97 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void Facebook.Unity.FacebookDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacebookDelegate_1__ctor_mF9FF22C1FF460D1CD15A8A87099BA4EA587BAEBB_gshared (FacebookDelegate_1_tF0451F78E13CCF394CCDEF8CE64B89F9C5FCED99 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_gshared (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);

// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC7F2CE7DD2D916CF5CC599E7C5A3EC0A924C991F (U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.String System.Uri::get_AbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.Uri::EscapeDataString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_EscapeDataString_m65EC321EA46B682D20E13D00DA17B846BB5CDF20 (String_t* ___stringToEscape0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// Facebook.Unity.FacebookUnityPlatform Facebook.Unity.Constants::get_CurrentPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Constants_get_CurrentPlatform_mDEF64E92FE0C0B3E2AB3C47AC12735661B223064 (const RuntimeMethod* method);
// System.String Facebook.Unity.Constants::get_GraphApiUserAgent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Constants_get_GraphApiUserAgent_m591596C787B9C90C3AD6D4C1F73E3D74EC11208D (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.WWW::.ctor(System.String,System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_m6686CBC878BB9EB28F4C4171C203CA4E3DE3656C (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, String_t* ___url0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___postData1, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers2, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055 (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m8ACDB7B2124FA6EAD7FC120BB469C6352C7B7696 (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, String_t* ___fieldName0, String_t* ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * WWWForm_get_headers_m9F6A4222926792B110E9821AF5B23FF3FB9BD45A (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_m2F58987EB716A6D1B9B2425464E5C42FB6CF7DE6 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, String_t* ___url0, WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * ___form1, const RuntimeMethod* method);
// System.Void Facebook.Unity.GraphResult::.ctor(UnityEngine.WWW)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphResult__ctor_mCC1CEC13BE56760362FEFBFEF967C7E1F91AAA71 (GraphResult_t5FFF348FCD41CB781E8BE359FB14160489B86883 * __this, WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___result0, const RuntimeMethod* method);
// System.Void Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>::Invoke(T)
inline void FacebookDelegate_1_Invoke_m9653C735B153146CE4B92F6E8BB3CDA447AADB6D (FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	((  void (*) (FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190 *, RuntimeObject*, const RuntimeMethod*))FacebookDelegate_1_Invoke_m025BFAC0160ABE9CC41D6608431DF9FCA2E8E958_gshared)(__this, ___result0, method);
}
// System.Void UnityEngine.WWW::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW_Dispose_mF5A8B944281564903043545BC1E7F1CAD941519F (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Facebook.Unity.Canvas.CanvasFacebook/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5DBEF325E042AAEDD847E9CF5FEAE53D64BC9A9E (U3CU3Ec_t02C80072E1F79793486660F0BC57274F8045F458 * __this, const RuntimeMethod* method);
// System.Void Facebook.Unity.LoginResult::.ctor(Facebook.Unity.ResultContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginResult__ctor_m9D1DA28F7636FFD3756A2C461857149375471F54 (LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8 * __this, ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * ___resultContainer0, const RuntimeMethod* method);
// Facebook.Unity.AccessToken Facebook.Unity.LoginResult::get_AccessToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE * LoginResult_get_AccessToken_m6DDF9B1A8F63CEF6497A0F846F473FC32E3421FF_inline (LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8 * __this, const RuntimeMethod* method);
// System.Void Facebook.Unity.AccessToken::set_CurrentAccessToken(Facebook.Unity.AccessToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessToken_set_CurrentAccessToken_m89E9DA7B22C97CD852A646D092C031A409975F95_inline (AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE * ___value0, const RuntimeMethod* method);
// System.Boolean Facebook.Unity.Utilities::TryGetValue<System.Collections.Generic.IDictionary`2<System.String,System.Object>>(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String,T&)
inline bool Utilities_TryGetValue_TisIDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_m31E18EDD7089F929896DB8F2E2000A726D95244B (RuntimeObject* ___dictionary0, String_t* ___key1, RuntimeObject** ___value2, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, RuntimeObject**, const RuntimeMethod*))Utilities_TryGetValue_TisRuntimeObject_m79EF0D1B5694075C46826FB1541143A091DFF918_gshared)(___dictionary0, ___key1, ___value2, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Boolean Facebook.Unity.Utilities::TryGetValue<System.Collections.Generic.IList`1<System.Object>>(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String,T&)
inline bool Utilities_TryGetValue_TisIList_1_t707982BD768B18C51D263C759F33BCDBDFA44901_mC5A9385470CA6BC0F4EDA1B39807C93F0EABFABB (RuntimeObject* ___dictionary0, String_t* ___key1, RuntimeObject** ___value2, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, RuntimeObject**, const RuntimeMethod*))Utilities_TryGetValue_TisRuntimeObject_m79EF0D1B5694075C46826FB1541143A091DFF918_gshared)(___dictionary0, ___key1, ___value2, method);
}
// System.Boolean Facebook.Unity.Utilities::TryGetValue<System.String>(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String,T&)
inline bool Utilities_TryGetValue_TisString_t_m3616C0960546F48FAF831005C69AB3773EE3AC5A (RuntimeObject* ___dictionary0, String_t* ___key1, String_t** ___value2, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, String_t**, const RuntimeMethod*))Utilities_TryGetValue_TisRuntimeObject_m79EF0D1B5694075C46826FB1541143A091DFF918_gshared)(___dictionary0, ___key1, ___value2, method);
}
// System.Boolean System.String::Equals(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m62F0586691097AA2EE48F1596A130170BCFBF7F6 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Void Facebook.Unity.FacebookLogger::Warn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacebookLogger_Warn_mF99B003233C9446F168694CCDAC6261FFF0EEC97 (String_t* ___msg0, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.ResultContainer::get_ResultDictionary()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ResultContainer_get_ResultDictionary_m54F102EC69960805511681B39A6E205EC54A0810_inline (ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * __this, const RuntimeMethod* method);
// System.String Facebook.Unity.Utilities::ToCommaSeparateList(System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utilities_ToCommaSeparateList_m58AF1FDBFF925B4DD37509A5644A64EC03511024 (RuntimeObject* ___list0, const RuntimeMethod* method);
// System.Void Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>::Invoke(T)
inline void Callback_1_Invoke_m68DA77FC073985AEBA44E208A3826A0D1A0F4526 (Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A * __this, ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A *, ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 *, const RuntimeMethod*))Callback_1_Invoke_m51AC25245B4C013AF7E2CE060A564A28440D9FBF_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.String Facebook.Unity.CodelessCrawler::GenBase64Screenshot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CodelessCrawler_GenBase64Screenshot_m585F825C9BCA3292E28535500D1D02469EEF4C64 (const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.String Facebook.Unity.CodelessCrawler::GenViewJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CodelessCrawler_GenViewJson_mA19D5A26FE3B45F2B1E1B49C1076B0A2859AB4D3 (const RuntimeMethod* method);
// System.Void Facebook.Unity.CodelessCrawler::SendAndroid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessCrawler_SendAndroid_m2F1DAF1BB31F41B7C56BAE0AACBAA7785DA13707 (String_t* ___json0, const RuntimeMethod* method);
// System.Void Facebook.Unity.CodelessCrawler::SendIos(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessCrawler_SendIos_m80F4010CF5B9C80583083AE51270AC08C753C620 (String_t* ___json0, const RuntimeMethod* method);
// System.String Facebook.Unity.Settings.FacebookSettings::get_ChannelUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FacebookSettings_get_ChannelUrl_m9D532E0A38B50713E40C374A92321C5011EB6151 (const RuntimeMethod* method);
// System.Boolean Facebook.Unity.Constants::get_DebugMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Constants_get_DebugMode_m7FF9B9742CEE07834BB815480027734850269741 (const RuntimeMethod* method);
// System.Void Facebook.Unity.Canvas.CanvasFacebook::Init(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,System.String,System.Boolean,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasFacebook_Init_mBFA3BFE731CFE867C0681AC229096410DCB1C121 (CanvasFacebook_tAA30DBE4032D110838045C7410570F9DB39C8637 * __this, String_t* ___appId0, bool ___cookie1, bool ___logging2, bool ___status3, bool ___xfbml4, String_t* ___channelUrl5, String_t* ___authResponse6, bool ___frictionlessRequests7, String_t* ___javascriptSDKLocale8, bool ___loadDebugJSSDK9, HideUnityDelegate_t20FD43E26003761ABD29BE7379356065AAB4334F * ___hideUnityDelegate10, InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D * ___onInitComplete11, const RuntimeMethod* method);
// System.String Facebook.Unity.Settings.FacebookSettings::get_IosURLSuffix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FacebookSettings_get_IosURLSuffix_m0A824600D6D91041CC1F34DA4D01B3062FFB194D (const RuntimeMethod* method);
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::Init(System.String,System.Boolean,System.String,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSFacebook_Init_m6C2AD52F11A7D429B742F5E9E1ED5E6A1BC58002 (IOSFacebook_t37653B5398AACEE2A4D3688D563788544E513307 * __this, String_t* ___appId0, bool ___frictionlessRequests1, String_t* ___iosURLSuffix2, HideUnityDelegate_t20FD43E26003761ABD29BE7379356065AAB4334F * ___hideUnityDelegate3, InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D * ___onInitComplete4, const RuntimeMethod* method);
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::Init(System.String,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidFacebook_Init_m3507198C70BCEAD339A8912090784090DDBCE179 (AndroidFacebook_t60B3A6C3AC97799AEF427D3C4413AF27290A9E1E * __this, String_t* ___appId0, HideUnityDelegate_t20FD43E26003761ABD29BE7379356065AAB4334F * ___hideUnityDelegate1, InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D * ___onInitComplete2, const RuntimeMethod* method);
// System.Void Facebook.Unity.Gameroom.GameroomFacebook::Init(System.String,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameroomFacebook_Init_m9AC7EEF3225D0CEB762B86C844FE331BC576F273 (GameroomFacebook_t5F063C3632F0F61E7EAB6B5E594C21F46D669F20 * __this, String_t* ___appId0, HideUnityDelegate_t20FD43E26003761ABD29BE7379356065AAB4334F * ___hideUnityDelegate1, InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D * ___onInitComplete2, const RuntimeMethod* method);
// Facebook.Unity.IFacebook Facebook.Unity.FB::get_FacebookImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FB_get_FacebookImpl_mE48131DC8F34E2C9D2EEF145B79DA15E5677EE1A (const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// Facebook.Unity.IPayFacebook Facebook.Unity.FB/Canvas::get_FacebookPayImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Canvas_get_FacebookPayImpl_m8598573BC92C2F84A99E4F21CA4CB1D6EE4A7107 (const RuntimeMethod* method);
// Facebook.Unity.IFacebookImplementation Facebook.Unity.FacebookGameObject::get_Facebook()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FacebookGameObject_get_Facebook_m9E679BFB8543D49BDADC13DF674122699C72FA23_inline (FacebookGameObject_t6FC4F88C6F002C8663BD2429B8E090A960E341BA * __this, const RuntimeMethod* method);
// Facebook.Unity.FB/OnDLLLoaded Facebook.Unity.FB::get_OnDLLLoadedDelegate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnDLLLoaded_tF6931D34771F7C57F71E731BFE7B86676BCA26FC * FB_get_OnDLLLoadedDelegate_m0BDFE1904A457997439BBDFD9016A11380CBA041_inline (const RuntimeMethod* method);
// System.Void Facebook.Unity.FB/OnDLLLoaded::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDLLLoaded_Invoke_mA9CFCB63DE8B051CA17C030B66655241DC2910E3 (OnDLLLoaded_tF6931D34771F7C57F71E731BFE7B86676BCA26FC * __this, const RuntimeMethod* method);
// System.Void Facebook.Unity.FB::LogVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FB_LogVersion_mAC4FEF235FDE71E78F8BB3B589C3DE665F2254D7 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// Facebook.Unity.Mobile.IMobileFacebook Facebook.Unity.FB/Mobile::get_MobileFacebookImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mobile_get_MobileFacebookImpl_m4ABCFB81CEDB44023E871E65BF4F8A4CD097987A (const RuntimeMethod* method);
// System.Void Facebook.Unity.FacebookBase/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEF509BC80C756336A6343B05EF61DF63D17F1B7E (U3CU3Ec_t53E3994EE79BD19A2AEE97604EDBCD10CE5C858C * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// Facebook.Unity.Gameroom.IGameroomFacebookImplementation Facebook.Unity.Gameroom.GameroomFacebookGameObject::get_GameroomFacebookImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameroomFacebookGameObject_get_GameroomFacebookImpl_m7803E11B2D72780F34246F51C5362FAE8ED15250 (GameroomFacebookGameObject_t5A562D965FCCF7838C82251F00C524F3CFAD51D0 * __this, const RuntimeMethod* method);
// System.Void Facebook.Unity.ResultContainer::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultContainer__ctor_mE3B0AB9F29D77AE595CCB4AEE626B6B0D64D316B (ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * __this, String_t* ___result0, const RuntimeMethod* method);
// System.Void Facebook.Unity.Gameroom.GameroomFacebook/OnComplete::Invoke(Facebook.Unity.ResultContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnComplete_Invoke_m20B4D4BF1146A1C9EAB866211A38589C2F623FAF (OnComplete_tDE1F16FBF428F5A978FDDBF43106E8B6465EC241 * __this, ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * ___resultContainer0, const RuntimeMethod* method);
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::set_NumEntries(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDict_set_NumEntries_m903864AFD0C84100F452FD86EAD90D8914E1AF00_inline (NativeDict_t7F0F20CA44B5C90D5076D1EB289255DDEA8F42AF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::set_Keys(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDict_set_Keys_m76188FB7DD583FF0DA33F34BEE833E2D0B00BF38_inline (NativeDict_t7F0F20CA44B5C90D5076D1EB289255DDEA8F42AF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method);
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::set_Values(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDict_set_Values_m654E161C3EA517FC486B1CA9D4C709456BE0396B_inline (NativeDict_t7F0F20CA44B5C90D5076D1EB289255DDEA8F42AF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE (StringReader_t74E352C280EAC22C878867444978741F19E1F895 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC (int32_t ___value0, const RuntimeMethod* method);
// System.Char Facebook.MiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m5CE8CA5369F250161B1931DE7C9D9F11AC536B63 (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Char Facebook.MiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m46DEF96465982F82538D7C62E90B9955C06A4C73 (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void Facebook.MiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m861ABFEF6AB4E50E792A8C482785A92651921CB7 (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method);
// System.String Facebook.MiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m63B8EE9D434E66CB17B4990B94BAD857E4001EED (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Facebook.MiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m6EC5E7DC4071D6D529AE6BD432745CE9A24B3B85 (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, String_t* ___jsonString0, const RuntimeMethod* method);
// System.Object Facebook.MiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_mEFB0D7E1456840A899B0B36D0EAF4174EE2AC982 (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method);
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8 (TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// Facebook.MiniJSON.Json/Parser/TOKEN Facebook.MiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m25D2DE90D96C86C189F543992B03AFE17DF8E641 (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method);
// System.String Facebook.MiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m0E6E3815D75F483F126F718C352167B8B06CB235 (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Object Facebook.MiniJSON.Json/Parser::ParseByToken(Facebook.MiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m3B1884162F02D6B179195C9CC0707AF1E1F8DA48 (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, int32_t ___token0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Object Facebook.MiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m389E9F7298A97119224FFCA193E913D43BF2393F (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Facebook.MiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_m174B14151490D41EF70E0E661F0C0F674C3140B1 (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Object> Facebook.MiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_mC4344AF4BF7A1C9DC4A67D9B5E88AAA0404D49EA (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method);
// System.Int64 System.Int64::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int64_Parse_m8DDFA7706B4470D748A591EA89D224D608BD756C (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Double System.Double::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_m281C3FAE601723AC732D26BAFC6D61CEFD2E0F7D (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void Facebook.MiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m415BB4FD3A6B41305ECDA010AAE11426DBD21970 (Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66 * __this, const RuntimeMethod* method);
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m74BCFCFD908B0C44E59A4D2120B5B3FF900451C3 (Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mC0483BCA0C1BC956E85D5EF17A2A2EC17278CE62 (Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mA7D5C0795410CBBFFBCF981F9875CC8FC4891B8B (Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66 * __this, RuntimeObject* ___array0, const RuntimeMethod* method);
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_mC05D69A00DA5877A0E2C4E43058BC05AA7BFAE3D (Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method);
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_mE29109FFFB088B9E4EE1E30F97ECFF0F6CB31247 (Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC (Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mA60945431DE8F2DFDF3A3E4C76C21703562F2906 (int32_t ___value0, int32_t ___toBase1, const RuntimeMethod* method);
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328 (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method);
// System.Void Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1__ctor_m2DE55622E7FF98D1EC9891E8E15742A0435DFE82 (U3CU3Ec__DisplayClass4_1_t056A49F163C02E87FC239F5CBA664067200F7165 * __this, const RuntimeMethod* method);
// System.Void Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>::.ctor(System.Object,System.IntPtr)
inline void FacebookDelegate_1__ctor_m9191F920293FB38D34AEFF835D0CDC350C82FA2F (FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190 *, RuntimeObject *, intptr_t, const RuntimeMethod*))FacebookDelegate_1__ctor_mF9FF22C1FF460D1CD15A8A87099BA4EA587BAEBB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Facebook.Unity.FB::API(System.String,Facebook.Unity.HttpMethod,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FB_API_m45E8B150C258B0B0DCB33C4AB9FA40DF058E4DBF (String_t* ___query0, int32_t ___method1, FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190 * ___callback2, RuntimeObject* ___formData3, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090 (const RuntimeMethod* method);
// System.DateTime System.DateTime::AddDays(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_AddDays_mEB8882A3289F39D7B10E5A1FB36A2ABF80328368 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, double ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
inline void Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_gshared)(__this, ___value0, method);
}
// System.Void Facebook.Unity.AccessToken::.ctor(System.String,System.String,System.DateTime,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.DateTime>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessToken__ctor_mD3084A415552822986216C17545EBB06B7021B3D (AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE * __this, String_t* ___tokenString0, String_t* ___userId1, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___expirationTime2, RuntimeObject* ___permissions3, Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___lastRefresh4, String_t* ___graphDomain5, const RuntimeMethod* method);
// System.String Facebook.Unity.AccessToken::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessToken_ToJson_mCB7D6E04F3796E40BD4E024F78D1C1EF45180B00 (AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE * __this, const RuntimeMethod* method);
// System.Object Facebook.MiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_m80F0DCD7ED9DF399D673C2228A3D7561DDC56457 (String_t* ___json0, const RuntimeMethod* method);
// System.String Facebook.Unity.Editor.EditorFacebookMockDialog::get_CallbackID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EditorFacebookMockDialog_get_CallbackID_m3C0F0A4CF09E8025821214DF4C5FCE3DDFC8DD63_inline (EditorFacebookMockDialog_tED6E44AFBC3DF5B93DB89A7137CDF227687DB951 * __this, const RuntimeMethod* method);
// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer> Facebook.Unity.Editor.EditorFacebookMockDialog::get_Callback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A * EditorFacebookMockDialog_get_Callback_mB414433277F2E3C45DFF4F4A28D9325C43EFA944_inline (EditorFacebookMockDialog_tED6E44AFBC3DF5B93DB89A7137CDF227687DB951 * __this, const RuntimeMethod* method);
// System.Void Facebook.Unity.ResultContainer::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultContainer__ctor_mD39221B1A09D30AB8C198F5767BBD3C517586467 (ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void Facebook.Unity.Utilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF091F7805EB5B7EE3DFDAAEA84C1B2191B163E5E (U3CU3Ec_t07DB35654B84F9536C79685DDE68969F89E08208 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m56ECEF372B592762858D20D9BEDF51E46C71FF52 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD * L_0 = (U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD *)il2cpp_codegen_object_new(U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC7F2CE7DD2D916CF5CC599E7C5A3EC0A924C991F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC7F2CE7DD2D916CF5CC599E7C5A3EC0A924C991F (U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Facebook.Unity.Mobile.Android.AndroidFacebook/<>c::<CreateTournament>b__65_0(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateTournamentU3Eb__65_0_mE46AE85394171321EE48996E10DE005F00103BC5 (U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD * __this, KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___pair0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&___pair0), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		return L_0;
	}
}
// System.Object Facebook.Unity.Mobile.Android.AndroidFacebook/<>c::<CreateTournament>b__65_1(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CCreateTournamentU3Eb__65_1_m47550028BD885968C07CEDD3CB281D74A80491D6 (U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD * __this, KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___pair0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&___pair0), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		return L_0;
	}
}
// System.String Facebook.Unity.Mobile.Android.AndroidFacebook/<>c::<ShareTournament>b__66_0(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CShareTournamentU3Eb__66_0_mF8DF53B288696F8C5C56625668743B304E43EAEE (U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD * __this, KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___pair0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&___pair0), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		return L_0;
	}
}
// System.Object Facebook.Unity.Mobile.Android.AndroidFacebook/<>c::<ShareTournament>b__66_1(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CShareTournamentU3Eb__66_1_mA170BE284F12E902CE83E0C2E25B91209B7C74B8 (U3CU3Ec_tA55B19247B91BD6C76953F5EB7D4E955674965DD * __this, KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___pair0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&___pair0), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		return L_0;
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
// System.Void Facebook.Unity.AsyncRequestString/<Start>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__9__ctor_mE415245DD76E0756F16F555BAD8CF340945CD640 (U3CStartU3Ed__9_t619A356D65AD06788AE694D9A1B27A38A4BB7DA4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.Unity.AsyncRequestString/<Start>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__9_System_IDisposable_Dispose_mA7A728FDE16C4E0A8B93760D3F5BC0AD050C5E6D (U3CStartU3Ed__9_t619A356D65AD06788AE694D9A1B27A38A4BB7DA4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Facebook.Unity.AsyncRequestString/<Start>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__9_MoveNext_m5271D259BF89CB1428F0F5F4FBA54E52A2DEB803 (U3CStartU3Ed__9_t619A356D65AD06788AE694D9A1B27A38A4BB7DA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacebookDelegate_1_Invoke_m9653C735B153146CE4B92F6E8BB3CDA447AADB6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphResult_t5FFF348FCD41CB781E8BE359FB14160489B86883_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tFBD6BBCAEB863478E70CD1504627E429F27569AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t692ABF80A29FB82368A57AE22841134E3626E47A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral028D7034AFF25D3F9A597A5740013E38DA19D317);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E0A5DD7448FDA396D48F77CFABCEBB72D6A5D19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * V_1 = NULL;
	String_t* V_2 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_5;
	memset((&V_5), 0, sizeof(V_5));
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	String_t* G_B7_0 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B20_0 = NULL;
	U3CStartU3Ed__9_t619A356D65AD06788AE694D9A1B27A38A4BB7DA4 * G_B20_1 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * G_B19_0 = NULL;
	U3CStartU3Ed__9_t619A356D65AD06788AE694D9A1B27A38A4BB7DA4 * G_B19_1 = NULL;
	String_t* G_B21_0 = NULL;
	U3CStartU3Ed__9_t619A356D65AD06788AE694D9A1B27A38A4BB7DA4 * G_B21_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_01cc;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_method_5();
		if (L_5)
		{
			goto IL_00f8;
		}
	}
	{
		AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * L_6 = V_1;
		NullCheck(L_6);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_7 = L_6->get_url_4();
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_8, _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_004a;
		}
	}
	{
		G_B7_0 = _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
		goto IL_004f;
	}

IL_004a:
	{
		G_B7_0 = _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
	}

IL_004f:
	{
		V_2 = G_B7_0;
		AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * L_10 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->get_formData_6();
		if (!L_11)
		{
			goto IL_00b0;
		}
	}
	{
		AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * L_12 = V_1;
		NullCheck(L_12);
		RuntimeObject* L_13 = L_12->get_formData_6();
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_tFBD6BBCAEB863478E70CD1504627E429F27569AA_il2cpp_TypeInfo_var, L_13);
		V_4 = L_14;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0099;
		}

IL_0067:
		{
			RuntimeObject* L_15 = V_4;
			NullCheck(L_15);
			KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_16;
			L_16 = InterfaceFuncInvoker0< KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t692ABF80A29FB82368A57AE22841134E3626E47A_il2cpp_TypeInfo_var, L_15);
			V_5 = L_16;
			String_t* L_17 = V_2;
			String_t* L_18;
			L_18 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
			String_t* L_19;
			L_19 = Uri_EscapeDataString_m65EC321EA46B682D20E13D00DA17B846BB5CDF20(L_18, /*hidden argument*/NULL);
			String_t* L_20;
			L_20 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			String_t* L_21;
			L_21 = Uri_EscapeDataString_m65EC321EA46B682D20E13D00DA17B846BB5CDF20(L_20, /*hidden argument*/NULL);
			String_t* L_22;
			L_22 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral0E0A5DD7448FDA396D48F77CFABCEBB72D6A5D19, L_19, L_21, /*hidden argument*/NULL);
			String_t* L_23;
			L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_17, L_22, /*hidden argument*/NULL);
			V_2 = L_23;
		}

IL_0099:
		{
			RuntimeObject* L_24 = V_4;
			NullCheck(L_24);
			bool L_25;
			L_25 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_24);
			if (L_25)
			{
				goto IL_0067;
			}
		}

IL_00a2:
		{
			IL2CPP_LEAVE(0xB0, FINALLY_00a4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a4;
	}

FINALLY_00a4:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_26 = V_4;
			if (!L_26)
			{
				goto IL_00af;
			}
		}

IL_00a8:
		{
			RuntimeObject* L_27 = V_4;
			NullCheck(L_27);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_27);
		}

IL_00af:
		{
			IL2CPP_END_FINALLY(164)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(164)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
	}

IL_00b0:
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_28 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_28, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		V_3 = L_28;
		int32_t L_29;
		L_29 = Constants_get_CurrentPlatform_mDEF64E92FE0C0B3E2AB3C47AC12735661B223064(/*hidden argument*/NULL);
		if ((((int32_t)L_29) == ((int32_t)3)))
		{
			goto IL_00ce;
		}
	}
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_30 = V_3;
		String_t* L_31;
		L_31 = Constants_get_GraphApiUserAgent_m591596C787B9C90C3AD6D4C1F73E3D74EC11208D(/*hidden argument*/NULL);
		NullCheck(L_30);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_30, _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF, L_31, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
	}

IL_00ce:
	{
		AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * L_32 = V_1;
		NullCheck(L_32);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_33 = L_32->get_url_4();
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_34 = L_33;
		G_B19_0 = L_34;
		G_B19_1 = __this;
		if (L_34)
		{
			G_B20_0 = L_34;
			G_B20_1 = __this;
			goto IL_00dc;
		}
	}
	{
		G_B21_0 = ((String_t*)(NULL));
		G_B21_1 = G_B19_1;
		goto IL_00e1;
	}

IL_00dc:
	{
		NullCheck(G_B20_0);
		String_t* L_35;
		L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B20_0);
		G_B21_0 = L_35;
		G_B21_1 = G_B20_1;
	}

IL_00e1:
	{
		String_t* L_36 = V_2;
		String_t* L_37;
		L_37 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B21_0, L_36, /*hidden argument*/NULL);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_38 = V_3;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_39 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		WWW__ctor_m6686CBC878BB9EB28F4C4171C203CA4E3DE3656C(L_39, L_37, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, L_38, /*hidden argument*/NULL);
		NullCheck(G_B21_1);
		G_B21_1->set_U3CwwwU3E5__2_3(L_39);
		goto IL_01b7;
	}

IL_00f8:
	{
		AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * L_40 = V_1;
		NullCheck(L_40);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_41 = L_40->get_query_7();
		if (L_41)
		{
			goto IL_010b;
		}
	}
	{
		AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * L_42 = V_1;
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_43 = (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB *)il2cpp_codegen_object_new(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055(L_43, /*hidden argument*/NULL);
		NullCheck(L_42);
		L_42->set_query_7(L_43);
	}

IL_010b:
	{
		AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * L_44 = V_1;
		NullCheck(L_44);
		int32_t L_45 = L_44->get_method_5();
		if ((!(((uint32_t)L_45) == ((uint32_t)2))))
		{
			goto IL_0129;
		}
	}
	{
		AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * L_46 = V_1;
		NullCheck(L_46);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_47 = L_46->get_query_7();
		NullCheck(L_47);
		WWWForm_AddField_m8ACDB7B2124FA6EAD7FC120BB469C6352C7B7696(L_47, _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF, _stringLiteral028D7034AFF25D3F9A597A5740013E38DA19D317, /*hidden argument*/NULL);
	}

IL_0129:
	{
		AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * L_48 = V_1;
		NullCheck(L_48);
		RuntimeObject* L_49 = L_48->get_formData_6();
		if (!L_49)
		{
			goto IL_0179;
		}
	}
	{
		AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * L_50 = V_1;
		NullCheck(L_50);
		RuntimeObject* L_51 = L_50->get_formData_6();
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_tFBD6BBCAEB863478E70CD1504627E429F27569AA_il2cpp_TypeInfo_var, L_51);
		V_4 = L_52;
	}

IL_013e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0162;
		}

IL_0140:
		{
			RuntimeObject* L_53 = V_4;
			NullCheck(L_53);
			KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_54;
			L_54 = InterfaceFuncInvoker0< KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t692ABF80A29FB82368A57AE22841134E3626E47A_il2cpp_TypeInfo_var, L_53);
			V_6 = L_54;
			AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * L_55 = V_1;
			NullCheck(L_55);
			WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_56 = L_55->get_query_7();
			String_t* L_57;
			L_57 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_6), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
			String_t* L_58;
			L_58 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_6), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			NullCheck(L_56);
			WWWForm_AddField_m8ACDB7B2124FA6EAD7FC120BB469C6352C7B7696(L_56, L_57, L_58, /*hidden argument*/NULL);
		}

IL_0162:
		{
			RuntimeObject* L_59 = V_4;
			NullCheck(L_59);
			bool L_60;
			L_60 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_59);
			if (L_60)
			{
				goto IL_0140;
			}
		}

IL_016b:
		{
			IL2CPP_LEAVE(0x179, FINALLY_016d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_016d;
	}

FINALLY_016d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_61 = V_4;
			if (!L_61)
			{
				goto IL_0178;
			}
		}

IL_0171:
		{
			RuntimeObject* L_62 = V_4;
			NullCheck(L_62);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_62);
		}

IL_0178:
		{
			IL2CPP_END_FINALLY(365)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(365)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x179, IL_0179)
	}

IL_0179:
	{
		int32_t L_63;
		L_63 = Constants_get_CurrentPlatform_mDEF64E92FE0C0B3E2AB3C47AC12735661B223064(/*hidden argument*/NULL);
		if ((((int32_t)L_63) == ((int32_t)3)))
		{
			goto IL_019b;
		}
	}
	{
		AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * L_64 = V_1;
		NullCheck(L_64);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_65 = L_64->get_query_7();
		NullCheck(L_65);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_66;
		L_66 = WWWForm_get_headers_m9F6A4222926792B110E9821AF5B23FF3FB9BD45A(L_65, /*hidden argument*/NULL);
		String_t* L_67;
		L_67 = Constants_get_GraphApiUserAgent_m591596C787B9C90C3AD6D4C1F73E3D74EC11208D(/*hidden argument*/NULL);
		NullCheck(L_66);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_66, _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF, L_67, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
	}

IL_019b:
	{
		AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * L_68 = V_1;
		NullCheck(L_68);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_69 = L_68->get_url_4();
		NullCheck(L_69);
		String_t* L_70;
		L_70 = Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA(L_69, /*hidden argument*/NULL);
		AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * L_71 = V_1;
		NullCheck(L_71);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_72 = L_71->get_query_7();
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_73 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		WWW__ctor_m2F58987EB716A6D1B9B2425464E5C42FB6CF7DE6(L_73, L_70, L_72, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_73);
	}

IL_01b7:
	{
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_74 = __this->get_U3CwwwU3E5__2_3();
		__this->set_U3CU3E2__current_1(L_74);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_01cc:
	{
		__this->set_U3CU3E1__state_0((-1));
		AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * L_75 = V_1;
		NullCheck(L_75);
		FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190 * L_76 = L_75->get_callback_8();
		if (!L_76)
		{
			goto IL_01f1;
		}
	}
	{
		AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * L_77 = V_1;
		NullCheck(L_77);
		FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190 * L_78 = L_77->get_callback_8();
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_79 = __this->get_U3CwwwU3E5__2_3();
		GraphResult_t5FFF348FCD41CB781E8BE359FB14160489B86883 * L_80 = (GraphResult_t5FFF348FCD41CB781E8BE359FB14160489B86883 *)il2cpp_codegen_object_new(GraphResult_t5FFF348FCD41CB781E8BE359FB14160489B86883_il2cpp_TypeInfo_var);
		GraphResult__ctor_mCC1CEC13BE56760362FEFBFEF967C7E1F91AAA71(L_80, L_79, /*hidden argument*/NULL);
		NullCheck(L_78);
		FacebookDelegate_1_Invoke_m9653C735B153146CE4B92F6E8BB3CDA447AADB6D(L_78, L_80, /*hidden argument*/FacebookDelegate_1_Invoke_m9653C735B153146CE4B92F6E8BB3CDA447AADB6D_RuntimeMethod_var);
	}

IL_01f1:
	{
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_81 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_81);
		WWW_Dispose_mF5A8B944281564903043545BC1E7F1CAD941519F(L_81, /*hidden argument*/NULL);
		AsyncRequestString_tB6C3ECEE9A148DD38CC705FDEB3C6492DE6D8EF2 * L_82 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_82, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object Facebook.Unity.AsyncRequestString/<Start>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1C03E7071E05FA964B377DAFFB94F567D582F1C8 (U3CStartU3Ed__9_t619A356D65AD06788AE694D9A1B27A38A4BB7DA4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.Unity.AsyncRequestString/<Start>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__9_System_Collections_IEnumerator_Reset_mAC4C9A86B93095D3F39A525E6D4FEA6368E6CF8B (U3CStartU3Ed__9_t619A356D65AD06788AE694D9A1B27A38A4BB7DA4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__9_System_Collections_IEnumerator_Reset_mAC4C9A86B93095D3F39A525E6D4FEA6368E6CF8B_RuntimeMethod_var)));
	}
}
// System.Object Facebook.Unity.AsyncRequestString/<Start>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__9_System_Collections_IEnumerator_get_Current_m5AE57ABBB0125850DA8351803A218B0DDF62EEBD (U3CStartU3Ed__9_t619A356D65AD06788AE694D9A1B27A38A4BB7DA4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Facebook.Unity.Canvas.CanvasFacebook/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFCD9C1004B5A11B8D00E6A744C073A79989B6712 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t02C80072E1F79793486660F0BC57274F8045F458_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t02C80072E1F79793486660F0BC57274F8045F458 * L_0 = (U3CU3Ec_t02C80072E1F79793486660F0BC57274F8045F458 *)il2cpp_codegen_object_new(U3CU3Ec_t02C80072E1F79793486660F0BC57274F8045F458_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5DBEF325E042AAEDD847E9CF5FEAE53D64BC9A9E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t02C80072E1F79793486660F0BC57274F8045F458_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02C80072E1F79793486660F0BC57274F8045F458_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Facebook.Unity.Canvas.CanvasFacebook/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5DBEF325E042AAEDD847E9CF5FEAE53D64BC9A9E (U3CU3Ec_t02C80072E1F79793486660F0BC57274F8045F458 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.Canvas.CanvasFacebook/<>c::<OnFacebookAuthResponseChange>b__40_0(Facebook.Unity.ResultContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnFacebookAuthResponseChangeU3Eb__40_0_m7CFB8AEAC504EB0DB6690900A1878DAFF8A1E42B (U3CU3Ec_t02C80072E1F79793486660F0BC57274F8045F458 * __this, ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * ___formattedResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * L_0 = ___formattedResponse0;
		LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8 * L_1 = (LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8 *)il2cpp_codegen_object_new(LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8_il2cpp_TypeInfo_var);
		LoginResult__ctor_m9D1DA28F7636FFD3756A2C461857149375471F54(L_1, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE * L_2;
		L_2 = LoginResult_get_AccessToken_m6DDF9B1A8F63CEF6497A0F846F473FC32E3421FF_inline(L_1, /*hidden argument*/NULL);
		AccessToken_set_CurrentAccessToken_m89E9DA7B22C97CD852A646D092C031A409975F95_inline(L_2, /*hidden argument*/NULL);
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
// System.Void Facebook.Unity.Canvas.CanvasFacebook/<>c__DisplayClass47_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0__ctor_m9E0681515D96CDDCB3C3F5D4C7E7BE228E47BC33 (U3CU3Ec__DisplayClass47_0_t0C304C31318E62E8685EE88F061F2CA6BAF07951 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.Canvas.CanvasFacebook/<>c__DisplayClass47_0::<FormatAuthResponse>b__0(Facebook.Unity.IGraphResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0_U3CFormatAuthResponseU3Eb__0_mE245C0EC70BE2CFCF0DB63467C7CA903F757E65D (U3CU3Ec__DisplayClass47_0_t0C304C31318E62E8685EE88F061F2CA6BAF07951 * __this, RuntimeObject* ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_1_Invoke_m68DA77FC073985AEBA44E208A3826A0D1A0F4526_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacebookLogger_t0F27F4DDF3EB5BA82DB668A6F4C6DFF45EB5E80B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResult_tE2C6E14B59E6319C21F14DD742A81C3FD18CD7B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utilities_TryGetValue_TisIDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_m31E18EDD7089F929896DB8F2E2000A726D95244B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utilities_TryGetValue_TisIList_1_t707982BD768B18C51D263C759F33BCDBDFA44901_mC5A9385470CA6BC0F4EDA1B39807C93F0EABFABB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utilities_TryGetValue_TisString_t_m3616C0960546F48FAF831005C69AB3773EE3AC5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B09BDDCF49998D084C7F5812B74CC75E585E07E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral126A04A5A066C00B77AB4F3483884A7606F6BC5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30A7BF1FEE5DF8662ED83E80AA4537E34CC0361B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F3FFF195FC51E628335B6613953826BB06DAEB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46C0DBF8E329C836732C7C6705567D71C6792B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BB4572C6AC73940D49948BC96E824C0CFA913C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE79F08E3990626B5F3144E992D4D2F7D14584EC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8DE737330234B3EAC92FAE2AAB6B7DB5326CB91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD4706B02823C71252FBF63A74CF03433A8DADF0);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___r0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.IResult::get_ResultDictionary() */, IResult_tE2C6E14B59E6319C21F14DD742A81C3FD18CD7B9_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_00ea;
		}
	}
	{
		RuntimeObject* L_2 = ___r0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.IResult::get_ResultDictionary() */, IResult_tE2C6E14B59E6319C21F14DD742A81C3FD18CD7B9_il2cpp_TypeInfo_var, L_2);
		bool L_4;
		L_4 = Utilities_TryGetValue_TisIDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_m31E18EDD7089F929896DB8F2E2000A726D95244B(L_3, _stringLiteralE79F08E3990626B5F3144E992D4D2F7D14584EC0, (RuntimeObject**)(&V_0), /*hidden argument*/Utilities_TryGetValue_TisIDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_m31E18EDD7089F929896DB8F2E2000A726D95244B_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_00ea;
		}
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_5, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_1 = (RuntimeObject*)L_5;
		RuntimeObject* L_6 = V_0;
		bool L_7;
		L_7 = Utilities_TryGetValue_TisIList_1_t707982BD768B18C51D263C759F33BCDBDFA44901_mC5A9385470CA6BC0F4EDA1B39807C93F0EABFABB(L_6, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, (RuntimeObject**)(&V_2), /*hidden argument*/Utilities_TryGetValue_TisIList_1_t707982BD768B18C51D263C759F33BCDBDFA44901_mC5A9385470CA6BC0F4EDA1B39807C93F0EABFABB_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_00c3;
		}
	}
	{
		RuntimeObject* L_8 = V_2;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var, L_8);
		V_3 = L_9;
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00af;
		}

IL_0043:
		{
			RuntimeObject* L_10 = V_3;
			NullCheck(L_10);
			RuntimeObject * L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var, L_10);
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var));
			RuntimeObject* L_12 = V_4;
			if (!L_12)
			{
				goto IL_00a5;
			}
		}

IL_0054:
		{
			RuntimeObject* L_13 = V_4;
			bool L_14;
			L_14 = Utilities_TryGetValue_TisString_t_m3616C0960546F48FAF831005C69AB3773EE3AC5A(L_13, _stringLiteralFD4706B02823C71252FBF63A74CF03433A8DADF0, (String_t**)(&V_5), /*hidden argument*/Utilities_TryGetValue_TisString_t_m3616C0960546F48FAF831005C69AB3773EE3AC5A_RuntimeMethod_var);
			if (!L_14)
			{
				goto IL_0099;
			}
		}

IL_0064:
		{
			String_t* L_15 = V_5;
			NullCheck(L_15);
			bool L_16;
			L_16 = String_Equals_m62F0586691097AA2EE48F1596A130170BCFBF7F6(L_15, _stringLiteral30A7BF1FEE5DF8662ED83E80AA4537E34CC0361B, 3, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_0099;
			}
		}

IL_0073:
		{
			RuntimeObject* L_17 = V_4;
			bool L_18;
			L_18 = Utilities_TryGetValue_TisString_t_m3616C0960546F48FAF831005C69AB3773EE3AC5A(L_17, _stringLiteral126A04A5A066C00B77AB4F3483884A7606F6BC5D, (String_t**)(&V_6), /*hidden argument*/Utilities_TryGetValue_TisString_t_m3616C0960546F48FAF831005C69AB3773EE3AC5A_RuntimeMethod_var);
			if (!L_18)
			{
				goto IL_008d;
			}
		}

IL_0083:
		{
			RuntimeObject* L_19 = V_1;
			String_t* L_20 = V_6;
			NullCheck(L_19);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(!0) */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_19, L_20);
			goto IL_00af;
		}

IL_008d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FacebookLogger_t0F27F4DDF3EB5BA82DB668A6F4C6DFF45EB5E80B_il2cpp_TypeInfo_var);
			FacebookLogger_Warn_mF99B003233C9446F168694CCDAC6261FFF0EEC97(_stringLiteral3F3FFF195FC51E628335B6613953826BB06DAEB4, /*hidden argument*/NULL);
			goto IL_00af;
		}

IL_0099:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FacebookLogger_t0F27F4DDF3EB5BA82DB668A6F4C6DFF45EB5E80B_il2cpp_TypeInfo_var);
			FacebookLogger_Warn_mF99B003233C9446F168694CCDAC6261FFF0EEC97(_stringLiteral46C0DBF8E329C836732C7C6705567D71C6792B50, /*hidden argument*/NULL);
			goto IL_00af;
		}

IL_00a5:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FacebookLogger_t0F27F4DDF3EB5BA82DB668A6F4C6DFF45EB5E80B_il2cpp_TypeInfo_var);
			FacebookLogger_Warn_mF99B003233C9446F168694CCDAC6261FFF0EEC97(_stringLiteral4BB4572C6AC73940D49948BC96E824C0CFA913C8, /*hidden argument*/NULL);
		}

IL_00af:
		{
			RuntimeObject* L_21 = V_3;
			NullCheck(L_21);
			bool L_22;
			L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_0043;
			}
		}

IL_00b7:
		{
			IL2CPP_LEAVE(0xCD, FINALLY_00b9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b9;
	}

FINALLY_00b9:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_23 = V_3;
			if (!L_23)
			{
				goto IL_00c2;
			}
		}

IL_00bc:
		{
			RuntimeObject* L_24 = V_3;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_24);
		}

IL_00c2:
		{
			IL2CPP_END_FINALLY(185)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(185)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xCD, IL_00cd)
	}

IL_00c3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FacebookLogger_t0F27F4DDF3EB5BA82DB668A6F4C6DFF45EB5E80B_il2cpp_TypeInfo_var);
		FacebookLogger_Warn_mF99B003233C9446F168694CCDAC6261FFF0EEC97(_stringLiteral0B09BDDCF49998D084C7F5812B74CC75E585E07E, /*hidden argument*/NULL);
	}

IL_00cd:
	{
		ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * L_25 = __this->get_result_0();
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = ResultContainer_get_ResultDictionary_m54F102EC69960805511681B39A6E205EC54A0810_inline(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8_il2cpp_TypeInfo_var);
		String_t* L_27 = ((LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8_StaticFields*)il2cpp_codegen_static_fields_for(LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8_il2cpp_TypeInfo_var))->get_PermissionsKey_9();
		RuntimeObject* L_28 = V_1;
		String_t* L_29;
		L_29 = Utilities_ToCommaSeparateList_m58AF1FDBFF925B4DD37509A5644A64EC03511024(L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_26, L_27, L_29);
		goto IL_00f4;
	}

IL_00ea:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FacebookLogger_t0F27F4DDF3EB5BA82DB668A6F4C6DFF45EB5E80B_il2cpp_TypeInfo_var);
		FacebookLogger_Warn_mF99B003233C9446F168694CCDAC6261FFF0EEC97(_stringLiteralE8DE737330234B3EAC92FAE2AAB6B7DB5326CB91, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A * L_30 = __this->get_callback_1();
		ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * L_31 = __this->get_result_0();
		NullCheck(L_30);
		Callback_1_Invoke_m68DA77FC073985AEBA44E208A3826A0D1A0F4526(L_30, L_31, /*hidden argument*/Callback_1_Invoke_m68DA77FC073985AEBA44E208A3826A0D1A0F4526_RuntimeMethod_var);
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
// System.Void Facebook.Unity.CodelessCrawler/<GenSnapshot>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenSnapshotU3Ed__4__ctor_mC67C28B17D17A58D85CD83E1A85CBFE93F0FA887 (U3CGenSnapshotU3Ed__4_t4B5784FDB861343907AB4DD9FD48DC33D7117F0A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.Unity.CodelessCrawler/<GenSnapshot>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenSnapshotU3Ed__4_System_IDisposable_Dispose_m85F233C17EF054A14BD2381250C5643BF320C64B (U3CGenSnapshotU3Ed__4_t4B5784FDB861343907AB4DD9FD48DC33D7117F0A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Facebook.Unity.CodelessCrawler/<GenSnapshot>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGenSnapshotU3Ed__4_MoveNext_m3FFF14EE97CB7F67ACDEAC16A6ECF4F0AC1DA686 (U3CGenSnapshotU3Ed__4_t4B5784FDB861343907AB4DD9FD48DC33D7117F0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessCrawler_t85819DEFF58EEA402B26524950C20319B05EF11B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19D3A81B765D034E8C41B2AB7A578C2C3487E054);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61C5BF6A6E4334AE2F67DAEAABE3F356020EDF3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C2DC3333076E17431CD723AAF28851A9E0594E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_3 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002b:
	{
		__this->set_U3CU3E1__state_0((-1));
		IL2CPP_RUNTIME_CLASS_INIT(CodelessCrawler_t85819DEFF58EEA402B26524950C20319B05EF11B_il2cpp_TypeInfo_var);
		bool L_4 = ((CodelessCrawler_t85819DEFF58EEA402B26524950C20319B05EF11B_StaticFields*)il2cpp_codegen_static_fields_for(CodelessCrawler_t85819DEFF58EEA402B26524950C20319B05EF11B_il2cpp_TypeInfo_var))->get_isGeneratingSnapshot_4();
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		return (bool)0;
	}

IL_003b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CodelessCrawler_t85819DEFF58EEA402B26524950C20319B05EF11B_il2cpp_TypeInfo_var);
		((CodelessCrawler_t85819DEFF58EEA402B26524950C20319B05EF11B_StaticFields*)il2cpp_codegen_static_fields_for(CodelessCrawler_t85819DEFF58EEA402B26524950C20319B05EF11B_il2cpp_TypeInfo_var))->set_isGeneratingSnapshot_4((bool)1);
		StringBuilder_t * L_5 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_5, /*hidden argument*/NULL);
		StringBuilder_t * L_6 = L_5;
		String_t* L_7;
		L_7 = CodelessCrawler_GenBase64Screenshot_m585F825C9BCA3292E28535500D1D02469EEF4C64(/*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_t * L_8;
		L_8 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_6, _stringLiteralA3C2DC3333076E17431CD723AAF28851A9E0594E, L_7, /*hidden argument*/NULL);
		StringBuilder_t * L_9 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_10;
		L_10 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_2 = L_10;
		String_t* L_11;
		L_11 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_9);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_9, _stringLiteral19D3A81B765D034E8C41B2AB7A578C2C3487E054, L_11, /*hidden argument*/NULL);
		StringBuilder_t * L_13 = L_9;
		String_t* L_14;
		L_14 = CodelessCrawler_GenViewJson_mA19D5A26FE3B45F2B1E1B49C1076B0A2859AB4D3(/*hidden argument*/NULL);
		NullCheck(L_13);
		StringBuilder_t * L_15;
		L_15 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_13, _stringLiteral61C5BF6A6E4334AE2F67DAEAABE3F356020EDF3F, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		V_1 = L_16;
		int32_t L_17;
		L_17 = Constants_get_CurrentPlatform_mDEF64E92FE0C0B3E2AB3C47AC12735661B223064(/*hidden argument*/NULL);
		V_3 = L_17;
		int32_t L_18 = V_3;
		if ((((int32_t)L_18) == ((int32_t)1)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) == ((int32_t)2)))
		{
			goto IL_009f;
		}
	}
	{
		goto IL_00a5;
	}

IL_0097:
	{
		String_t* L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(CodelessCrawler_t85819DEFF58EEA402B26524950C20319B05EF11B_il2cpp_TypeInfo_var);
		CodelessCrawler_SendAndroid_m2F1DAF1BB31F41B7C56BAE0AACBAA7785DA13707(L_20, /*hidden argument*/NULL);
		goto IL_00a5;
	}

IL_009f:
	{
		String_t* L_21 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(CodelessCrawler_t85819DEFF58EEA402B26524950C20319B05EF11B_il2cpp_TypeInfo_var);
		CodelessCrawler_SendIos_m80F4010CF5B9C80583083AE51270AC08C753C620(L_21, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CodelessCrawler_t85819DEFF58EEA402B26524950C20319B05EF11B_il2cpp_TypeInfo_var);
		((CodelessCrawler_t85819DEFF58EEA402B26524950C20319B05EF11B_StaticFields*)il2cpp_codegen_static_fields_for(CodelessCrawler_t85819DEFF58EEA402B26524950C20319B05EF11B_il2cpp_TypeInfo_var))->set_isGeneratingSnapshot_4((bool)0);
		return (bool)0;
	}
}
// System.Object Facebook.Unity.CodelessCrawler/<GenSnapshot>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGenSnapshotU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCF6D2A4C49896F806A34474E6828820D2E7B475F (U3CGenSnapshotU3Ed__4_t4B5784FDB861343907AB4DD9FD48DC33D7117F0A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.Unity.CodelessCrawler/<GenSnapshot>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenSnapshotU3Ed__4_System_Collections_IEnumerator_Reset_mA698BF518628E3A06BB8B7EC033342F6CF8EBFAB (U3CGenSnapshotU3Ed__4_t4B5784FDB861343907AB4DD9FD48DC33D7117F0A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGenSnapshotU3Ed__4_System_Collections_IEnumerator_Reset_mA698BF518628E3A06BB8B7EC033342F6CF8EBFAB_RuntimeMethod_var)));
	}
}
// System.Object Facebook.Unity.CodelessCrawler/<GenSnapshot>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGenSnapshotU3Ed__4_System_Collections_IEnumerator_get_Current_m1C5D49106C29FB259E2FD09172D9BFDD1A2544F1 (U3CGenSnapshotU3Ed__4_t4B5784FDB861343907AB4DD9FD48DC33D7117F0A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Facebook.Unity.FB/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_m9868E3A151872B825B43C1E81BBCCAECAA7B9EE3 (U3CU3Ec__DisplayClass36_0_t96F783DEAEE6492B06A555EFD436C664B3208E3A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.FB/<>c__DisplayClass36_0::<Init>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CInitU3Eb__0_m51208A51970499F86695186E3FDC49E5C0E9D90A (U3CU3Ec__DisplayClass36_0_t96F783DEAEE6492B06A555EFD436C664B3208E3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditorFacebook_t4CE9311FD5798AFD943D6482B226B6439312CBDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_StaticFields*)il2cpp_codegen_static_fields_for(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var))->get_facebook_5();
		InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D * L_1 = __this->get_onInitComplete_0();
		NullCheck(((EditorFacebook_t4CE9311FD5798AFD943D6482B226B6439312CBDF *)CastclassClass((RuntimeObject*)L_0, EditorFacebook_t4CE9311FD5798AFD943D6482B226B6439312CBDF_il2cpp_TypeInfo_var)));
		VirtActionInvoker1< InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D * >::Invoke(33 /* System.Void Facebook.Unity.FacebookBase::Init(Facebook.Unity.InitDelegate) */, ((EditorFacebook_t4CE9311FD5798AFD943D6482B226B6439312CBDF *)CastclassClass((RuntimeObject*)L_0, EditorFacebook_t4CE9311FD5798AFD943D6482B226B6439312CBDF_il2cpp_TypeInfo_var)), L_1);
		return;
	}
}
// System.Void Facebook.Unity.FB/<>c__DisplayClass36_0::<Init>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CInitU3Eb__1_m9AE34788B1E6FEC584802FF3B278FAE40802C9F7 (U3CU3Ec__DisplayClass36_0_t96F783DEAEE6492B06A555EFD436C664B3208E3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasFacebook_tAA30DBE4032D110838045C7410570F9DB39C8637_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacebookSettings_tAC373F51E9F99E33E69D709A9D7517656A4784CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_StaticFields*)il2cpp_codegen_static_fields_for(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var))->get_facebook_5();
		String_t* L_1 = __this->get_appId_1();
		bool L_2 = __this->get_cookie_2();
		bool L_3 = __this->get_logging_3();
		bool L_4 = __this->get_status_4();
		bool L_5 = __this->get_xfbml_5();
		IL2CPP_RUNTIME_CLASS_INIT(FacebookSettings_tAC373F51E9F99E33E69D709A9D7517656A4784CB_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = FacebookSettings_get_ChannelUrl_m9D532E0A38B50713E40C374A92321C5011EB6151(/*hidden argument*/NULL);
		String_t* L_7 = __this->get_authResponse_6();
		bool L_8 = __this->get_frictionlessRequests_7();
		String_t* L_9 = __this->get_javascriptSDKLocale_8();
		bool L_10;
		L_10 = Constants_get_DebugMode_m7FF9B9742CEE07834BB815480027734850269741(/*hidden argument*/NULL);
		HideUnityDelegate_t20FD43E26003761ABD29BE7379356065AAB4334F * L_11 = __this->get_onHideUnity_9();
		InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D * L_12 = __this->get_onInitComplete_0();
		NullCheck(((CanvasFacebook_tAA30DBE4032D110838045C7410570F9DB39C8637 *)CastclassSealed((RuntimeObject*)L_0, CanvasFacebook_tAA30DBE4032D110838045C7410570F9DB39C8637_il2cpp_TypeInfo_var)));
		CanvasFacebook_Init_mBFA3BFE731CFE867C0681AC229096410DCB1C121(((CanvasFacebook_tAA30DBE4032D110838045C7410570F9DB39C8637 *)CastclassSealed((RuntimeObject*)L_0, CanvasFacebook_tAA30DBE4032D110838045C7410570F9DB39C8637_il2cpp_TypeInfo_var)), L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.FB/<>c__DisplayClass36_0::<Init>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CInitU3Eb__2_m7FD8806879F31358BE2F0E7E9967CE6FDB7C676F (U3CU3Ec__DisplayClass36_0_t96F783DEAEE6492B06A555EFD436C664B3208E3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacebookSettings_tAC373F51E9F99E33E69D709A9D7517656A4784CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSFacebook_t37653B5398AACEE2A4D3688D563788544E513307_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_StaticFields*)il2cpp_codegen_static_fields_for(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var))->get_facebook_5();
		String_t* L_1 = __this->get_appId_1();
		bool L_2 = __this->get_frictionlessRequests_7();
		IL2CPP_RUNTIME_CLASS_INIT(FacebookSettings_tAC373F51E9F99E33E69D709A9D7517656A4784CB_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = FacebookSettings_get_IosURLSuffix_m0A824600D6D91041CC1F34DA4D01B3062FFB194D(/*hidden argument*/NULL);
		HideUnityDelegate_t20FD43E26003761ABD29BE7379356065AAB4334F * L_4 = __this->get_onHideUnity_9();
		InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D * L_5 = __this->get_onInitComplete_0();
		NullCheck(((IOSFacebook_t37653B5398AACEE2A4D3688D563788544E513307 *)CastclassClass((RuntimeObject*)L_0, IOSFacebook_t37653B5398AACEE2A4D3688D563788544E513307_il2cpp_TypeInfo_var)));
		IOSFacebook_Init_m6C2AD52F11A7D429B742F5E9E1ED5E6A1BC58002(((IOSFacebook_t37653B5398AACEE2A4D3688D563788544E513307 *)CastclassClass((RuntimeObject*)L_0, IOSFacebook_t37653B5398AACEE2A4D3688D563788544E513307_il2cpp_TypeInfo_var)), L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.FB/<>c__DisplayClass36_0::<Init>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CInitU3Eb__3_mA0E76DED84BB70CC406BA3F8F7FBED7ADCE923D2 (U3CU3Ec__DisplayClass36_0_t96F783DEAEE6492B06A555EFD436C664B3208E3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidFacebook_t60B3A6C3AC97799AEF427D3C4413AF27290A9E1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_StaticFields*)il2cpp_codegen_static_fields_for(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var))->get_facebook_5();
		String_t* L_1 = __this->get_appId_1();
		HideUnityDelegate_t20FD43E26003761ABD29BE7379356065AAB4334F * L_2 = __this->get_onHideUnity_9();
		InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D * L_3 = __this->get_onInitComplete_0();
		NullCheck(((AndroidFacebook_t60B3A6C3AC97799AEF427D3C4413AF27290A9E1E *)CastclassSealed((RuntimeObject*)L_0, AndroidFacebook_t60B3A6C3AC97799AEF427D3C4413AF27290A9E1E_il2cpp_TypeInfo_var)));
		AndroidFacebook_Init_m3507198C70BCEAD339A8912090784090DDBCE179(((AndroidFacebook_t60B3A6C3AC97799AEF427D3C4413AF27290A9E1E *)CastclassSealed((RuntimeObject*)L_0, AndroidFacebook_t60B3A6C3AC97799AEF427D3C4413AF27290A9E1E_il2cpp_TypeInfo_var)), L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.FB/<>c__DisplayClass36_0::<Init>b__4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CInitU3Eb__4_mF611DC1AEFD8B953DF2B6A0AB810B334119D3007 (U3CU3Ec__DisplayClass36_0_t96F783DEAEE6492B06A555EFD436C664B3208E3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameroomFacebook_t5F063C3632F0F61E7EAB6B5E594C21F46D669F20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_StaticFields*)il2cpp_codegen_static_fields_for(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var))->get_facebook_5();
		String_t* L_1 = __this->get_appId_1();
		HideUnityDelegate_t20FD43E26003761ABD29BE7379356065AAB4334F * L_2 = __this->get_onHideUnity_9();
		InitDelegate_t0F9F45F20ADC5B15AE5FA7CD1D50D5716F963E3D * L_3 = __this->get_onInitComplete_0();
		NullCheck(((GameroomFacebook_t5F063C3632F0F61E7EAB6B5E594C21F46D669F20 *)CastclassSealed((RuntimeObject*)L_0, GameroomFacebook_t5F063C3632F0F61E7EAB6B5E594C21F46D669F20_il2cpp_TypeInfo_var)));
		GameroomFacebook_Init_m9AC7EEF3225D0CEB762B86C844FE331BC576F273(((GameroomFacebook_t5F063C3632F0F61E7EAB6B5E594C21F46D669F20 *)CastclassSealed((RuntimeObject*)L_0, GameroomFacebook_t5F063C3632F0F61E7EAB6B5E594C21F46D669F20_il2cpp_TypeInfo_var)), L_1, L_2, L_3, /*hidden argument*/NULL);
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
// Facebook.Unity.IPayFacebook Facebook.Unity.FB/Canvas::get_FacebookPayImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Canvas_get_FacebookPayImpl_m8598573BC92C2F84A99E4F21CA4CB1D6EE4A7107 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPayFacebook_tF1D22BCC25D4E5D84D956862277B986414A2AC5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = FB_get_FacebookImpl_mE48131DC8F34E2C9D2EEF145B79DA15E5677EE1A(/*hidden argument*/NULL);
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IPayFacebook_tF1D22BCC25D4E5D84D956862277B986414A2AC5C_il2cpp_TypeInfo_var));
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9C633E7C674E23EA753146B1D433678CB78C44D6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Canvas_get_FacebookPayImpl_m8598573BC92C2F84A99E4F21CA4CB1D6EE4A7107_RuntimeMethod_var)));
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void Facebook.Unity.FB/Canvas::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_Pay_mDA84B1AD86A8144ED76C2F58188265BE82A96E6A (String_t* ___product0, String_t* ___action1, int32_t ___quantity2, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___quantityMin3, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___quantityMax4, String_t* ___requestId5, String_t* ___pricepointId6, String_t* ___testCurrency7, FacebookDelegate_1_t6279CFE16F644D3D23CB58078ED3D07E6AFBEDE9 * ___callback8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPayFacebook_tF1D22BCC25D4E5D84D956862277B986414A2AC5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Canvas_get_FacebookPayImpl_m8598573BC92C2F84A99E4F21CA4CB1D6EE4A7107(/*hidden argument*/NULL);
		String_t* L_1 = ___product0;
		String_t* L_2 = ___action1;
		int32_t L_3 = ___quantity2;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_4 = ___quantityMin3;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_5 = ___quantityMax4;
		String_t* L_6 = ___requestId5;
		String_t* L_7 = ___pricepointId6;
		String_t* L_8 = ___testCurrency7;
		FacebookDelegate_1_t6279CFE16F644D3D23CB58078ED3D07E6AFBEDE9 * L_9 = ___callback8;
		NullCheck(L_0);
		InterfaceActionInvoker9< String_t*, String_t*, int32_t, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 , Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 , String_t*, String_t*, String_t*, FacebookDelegate_1_t6279CFE16F644D3D23CB58078ED3D07E6AFBEDE9 * >::Invoke(0 /* System.Void Facebook.Unity.IPayFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>) */, IPayFacebook_tF1D22BCC25D4E5D84D956862277B986414A2AC5C_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9);
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
// System.Void Facebook.Unity.FB/CompiledFacebookLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompiledFacebookLoader_Start_mE8A7F53EB3A33330888438845942E59D7F51C477 (CompiledFacebookLoader_t1EE238D974A0BED1DA0BC94C1847155659DDB349 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FacebookGameObject_t6FC4F88C6F002C8663BD2429B8E090A960E341BA * L_0;
		L_0 = VirtFuncInvoker0< FacebookGameObject_t6FC4F88C6F002C8663BD2429B8E090A960E341BA * >::Invoke(4 /* Facebook.Unity.FacebookGameObject Facebook.Unity.FB/CompiledFacebookLoader::get_FBGameObject() */, __this);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FacebookGameObject_get_Facebook_m9E679BFB8543D49BDADC13DF674122699C72FA23_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		((FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_StaticFields*)il2cpp_codegen_static_fields_for(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var))->set_facebook_5(L_1);
		OnDLLLoaded_tF6931D34771F7C57F71E731BFE7B86676BCA26FC * L_2;
		L_2 = FB_get_OnDLLLoadedDelegate_m0BDFE1904A457997439BBDFD9016A11380CBA041_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		OnDLLLoaded_Invoke_mA9CFCB63DE8B051CA17C030B66655241DC2910E3(L_2, /*hidden argument*/NULL);
		FB_LogVersion_mAC4FEF235FDE71E78F8BB3B589C3DE665F2254D7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.FB/CompiledFacebookLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompiledFacebookLoader__ctor_m50C114699CBDBEF374EDCD387303C41B7F667DA9 (CompiledFacebookLoader_t1EE238D974A0BED1DA0BC94C1847155659DDB349 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Facebook.Unity.FB/Mobile::set_ShareDialogMode(Facebook.Unity.ShareDialogMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_set_ShareDialogMode_mA13EC254FEB5D5F6BE0F8F63E786C72B2507C6DE (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileFacebook_t962A52DB163C36DE5F9B1B08B422A3FDC964E1A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Mobile_get_MobileFacebookImpl_m4ABCFB81CEDB44023E871E65BF4F8A4CD097987A(/*hidden argument*/NULL);
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void Facebook.Unity.Mobile.IMobileFacebook::set_ShareDialogMode(Facebook.Unity.ShareDialogMode) */, IMobileFacebook_t962A52DB163C36DE5F9B1B08B422A3FDC964E1A2_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// Facebook.Unity.Mobile.IMobileFacebook Facebook.Unity.FB/Mobile::get_MobileFacebookImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mobile_get_MobileFacebookImpl_m4ABCFB81CEDB44023E871E65BF4F8A4CD097987A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileFacebook_t962A52DB163C36DE5F9B1B08B422A3FDC964E1A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = FB_get_FacebookImpl_mE48131DC8F34E2C9D2EEF145B79DA15E5677EE1A(/*hidden argument*/NULL);
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IMobileFacebook_t962A52DB163C36DE5F9B1B08B422A3FDC964E1A2_il2cpp_TypeInfo_var));
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral783DB8EDE0D1EDC2174AC1931718AC55B6E28426)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Mobile_get_MobileFacebookImpl_m4ABCFB81CEDB44023E871E65BF4F8A4CD097987A_RuntimeMethod_var)));
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void Facebook.Unity.FB/Mobile::LoginWithTrackingPreference(Facebook.Unity.LoginTracking,System.Collections.Generic.IEnumerable`1<System.String>,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_LoginWithTrackingPreference_m6569E1789A922A71859DF35ED8C07C4B6066F881 (int32_t ___loginTracking0, RuntimeObject* ___permissions1, String_t* ___nonce2, FacebookDelegate_1_tBF767821D6227C2B047C48CC1B33AC20C07FFB55 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileFacebook_t962A52DB163C36DE5F9B1B08B422A3FDC964E1A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0FFE255F631035C3E8FE88B4BA4AE40910A8DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___loginTracking0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = Mobile_get_MobileFacebookImpl_m4ABCFB81CEDB44023E871E65BF4F8A4CD097987A(/*hidden argument*/NULL);
		RuntimeObject* L_2 = ___permissions1;
		String_t* L_3 = ___nonce2;
		FacebookDelegate_1_tBF767821D6227C2B047C48CC1B33AC20C07FFB55 * L_4 = ___callback3;
		NullCheck(L_1);
		InterfaceActionInvoker4< String_t*, RuntimeObject*, String_t*, FacebookDelegate_1_tBF767821D6227C2B047C48CC1B33AC20C07FFB55 * >::Invoke(1 /* System.Void Facebook.Unity.Mobile.IMobileFacebook::LoginWithTrackingPreference(System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>) */, IMobileFacebook_t962A52DB163C36DE5F9B1B08B422A3FDC964E1A2_il2cpp_TypeInfo_var, L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, L_2, L_3, L_4);
		return;
	}

IL_0016:
	{
		RuntimeObject* L_5;
		L_5 = Mobile_get_MobileFacebookImpl_m4ABCFB81CEDB44023E871E65BF4F8A4CD097987A(/*hidden argument*/NULL);
		RuntimeObject* L_6 = ___permissions1;
		String_t* L_7 = ___nonce2;
		FacebookDelegate_1_tBF767821D6227C2B047C48CC1B33AC20C07FFB55 * L_8 = ___callback3;
		NullCheck(L_5);
		InterfaceActionInvoker4< String_t*, RuntimeObject*, String_t*, FacebookDelegate_1_tBF767821D6227C2B047C48CC1B33AC20C07FFB55 * >::Invoke(1 /* System.Void Facebook.Unity.Mobile.IMobileFacebook::LoginWithTrackingPreference(System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>) */, IMobileFacebook_t962A52DB163C36DE5F9B1B08B422A3FDC964E1A2_il2cpp_TypeInfo_var, L_5, _stringLiteralD0FFE255F631035C3E8FE88B4BA4AE40910A8DE5, L_6, L_7, L_8);
		return;
	}
}
// Facebook.Unity.Profile Facebook.Unity.FB/Mobile::CurrentProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Profile_tCC112B8E256DCA324D698BB44B95C3F614B36DA8 * Mobile_CurrentProfile_m5F522140CC9AEB58670BFF514FAE1119D5DEB40C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileFacebook_t962A52DB163C36DE5F9B1B08B422A3FDC964E1A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Mobile_get_MobileFacebookImpl_m4ABCFB81CEDB44023E871E65BF4F8A4CD097987A(/*hidden argument*/NULL);
		NullCheck(L_0);
		Profile_tCC112B8E256DCA324D698BB44B95C3F614B36DA8 * L_1;
		L_1 = InterfaceFuncInvoker0< Profile_tCC112B8E256DCA324D698BB44B95C3F614B36DA8 * >::Invoke(26 /* Facebook.Unity.Profile Facebook.Unity.Mobile.IMobileFacebook::CurrentProfile() */, IMobileFacebook_t962A52DB163C36DE5F9B1B08B422A3FDC964E1A2_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Facebook.Unity.FB/Mobile::FetchDeferredAppLinkData(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_FetchDeferredAppLinkData_mA1992F4C5A794D7044F4169D68AABFDDC462A073 (FacebookDelegate_1_t7F874B0ABF0EA33627106C3B0E881E2DED8AD362 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileFacebook_t962A52DB163C36DE5F9B1B08B422A3FDC964E1A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FacebookDelegate_1_t7F874B0ABF0EA33627106C3B0E881E2DED8AD362 * L_0 = ___callback0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		RuntimeObject* L_1;
		L_1 = Mobile_get_MobileFacebookImpl_m4ABCFB81CEDB44023E871E65BF4F8A4CD097987A(/*hidden argument*/NULL);
		FacebookDelegate_1_t7F874B0ABF0EA33627106C3B0E881E2DED8AD362 * L_2 = ___callback0;
		NullCheck(L_1);
		InterfaceActionInvoker1< FacebookDelegate_1_t7F874B0ABF0EA33627106C3B0E881E2DED8AD362 * >::Invoke(2 /* System.Void Facebook.Unity.Mobile.IMobileFacebook::FetchDeferredAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>) */, IMobileFacebook_t962A52DB163C36DE5F9B1B08B422A3FDC964E1A2_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void Facebook.Unity.FB/Mobile::RefreshCurrentAccessToken(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_RefreshCurrentAccessToken_m73475325C87B2F4269ADAD5F10055E8D98451D46 (FacebookDelegate_1_t19DCD0CB7469670B22F77F21012DC78320E30269 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileFacebook_t962A52DB163C36DE5F9B1B08B422A3FDC964E1A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Mobile_get_MobileFacebookImpl_m4ABCFB81CEDB44023E871E65BF4F8A4CD097987A(/*hidden argument*/NULL);
		FacebookDelegate_1_t19DCD0CB7469670B22F77F21012DC78320E30269 * L_1 = ___callback0;
		NullCheck(L_0);
		InterfaceActionInvoker1< FacebookDelegate_1_t19DCD0CB7469670B22F77F21012DC78320E30269 * >::Invoke(3 /* System.Void Facebook.Unity.Mobile.IMobileFacebook::RefreshCurrentAccessToken(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>) */, IMobileFacebook_t962A52DB163C36DE5F9B1B08B422A3FDC964E1A2_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Boolean Facebook.Unity.FB/Mobile::IsImplicitPurchaseLoggingEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_IsImplicitPurchaseLoggingEnabled_m10E5FE0170D341C76DA3D79342B843F20F1621C4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileFacebook_t962A52DB163C36DE5F9B1B08B422A3FDC964E1A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Mobile_get_MobileFacebookImpl_m4ABCFB81CEDB44023E871E65BF4F8A4CD097987A(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Facebook.Unity.Mobile.IMobileFacebook::IsImplicitPurchaseLoggingEnabled() */, IMobileFacebook_t962A52DB163C36DE5F9B1B08B422A3FDC964E1A2_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnDLLLoaded_tF6931D34771F7C57F71E731BFE7B86676BCA26FC (OnDLLLoaded_tF6931D34771F7C57F71E731BFE7B86676BCA26FC * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Facebook.Unity.FB/OnDLLLoaded::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDLLLoaded__ctor_m1DFA6301AE3E00D88ADE4A9334267FE1418311CD (OnDLLLoaded_tF6931D34771F7C57F71E731BFE7B86676BCA26FC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Facebook.Unity.FB/OnDLLLoaded::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDLLLoaded_Invoke_mA9CFCB63DE8B051CA17C030B66655241DC2910E3 (OnDLLLoaded_tF6931D34771F7C57F71E731BFE7B86676BCA26FC * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Facebook.Unity.FB/OnDLLLoaded::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnDLLLoaded_BeginInvoke_mD0EDD9DC4A9CE5547387796910515C14087A9CB8 (OnDLLLoaded_tF6931D34771F7C57F71E731BFE7B86676BCA26FC * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Facebook.Unity.FB/OnDLLLoaded::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDLLLoaded_EndInvoke_mB127E9BB4FB33B40DA430B6F5498F81D8013F96C (OnDLLLoaded_tF6931D34771F7C57F71E731BFE7B86676BCA26FC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Facebook.Unity.FacebookBase/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1E63FEC5F507C286A5722B939F9D6B1E67A0BDB4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t53E3994EE79BD19A2AEE97604EDBCD10CE5C858C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t53E3994EE79BD19A2AEE97604EDBCD10CE5C858C * L_0 = (U3CU3Ec_t53E3994EE79BD19A2AEE97604EDBCD10CE5C858C *)il2cpp_codegen_object_new(U3CU3Ec_t53E3994EE79BD19A2AEE97604EDBCD10CE5C858C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mEF509BC80C756336A6343B05EF61DF63D17F1B7E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t53E3994EE79BD19A2AEE97604EDBCD10CE5C858C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t53E3994EE79BD19A2AEE97604EDBCD10CE5C858C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Facebook.Unity.FacebookBase/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEF509BC80C756336A6343B05EF61DF63D17F1B7E (U3CU3Ec_t53E3994EE79BD19A2AEE97604EDBCD10CE5C858C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Facebook.Unity.FacebookBase/<>c::<ValidateAppRequestArgs>b__41_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CValidateAppRequestArgsU3Eb__41_0_m1C3A3A64926C40949AF6448BC57C39B8C8974D35 (U3CU3Ec_t53E3994EE79BD19A2AEE97604EDBCD10CE5C858C * __this, String_t* ___toWhom0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___toWhom0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Facebook.Unity.FacebookLogger/DebugLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger__ctor_mE90A30005839AD9D89696F767CC9D23869BB99AC (DebugLogger_t580F68C2BC119A2580DCFEE27B8C52BDC1D80D36 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.FacebookLogger/DebugLogger::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_Log_m1CF7CB8D5B20C93FC3A2A1539FFC9806A29EB9CC (DebugLogger_t580F68C2BC119A2580DCFEE27B8C52BDC1D80D36 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Void Facebook.Unity.FacebookLogger/DebugLogger::Info(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_Info_mFC51A3371745CD2E01544C4259EF2EEE848294A4 (DebugLogger_t580F68C2BC119A2580DCFEE27B8C52BDC1D80D36 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.FacebookLogger/DebugLogger::Warn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_Warn_mE10705DD1AC67D035E20E9EC97D01224C66BF7FD (DebugLogger_t580F68C2BC119A2580DCFEE27B8C52BDC1D80D36 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_0, /*hidden argument*/NULL);
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
// System.Void Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayEventU3Ed__1__ctor_m7E8BAE5B8FE3FB519FA492AF9A433227E3E3ED65 (U3CDelayEventU3Ed__1_t5B41FBF2618D632C0B0B1A8DC4C662ECFEA5241F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayEventU3Ed__1_System_IDisposable_Dispose_m582E3D033BFC4A67AA795E4A5F80D6FA18E630FA (U3CDelayEventU3Ed__1_t5B41FBF2618D632C0B0B1A8DC4C662ECFEA5241F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayEventU3Ed__1_MoveNext_mA6ABDC9F7A8AB90A86B771E5B4DCA8C42582E66F (U3CDelayEventU3Ed__1_t5B41FBF2618D632C0B0B1A8DC4C662ECFEA5241F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		int64_t L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, ((float)((float)L_3)), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = __this->get_action_3();
		NullCheck(L_5);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayEventU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m01BFAA1CFF51814C47D06DFFB30AD833D05B3D06 (U3CDelayEventU3Ed__1_t5B41FBF2618D632C0B0B1A8DC4C662ECFEA5241F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayEventU3Ed__1_System_Collections_IEnumerator_Reset_m66BAF46423AA07B0D2D5FDB768D863A6803814BF (U3CDelayEventU3Ed__1_t5B41FBF2618D632C0B0B1A8DC4C662ECFEA5241F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayEventU3Ed__1_System_Collections_IEnumerator_Reset_m66BAF46423AA07B0D2D5FDB768D863A6803814BF_RuntimeMethod_var)));
	}
}
// System.Object Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayEventU3Ed__1_System_Collections_IEnumerator_get_Current_m531A40A92BE9B0BDCA63549DAA9A7B32AB4D4F19 (U3CDelayEventU3Ed__1_t5B41FBF2618D632C0B0B1A8DC4C662ECFEA5241F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Facebook.Unity.Gameroom.GameroomFacebook/OnComplete::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnComplete__ctor_m601A86CF9A6345E220EE920F9816A636129CA170 (OnComplete_tDE1F16FBF428F5A978FDDBF43106E8B6465EC241 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Facebook.Unity.Gameroom.GameroomFacebook/OnComplete::Invoke(Facebook.Unity.ResultContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnComplete_Invoke_m20B4D4BF1146A1C9EAB866211A38589C2F623FAF (OnComplete_tDE1F16FBF428F5A978FDDBF43106E8B6465EC241 * __this, ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * ___resultContainer0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___resultContainer0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___resultContainer0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___resultContainer0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___resultContainer0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___resultContainer0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___resultContainer0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___resultContainer0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * >::Invoke(targetMethod, targetThis, ___resultContainer0);
					else
						GenericVirtActionInvoker1< ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * >::Invoke(targetMethod, targetThis, ___resultContainer0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___resultContainer0);
					else
						VirtActionInvoker1< ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___resultContainer0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___resultContainer0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___resultContainer0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Facebook.Unity.Gameroom.GameroomFacebook/OnComplete::BeginInvoke(Facebook.Unity.ResultContainer,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnComplete_BeginInvoke_m6698B54BBB11D3C9C04CE08A6714F735C9805EC1 (OnComplete_tDE1F16FBF428F5A978FDDBF43106E8B6465EC241 * __this, ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * ___resultContainer0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___resultContainer0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Facebook.Unity.Gameroom.GameroomFacebook/OnComplete::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnComplete_EndInvoke_m8D3326A9BB87F10DE5878290E3A716865DCD5D33 (OnComplete_tDE1F16FBF428F5A978FDDBF43106E8B6465EC241 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForPipeResponseU3Ed__4__ctor_mF54C4251B87EC77B50AD7DCB41FC36DDA8F099FD (U3CWaitForPipeResponseU3Ed__4_t4A416F461521640A7202078016C783C772C785FF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForPipeResponseU3Ed__4_System_IDisposable_Dispose_m4AF8A0B872900A5B678E5818B59AC8EAF257B63B (U3CWaitForPipeResponseU3Ed__4_t4A416F461521640A7202078016C783C772C785FF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForPipeResponseU3Ed__4_MoveNext_mBD034251934C2F004CFA28C2F712A7E0A9BD57FF (U3CWaitForPipeResponseU3Ed__4_t4A416F461521640A7202078016C783C772C785FF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameroomFacebookImplementation_t70B030DF075F9711EFB68B801A2E93BD5788F204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameroomFacebookGameObject_t5A562D965FCCF7838C82251F00C524F3CFAD51D0 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameroomFacebookGameObject_t5A562D965FCCF7838C82251F00C524F3CFAD51D0 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0037;
	}

IL_0020:
	{
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0037:
	{
		GameroomFacebookGameObject_t5A562D965FCCF7838C82251F00C524F3CFAD51D0 * L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = GameroomFacebookGameObject_get_GameroomFacebookImpl_m7803E11B2D72780F34246F51C5362FAE8ED15250(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Facebook.Unity.Gameroom.IGameroomFacebookImplementation::HaveReceivedPipeResponse() */, IGameroomFacebookImplementation_t70B030DF075F9711EFB68B801A2E93BD5788F204_il2cpp_TypeInfo_var, L_5);
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		OnComplete_tDE1F16FBF428F5A978FDDBF43106E8B6465EC241 * L_7 = __this->get_onCompleteDelegate_3();
		GameroomFacebookGameObject_t5A562D965FCCF7838C82251F00C524F3CFAD51D0 * L_8 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = GameroomFacebookGameObject_get_GameroomFacebookImpl_m7803E11B2D72780F34246F51C5362FAE8ED15250(L_8, /*hidden argument*/NULL);
		String_t* L_10 = __this->get_callbackId_4();
		NullCheck(L_9);
		String_t* L_11;
		L_11 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(1 /* System.String Facebook.Unity.Gameroom.IGameroomFacebookImplementation::GetPipeResponse(System.String) */, IGameroomFacebookImplementation_t70B030DF075F9711EFB68B801A2E93BD5788F204_il2cpp_TypeInfo_var, L_9, L_10);
		ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * L_12 = (ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 *)il2cpp_codegen_object_new(ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5_il2cpp_TypeInfo_var);
		ResultContainer__ctor_mE3B0AB9F29D77AE595CCB4AEE626B6B0D64D316B(L_12, L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		OnComplete_Invoke_m20B4D4BF1146A1C9EAB866211A38589C2F623FAF(L_7, L_12, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForPipeResponseU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCCBE89036FF0C8E892206F68CD941475FFC23358 (U3CWaitForPipeResponseU3Ed__4_t4A416F461521640A7202078016C783C772C785FF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForPipeResponseU3Ed__4_System_Collections_IEnumerator_Reset_mA5E7F4E34F9BEEF8C32E3AF93E7AE8D525411B6A (U3CWaitForPipeResponseU3Ed__4_t4A416F461521640A7202078016C783C772C785FF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForPipeResponseU3Ed__4_System_Collections_IEnumerator_Reset_mA5E7F4E34F9BEEF8C32E3AF93E7AE8D525411B6A_RuntimeMethod_var)));
	}
}
// System.Object Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForPipeResponseU3Ed__4_System_Collections_IEnumerator_get_Current_m70A3C19DCF9B154501A93B96945AB537A3604EC9 (U3CWaitForPipeResponseU3Ed__4_t4A416F461521640A7202078016C783C772C785FF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDict__ctor_mDAC5EDF616D587A5FF0878D6A58D5001F8F6804E (NativeDict_t7F0F20CA44B5C90D5076D1EB289255DDEA8F42AF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		NativeDict_set_NumEntries_m903864AFD0C84100F452FD86EAD90D8914E1AF00_inline(__this, 0, /*hidden argument*/NULL);
		NativeDict_set_Keys_m76188FB7DD583FF0DA33F34BEE833E2D0B00BF38_inline(__this, (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL, /*hidden argument*/NULL);
		NativeDict_set_Values_m654E161C3EA517FC486B1CA9D4C709456BE0396B_inline(__this, (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::get_NumEntries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeDict_get_NumEntries_m179F3273402F014A00BC50E09A236F4A91315DF5 (NativeDict_t7F0F20CA44B5C90D5076D1EB289255DDEA8F42AF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CNumEntriesU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::set_NumEntries(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDict_set_NumEntries_m903864AFD0C84100F452FD86EAD90D8914E1AF00 (NativeDict_t7F0F20CA44B5C90D5076D1EB289255DDEA8F42AF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CNumEntriesU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String[] Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* NativeDict_get_Keys_m1B098F6779BB159E5FCFB509558A665FD215BC41 (NativeDict_t7F0F20CA44B5C90D5076D1EB289255DDEA8F42AF * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_U3CKeysU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::set_Keys(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDict_set_Keys_m76188FB7DD583FF0DA33F34BEE833E2D0B00BF38 (NativeDict_t7F0F20CA44B5C90D5076D1EB289255DDEA8F42AF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_U3CKeysU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String[] Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* NativeDict_get_Values_mB29E9970DBC2B78145C4576163523FF8726C42D5 (NativeDict_t7F0F20CA44B5C90D5076D1EB289255DDEA8F42AF * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_U3CValuesU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::set_Values(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDict_set_Values_m654E161C3EA517FC486B1CA9D4C709456BE0396B (NativeDict_t7F0F20CA44B5C90D5076D1EB289255DDEA8F42AF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_U3CValuesU3Ek__BackingField_2(L_0);
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
// System.Void Facebook.MiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m6EC5E7DC4071D6D529AE6BD432745CE9A24B3B85 (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___jsonString0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = (StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)il2cpp_codegen_object_new(StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE(L_1, L_0, /*hidden argument*/NULL);
		__this->set_json_0(L_1);
		return;
	}
}
// System.Char Facebook.MiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m46DEF96465982F82538D7C62E90B9955C06A4C73 (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char Facebook.MiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m5CE8CA5369F250161B1931DE7C9D9F11AC536B63 (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Facebook.MiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m63B8EE9D434E66CB17B4990B94BAD857E4001EED (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF468E0BCDE9855E7830073A32AF7323CC7E46952);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0023;
	}

IL_0008:
	{
		StringBuilder_t * L_1 = V_0;
		Il2CppChar L_2;
		L_2 = Parser_get_NextChar_m5CE8CA5369F250161B1931DE7C9D9F11AC536B63(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_3;
		L_3 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_1, L_2, /*hidden argument*/NULL);
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_4 = __this->get_json_0();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_4);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0036;
		}
	}

IL_0023:
	{
		Il2CppChar L_6;
		L_6 = Parser_get_PeekChar_m46DEF96465982F82538D7C62E90B9955C06A4C73(__this, /*hidden argument*/NULL);
		NullCheck(_stringLiteralF468E0BCDE9855E7830073A32AF7323CC7E46952);
		int32_t L_7;
		L_7 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteralF468E0BCDE9855E7830073A32AF7323CC7E46952, L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0008;
		}
	}

IL_0036:
	{
		StringBuilder_t * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// Facebook.MiniJSON.Json/Parser/TOKEN Facebook.MiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m25D2DE90D96C86C189F543992B03AFE17DF8E641 (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		Parser_EatWhitespace_m861ABFEF6AB4E50E792A8C482785A92651921CB7(__this, /*hidden argument*/NULL);
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0016:
	{
		Il2CppChar L_2;
		L_2 = Parser_get_PeekChar_m46DEF96465982F82538D7C62E90B9955C06A4C73(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00db;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_00db;
			}
			case 5:
			{
				goto IL_00db;
			}
			case 6:
			{
				goto IL_00db;
			}
			case 7:
			{
				goto IL_00db;
			}
			case 8:
			{
				goto IL_00db;
			}
			case 9:
			{
				goto IL_00db;
			}
			case 10:
			{
				goto IL_00c7;
			}
			case 11:
			{
				goto IL_00d9;
			}
			case 12:
			{
				goto IL_00db;
			}
			case 13:
			{
				goto IL_00db;
			}
			case 14:
			{
				goto IL_00d9;
			}
			case 15:
			{
				goto IL_00d9;
			}
			case 16:
			{
				goto IL_00d9;
			}
			case 17:
			{
				goto IL_00d9;
			}
			case 18:
			{
				goto IL_00d9;
			}
			case 19:
			{
				goto IL_00d9;
			}
			case 20:
			{
				goto IL_00d9;
			}
			case 21:
			{
				goto IL_00d9;
			}
			case 22:
			{
				goto IL_00d9;
			}
			case 23:
			{
				goto IL_00d9;
			}
			case 24:
			{
				goto IL_00d7;
			}
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b9;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)123))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00db;
	}

IL_00a7:
	{
		return (int32_t)(1);
	}

IL_00a9:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_9 = __this->get_json_0();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		return (int32_t)(2);
	}

IL_00b7:
	{
		return (int32_t)(3);
	}

IL_00b9:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_11 = __this->get_json_0();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		return (int32_t)(4);
	}

IL_00c7:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_13 = __this->get_json_0();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_13);
		return (int32_t)(6);
	}

IL_00d5:
	{
		return (int32_t)(7);
	}

IL_00d7:
	{
		return (int32_t)(5);
	}

IL_00d9:
	{
		return (int32_t)(8);
	}

IL_00db:
	{
		String_t* L_15;
		L_15 = Parser_get_NextWord_m63B8EE9D434E66CB17B4990B94BAD857E4001EED(__this, /*hidden argument*/NULL);
		V_1 = L_15;
		String_t* L_16 = V_1;
		if (!L_16)
		{
			goto IL_0117;
		}
	}
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_17, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_19, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0111;
		}
	}
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_21, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0117;
	}

IL_010e:
	{
		return (int32_t)(((int32_t)10));
	}

IL_0111:
	{
		return (int32_t)(((int32_t)9));
	}

IL_0114:
	{
		return (int32_t)(((int32_t)11));
	}

IL_0117:
	{
		return (int32_t)(0);
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_mB718C01DADC6860ADF3FD01569D398D6236C4C02 (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		String_t* L_0 = ___jsonString0;
		Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * L_1 = (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 *)il2cpp_codegen_object_new(Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5_il2cpp_TypeInfo_var);
		Parser__ctor_m6EC5E7DC4071D6D529AE6BD432745CE9A24B3B85(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = Parser_ParseValue_mEFB0D7E1456840A899B0B36D0EAF4174EE2AC982(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x1A, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		{
			Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0019;
			}
		}

IL_0013:
		{
			Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_5);
		}

IL_0019:
		{
			IL2CPP_END_FINALLY(16)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void Facebook.MiniJSON.Json/Parser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_mD21AE211063D550EE7A06B44330EEABD4828F609 (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method)
{
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8(L_0, /*hidden argument*/NULL);
		__this->set_json_0((StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Facebook.MiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_m174B14151490D41EF70E0E661F0C0F674C3140B1 (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		int32_t L_3;
		L_3 = Parser_get_NextToken_m25D2DE90D96C86C189F543992B03AFE17DF8E641(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0028:
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_7 = V_0;
		return L_7;
	}

IL_002a:
	{
		String_t* L_8;
		L_8 = Parser_ParseString_m0E6E3815D75F483F126F718C352167B8B06CB235(__this, /*hidden argument*/NULL);
		V_1 = L_8;
		String_t* L_9 = V_1;
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0036:
	{
		int32_t L_10;
		L_10 = Parser_get_NextToken_m25D2DE90D96C86C189F543992B03AFE17DF8E641(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)5)))
		{
			goto IL_0041;
		}
	}
	{
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0041:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_11 = __this->get_json_0();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_13 = V_0;
		String_t* L_14 = V_1;
		RuntimeObject * L_15;
		L_15 = Parser_ParseValue_mEFB0D7E1456840A899B0B36D0EAF4174EE2AC982(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> Facebook.MiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_mC4344AF4BF7A1C9DC4A67D9B5E88AAA0404D49EA (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_0, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_1 = (bool)1;
		goto IL_003f;
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = Parser_get_NextToken_m25D2DE90D96C86C189F543992B03AFE17DF8E641(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		return (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)NULL;
	}

IL_002c:
	{
		V_1 = (bool)0;
		goto IL_003f;
	}

IL_0030:
	{
		int32_t L_7 = V_2;
		RuntimeObject * L_8;
		L_8 = Parser_ParseByToken_m3B1884162F02D6B179195C9CC0707AF1E1F8DA48(__this, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_9 = V_0;
		RuntimeObject * L_10 = V_3;
		NullCheck(L_9);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_9, L_10, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
	}

IL_003f:
	{
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0016;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_12 = V_0;
		return L_12;
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_mEFB0D7E1456840A899B0B36D0EAF4174EE2AC982 (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Parser_get_NextToken_m25D2DE90D96C86C189F543992B03AFE17DF8E641(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		RuntimeObject * L_2;
		L_2 = Parser_ParseByToken_m3B1884162F02D6B179195C9CC0707AF1E1F8DA48(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::ParseByToken(Facebook.MiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m3B1884162F02D6B179195C9CC0707AF1E1F8DA48 (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, int32_t ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_0062;
			}
			case 5:
			{
				goto IL_0062;
			}
			case 6:
			{
				goto IL_0036;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0052;
			}
			case 9:
			{
				goto IL_0059;
			}
			case 10:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0036:
	{
		String_t* L_1;
		L_1 = Parser_ParseString_m0E6E3815D75F483F126F718C352167B8B06CB235(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_003d:
	{
		RuntimeObject * L_2;
		L_2 = Parser_ParseNumber_m389E9F7298A97119224FFCA193E913D43BF2393F(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0044:
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3;
		L_3 = Parser_ParseObject_m174B14151490D41EF70E0E661F0C0F674C3140B1(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_004b:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_4;
		L_4 = Parser_ParseArray_mC4344AF4BF7A1C9DC4A67D9B5E88AAA0404D49EA(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_0052:
	{
		bool L_5 = ((bool)1);
		RuntimeObject * L_6 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0059:
	{
		bool L_7 = ((bool)0);
		RuntimeObject * L_8 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_0060:
	{
		return NULL;
	}

IL_0062:
	{
		return NULL;
	}
}
// System.String Facebook.MiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m0E6E3815D75F483F126F718C352167B8B06CB235 (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	StringBuilder_t * V_3 = NULL;
	int32_t V_4 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_2 = (bool)1;
		goto IL_0139;
	}

IL_0019:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_3 = __this->get_json_0();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_013f;
	}

IL_002e:
	{
		Il2CppChar L_5;
		L_5 = Parser_get_NextChar_m5CE8CA5369F250161B1931DE7C9D9F11AC536B63(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppChar L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)92))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0131;
	}

IL_0044:
	{
		V_2 = (bool)0;
		goto IL_0139;
	}

IL_004b:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_8 = __this->get_json_0();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0139;
	}

IL_0060:
	{
		Il2CppChar L_10;
		L_10 = Parser_get_NextChar_m5CE8CA5369F250161B1931DE7C9D9F11AC536B63(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		Il2CppChar L_11 = V_1;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)47))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0139;
	}

IL_0080:
	{
		Il2CppChar L_15 = V_1;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_0094;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)98))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)102))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0139;
	}

IL_0094:
	{
		Il2CppChar L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)110))))
		{
			goto IL_00d6;
		}
	}
	{
		Il2CppChar L_19 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_00e1;
			}
			case 1:
			{
				goto IL_0139;
			}
			case 2:
			{
				goto IL_00ec;
			}
			case 3:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_0139;
	}

IL_00b7:
	{
		StringBuilder_t * L_20 = V_0;
		Il2CppChar L_21 = V_1;
		NullCheck(L_20);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_20, L_21, /*hidden argument*/NULL);
		goto IL_0139;
	}

IL_00c1:
	{
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_23, 8, /*hidden argument*/NULL);
		goto IL_0139;
	}

IL_00cb:
	{
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t * L_26;
		L_26 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_25, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_0139;
	}

IL_00d6:
	{
		StringBuilder_t * L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_t * L_28;
		L_28 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_27, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_0139;
	}

IL_00e1:
	{
		StringBuilder_t * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_t * L_30;
		L_30 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_29, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_0139;
	}

IL_00ec:
	{
		StringBuilder_t * L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_t * L_32;
		L_32 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_31, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_0139;
	}

IL_00f7:
	{
		StringBuilder_t * L_33 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_33, /*hidden argument*/NULL);
		V_3 = L_33;
		V_4 = 0;
		goto IL_0115;
	}

IL_0102:
	{
		StringBuilder_t * L_34 = V_3;
		Il2CppChar L_35;
		L_35 = Parser_get_NextChar_m5CE8CA5369F250161B1931DE7C9D9F11AC536B63(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		StringBuilder_t * L_36;
		L_36 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_34, L_35, /*hidden argument*/NULL);
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_0115:
	{
		int32_t L_38 = V_4;
		if ((((int32_t)L_38) < ((int32_t)4)))
		{
			goto IL_0102;
		}
	}
	{
		StringBuilder_t * L_39 = V_0;
		StringBuilder_t * L_40 = V_3;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_40);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_42;
		L_42 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_41, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_39);
		StringBuilder_t * L_43;
		L_43 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_39, ((int32_t)((uint16_t)L_42)), /*hidden argument*/NULL);
		goto IL_0139;
	}

IL_0131:
	{
		StringBuilder_t * L_44 = V_0;
		Il2CppChar L_45 = V_1;
		NullCheck(L_44);
		StringBuilder_t * L_46;
		L_46 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_44, L_45, /*hidden argument*/NULL);
	}

IL_0139:
	{
		bool L_47 = V_2;
		if (L_47)
		{
			goto IL_0019;
		}
	}

IL_013f:
	{
		StringBuilder_t * L_48 = V_0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		return L_49;
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m389E9F7298A97119224FFCA193E913D43BF2393F (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Json_tE1BF00925B378B16FE51D56A77E44547E84C03DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = Parser_get_NextWord_m63B8EE9D434E66CB17B4990B94BAD857E4001EED(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_tE1BF00925B378B16FE51D56A77E44547E84C03DB_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_4 = ((Json_tE1BF00925B378B16FE51D56A77E44547E84C03DB_StaticFields*)il2cpp_codegen_static_fields_for(Json_tE1BF00925B378B16FE51D56A77E44547E84C03DB_il2cpp_TypeInfo_var))->get_numberFormat_0();
		int64_t L_5;
		L_5 = Int64_Parse_m8DDFA7706B4470D748A591EA89D224D608BD756C(L_3, L_4, /*hidden argument*/NULL);
		int64_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0023:
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_tE1BF00925B378B16FE51D56A77E44547E84C03DB_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_9 = ((Json_tE1BF00925B378B16FE51D56A77E44547E84C03DB_StaticFields*)il2cpp_codegen_static_fields_for(Json_tE1BF00925B378B16FE51D56A77E44547E84C03DB_il2cpp_TypeInfo_var))->get_numberFormat_0();
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = Double_Parse_m281C3FAE601723AC732D26BAFC6D61CEFD2E0F7D(L_8, L_9, /*hidden argument*/NULL);
		double L_11 = L_10;
		RuntimeObject * L_12 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Void Facebook.MiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m861ABFEF6AB4E50E792A8C482785A92651921CB7 (Parser_t4ED54B25BFA1F672DCBAEB4FC4133FFDE7DDC9F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001c;
	}

IL_0002:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_2 = __this->get_json_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_002f;
		}
	}

IL_001c:
	{
		Il2CppChar L_4;
		L_4 = Parser_get_PeekChar_m46DEF96465982F82538D7C62E90B9955C06A4C73(__this, /*hidden argument*/NULL);
		NullCheck(_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C);
		int32_t L_5;
		L_5 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C, L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0002;
		}
	}

IL_002f:
	{
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
// System.Void Facebook.MiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m415BB4FD3A6B41305ECDA010AAE11426DBD21970 (Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		return;
	}
}
// System.String Facebook.MiniJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m5774A5B0A7AE57DF847817A2701EBAB5B155E1C2 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66 * L_0 = (Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66 *)il2cpp_codegen_object_new(Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66_il2cpp_TypeInfo_var);
		Serializer__ctor_m415BB4FD3A6B41305ECDA010AAE11426DBD21970(L_0, /*hidden argument*/NULL);
		Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66 * L_1 = L_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_m74BCFCFD908B0C44E59A4D2120B5B3FF900451C3(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_3 = L_1->get_builder_0();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m74BCFCFD908B0C44E59A4D2120B5B3FF900451C3 (Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		StringBuilder_t * L_1 = __this->get_builder_0();
		NullCheck(L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		RuntimeObject * L_3 = ___value0;
		String_t* L_4 = ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		V_2 = L_4;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_5 = V_2;
		Serializer_SerializeString_mC0483BCA0C1BC956E85D5EF17A2A2EC17278CE62(__this, L_5, /*hidden argument*/NULL);
		return;
	}

IL_0027:
	{
		RuntimeObject * L_6 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_0047;
		}
	}
	{
		StringBuilder_t * L_7 = __this->get_builder_0();
		RuntimeObject * L_8 = ___value0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_7, L_10, /*hidden argument*/NULL);
		return;
	}

IL_0047:
	{
		RuntimeObject * L_12 = ___value0;
		RuntimeObject* L_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		V_0 = L_13;
		if (!L_13)
		{
			goto IL_0059;
		}
	}
	{
		RuntimeObject* L_14 = V_0;
		Serializer_SerializeArray_mA7D5C0795410CBBFFBCF981F9875CC8FC4891B8B(__this, L_14, /*hidden argument*/NULL);
		return;
	}

IL_0059:
	{
		RuntimeObject * L_15 = ___value0;
		RuntimeObject* L_16 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
		V_1 = L_16;
		if (!L_16)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeObject* L_17 = V_1;
		Serializer_SerializeObject_mC05D69A00DA5877A0E2C4E43058BC05AA7BFAE3D(__this, L_17, /*hidden argument*/NULL);
		return;
	}

IL_006b:
	{
		RuntimeObject * L_18 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_18, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject * L_19 = ___value0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		Serializer_SerializeString_mC0483BCA0C1BC956E85D5EF17A2A2EC17278CE62(__this, L_20, /*hidden argument*/NULL);
		return;
	}

IL_0080:
	{
		RuntimeObject * L_21 = ___value0;
		Serializer_SerializeOther_mE29109FFFB088B9E4EE1E30F97ECFF0F6CB31247(__this, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_mC05D69A00DA5877A0E2C4E43058BC05AA7BFAE3D (Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (bool)1;
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)123), /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_001e:
		{
			RuntimeObject* L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject * L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
			V_2 = L_6;
			bool L_7 = V_0;
			if (L_7)
			{
				goto IL_0036;
			}
		}

IL_0028:
		{
			StringBuilder_t * L_8 = __this->get_builder_0();
			NullCheck(L_8);
			StringBuilder_t * L_9;
			L_9 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_8, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0036:
		{
			RuntimeObject * L_10 = V_2;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
			Serializer_SerializeString_mC0483BCA0C1BC956E85D5EF17A2A2EC17278CE62(__this, L_11, /*hidden argument*/NULL);
			StringBuilder_t * L_12 = __this->get_builder_0();
			NullCheck(L_12);
			StringBuilder_t * L_13;
			L_13 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_12, ((int32_t)58), /*hidden argument*/NULL);
			RuntimeObject* L_14 = ___obj0;
			RuntimeObject * L_15 = V_2;
			NullCheck(L_14);
			RuntimeObject * L_16;
			L_16 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_14, L_15);
			Serializer_SerializeValue_m74BCFCFD908B0C44E59A4D2120B5B3FF900451C3(__this, L_16, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_005f:
		{
			RuntimeObject* L_17 = V_1;
			NullCheck(L_17);
			bool L_18;
			L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_001e;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x7A, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_19 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_19, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_20 = V_3;
			if (!L_20)
			{
				goto IL_0079;
			}
		}

IL_0073:
		{
			RuntimeObject* L_21 = V_3;
			NullCheck(L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_21);
		}

IL_0079:
		{
			IL2CPP_END_FINALLY(105)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
	}

IL_007a:
	{
		StringBuilder_t * L_22 = __this->get_builder_0();
		NullCheck(L_22);
		StringBuilder_t * L_23;
		L_23 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_22, ((int32_t)125), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mA7D5C0795410CBBFFBCF981F9875CC8FC4891B8B (Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66 * __this, RuntimeObject* ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)91), /*hidden argument*/NULL);
		V_0 = (bool)1;
		RuntimeObject* L_2 = ___array0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0019:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_0031;
			}
		}

IL_0023:
		{
			StringBuilder_t * L_7 = __this->get_builder_0();
			NullCheck(L_7);
			StringBuilder_t * L_8;
			L_8 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0031:
		{
			RuntimeObject * L_9 = V_2;
			Serializer_SerializeValue_m74BCFCFD908B0C44E59A4D2120B5B3FF900451C3(__this, L_9, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_003a:
		{
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0019;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_13 = V_3;
			if (!L_13)
			{
				goto IL_0054;
			}
		}

IL_004e:
		{
			RuntimeObject* L_14 = V_3;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_14);
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
	}

IL_0055:
	{
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_15, ((int32_t)93), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mC0483BCA0C1BC956E85D5EF17A2A2EC17278CE62 (Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)34), /*hidden argument*/NULL);
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3;
		L_3 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0127;
	}

IL_001c:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Il2CppChar L_8 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)8)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_00ca;
			}
			case 2:
			{
				goto IL_00a4;
			}
			case 3:
			{
				goto IL_00dd;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00b7;
			}
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00dd;
	}

IL_004f:
	{
		StringBuilder_t * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_0065:
	{
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_007b:
	{
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_15, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_0091:
	{
		StringBuilder_t * L_17 = __this->get_builder_0();
		NullCheck(L_17);
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_17, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00a4:
	{
		StringBuilder_t * L_19 = __this->get_builder_0();
		NullCheck(L_19);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_19, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00b7:
	{
		StringBuilder_t * L_21 = __this->get_builder_0();
		NullCheck(L_21);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_21, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00ca:
	{
		StringBuilder_t * L_23 = __this->get_builder_0();
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_23, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00dd:
	{
		Il2CppChar L_25 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC(L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)32))))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)126))))
		{
			goto IL_00fd;
		}
	}
	{
		StringBuilder_t * L_29 = __this->get_builder_0();
		Il2CppChar L_30 = V_2;
		NullCheck(L_29);
		StringBuilder_t * L_31;
		L_31 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_29, L_30, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00fd:
	{
		StringBuilder_t * L_32 = __this->get_builder_0();
		int32_t L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_34;
		L_34 = Convert_ToString_mA60945431DE8F2DFDF3A3E4C76C21703562F2906(L_33, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_34);
		String_t* L_35;
		L_35 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_34, 4, ((int32_t)48), /*hidden argument*/NULL);
		String_t* L_36;
		L_36 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, L_35, /*hidden argument*/NULL);
		NullCheck(L_32);
		StringBuilder_t * L_37;
		L_37 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_32, L_36, /*hidden argument*/NULL);
	}

IL_0123:
	{
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_0127:
	{
		int32_t L_39 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t * L_41 = __this->get_builder_0();
		NullCheck(L_41);
		StringBuilder_t * L_42;
		L_42 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_41, ((int32_t)34), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_mE29109FFFB088B9E4EE1E30F97ECFF0F6CB31247 (Serializer_t3B6E5A6E0B23C58C23A0C7A5305966711C17BD66 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_1 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_3 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_3, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_4 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_5 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))
		{
			goto IL_006b;
		}
	}

IL_0058:
	{
		StringBuilder_t * L_11 = __this->get_builder_0();
		RuntimeObject * L_12 = ___value0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		NullCheck(L_11);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, L_13, /*hidden argument*/NULL);
		return;
	}

IL_006b:
	{
		RuntimeObject * L_15 = ___value0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		Serializer_SerializeString_mC0483BCA0C1BC956E85D5EF17A2A2EC17278CE62(__this, L_16, /*hidden argument*/NULL);
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
// System.Void Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m26A37AE9F92ACFE1B9F1682E29B829AFC5D81D89 (U3CU3Ec__DisplayClass4_0_tD6EC22C3A6D96467F8872D905E76417DEBD50EF2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_0::<SendSuccessResult>b__0(Facebook.Unity.IGraphResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CSendSuccessResultU3Eb__0_m1EE6C27F802104F4334201702ACF8D51A1B93BCF (U3CU3Ec__DisplayClass4_0_tD6EC22C3A6D96467F8872D905E76417DEBD50EF2 * __this, RuntimeObject* ___graphResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacebookDelegate_1__ctor_m9191F920293FB38D34AEFF835D0CDC350C82FA2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResult_tE2C6E14B59E6319C21F14DD742A81C3FD18CD7B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_1_U3CSendSuccessResultU3Eb__1_m31D2106A057FC52C260EB0EB214FD48795440834_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_1_t056A49F163C02E87FC239F5CBA664067200F7165_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral586A13F06AE71843C594D008B796A8DE2A0A1597);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA304DCE1819EEDA733FB5961DF71438C48F96B);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_1_t056A49F163C02E87FC239F5CBA664067200F7165 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_1_t056A49F163C02E87FC239F5CBA664067200F7165 * L_0 = (U3CU3Ec__DisplayClass4_1_t056A49F163C02E87FC239F5CBA664067200F7165 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_1_t056A49F163C02E87FC239F5CBA664067200F7165_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_1__ctor_m2DE55622E7FF98D1EC9891E8E15742A0435DFE82(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_1_t056A49F163C02E87FC239F5CBA664067200F7165 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_CSU24U3CU3E8__locals1_1(__this);
		RuntimeObject* L_2 = ___graphResult0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Facebook.Unity.IResult::get_Error() */, IResult_tE2C6E14B59E6319C21F14DD742A81C3FD18CD7B9_il2cpp_TypeInfo_var, L_2);
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		MockLoginDialog_t9CF05624F932E4AC61432980C65D8A59B6CA8202 * L_5 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_6 = ___graphResult0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Facebook.Unity.IResult::get_Error() */, IResult_tE2C6E14B59E6319C21F14DD742A81C3FD18CD7B9_il2cpp_TypeInfo_var, L_6);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFDA304DCE1819EEDA733FB5961DF71438C48F96B, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void Facebook.Unity.Editor.EditorFacebookMockDialog::SendErrorResult(System.String) */, L_5, L_8);
		return;
	}

IL_0036:
	{
		U3CU3Ec__DisplayClass4_1_t056A49F163C02E87FC239F5CBA664067200F7165 * L_9 = V_0;
		RuntimeObject* L_10 = ___graphResult0;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.IResult::get_ResultDictionary() */, IResult_tE2C6E14B59E6319C21F14DD742A81C3FD18CD7B9_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_11);
		RuntimeObject * L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_11, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		NullCheck(L_9);
		L_9->set_facebookID_0(((String_t*)IsInstSealed((RuntimeObject*)L_12, String_t_il2cpp_TypeInfo_var)));
		U3CU3Ec__DisplayClass4_1_t056A49F163C02E87FC239F5CBA664067200F7165 * L_13 = V_0;
		FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190 * L_14 = (FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190 *)il2cpp_codegen_object_new(FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190_il2cpp_TypeInfo_var);
		FacebookDelegate_1__ctor_m9191F920293FB38D34AEFF835D0CDC350C82FA2F(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_1_U3CSendSuccessResultU3Eb__1_m31D2106A057FC52C260EB0EB214FD48795440834_RuntimeMethod_var), /*hidden argument*/FacebookDelegate_1__ctor_m9191F920293FB38D34AEFF835D0CDC350C82FA2F_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		FB_API_m45E8B150C258B0B0DCB33C4AB9FA40DF058E4DBF(_stringLiteral586A13F06AE71843C594D008B796A8DE2A0A1597, 0, L_14, (RuntimeObject*)NULL, /*hidden argument*/NULL);
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
// System.Void Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1__ctor_m2DE55622E7FF98D1EC9891E8E15742A0435DFE82 (U3CU3Ec__DisplayClass4_1_t056A49F163C02E87FC239F5CBA664067200F7165 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_1::<SendSuccessResult>b__1(Facebook.Unity.IGraphResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1_U3CSendSuccessResultU3Eb__1_m31D2106A057FC52C260EB0EB214FD48795440834 (U3CU3Ec__DisplayClass4_1_t056A49F163C02E87FC239F5CBA664067200F7165 * __this, RuntimeObject* ___permResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_1_Invoke_m68DA77FC073985AEBA44E208A3826A0D1A0F4526_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResult_tE2C6E14B59E6319C21F14DD742A81C3FD18CD7B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Json_tE1BF00925B378B16FE51D56A77E44547E84C03DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral126A04A5A066C00B77AB4F3483884A7606F6BC5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30A7BF1FEE5DF8662ED83E80AA4537E34CC0361B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E1A3C74C7169410C083C38E4316E0B616B1FB85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5D04E432BAC10E5BF00FAEE5AD03DFA57F88C4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFADDF05B43A17EA6A8388C2C998770D78F8909EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD4706B02823C71252FBF63A74CF03433A8DADF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA304DCE1819EEDA733FB5961DF71438C48F96B);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_4 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___permResult0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Facebook.Unity.IResult::get_Error() */, IResult_tE2C6E14B59E6319C21F14DD742A81C3FD18CD7B9_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_tD6EC22C3A6D96467F8872D905E76417DEBD50EF2 * L_3 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_3);
		MockLoginDialog_t9CF05624F932E4AC61432980C65D8A59B6CA8202 * L_4 = L_3->get_U3CU3E4__this_0();
		RuntimeObject* L_5 = ___permResult0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Facebook.Unity.IResult::get_Error() */, IResult_tE2C6E14B59E6319C21F14DD742A81C3FD18CD7B9_il2cpp_TypeInfo_var, L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFDA304DCE1819EEDA733FB5961DF71438C48F96B, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void Facebook.Unity.Editor.EditorFacebookMockDialog::SendErrorResult(System.String) */, L_4, L_7);
		return;
	}

IL_002e:
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_8 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_8, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_0 = L_8;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_9, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_1 = L_9;
		RuntimeObject* L_10 = ___permResult0;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.IResult::get_ResultDictionary() */, IResult_tE2C6E14B59E6319C21F14DD742A81C3FD18CD7B9_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_11);
		RuntimeObject * L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_11, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		NullCheck(((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)IsInstClass((RuntimeObject*)L_12, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var)));
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_13;
		L_13 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233(((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)IsInstClass((RuntimeObject*)L_12, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_RuntimeMethod_var);
		V_3 = L_13;
	}

IL_0055:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b2;
		}

IL_0057:
		{
			RuntimeObject * L_14;
			L_14 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_RuntimeMethod_var);
			V_4 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)CastclassClass((RuntimeObject*)L_14, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_15 = V_4;
			NullCheck(L_15);
			RuntimeObject * L_16;
			L_16 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_15, _stringLiteralFD4706B02823C71252FBF63A74CF03433A8DADF0, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			bool L_17;
			L_17 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(((String_t*)IsInstSealed((RuntimeObject*)L_16, String_t_il2cpp_TypeInfo_var)), _stringLiteral30A7BF1FEE5DF8662ED83E80AA4537E34CC0361B, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_009b;
			}
		}

IL_0082:
		{
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_18 = V_0;
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_19 = V_4;
			NullCheck(L_19);
			RuntimeObject * L_20;
			L_20 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_19, _stringLiteral126A04A5A066C00B77AB4F3483884A7606F6BC5D, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			NullCheck(L_18);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_18, ((String_t*)IsInstSealed((RuntimeObject*)L_20, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
			goto IL_00b2;
		}

IL_009b:
		{
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_21 = V_1;
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_22 = V_4;
			NullCheck(L_22);
			RuntimeObject * L_23;
			L_23 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_22, _stringLiteral126A04A5A066C00B77AB4F3483884A7606F6BC5D, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			NullCheck(L_21);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_21, ((String_t*)IsInstSealed((RuntimeObject*)L_23, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		}

IL_00b2:
		{
			bool L_24;
			L_24 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_0057;
			}
		}

IL_00bb:
		{
			IL2CPP_LEAVE(0xCB, FINALLY_00bd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bd;
	}

FINALLY_00bd:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_3), /*hidden argument*/Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_RuntimeMethod_var);
		IL2CPP_END_FINALLY(189)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(189)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xCB, IL_00cb)
	}

IL_00cb:
	{
		U3CU3Ec__DisplayClass4_0_tD6EC22C3A6D96467F8872D905E76417DEBD50EF2 * L_25 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_25);
		MockLoginDialog_t9CF05624F932E4AC61432980C65D8A59B6CA8202 * L_26 = L_25->get_U3CU3E4__this_0();
		NullCheck(L_26);
		String_t* L_27 = L_26->get_accessToken_8();
		String_t* L_28 = __this->get_facebookID_0();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_29;
		L_29 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		V_5 = L_29;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_30;
		L_30 = DateTime_AddDays_mEB8882A3289F39D7B10E5A1FB36A2ABF80328368((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_5), (60.0), /*hidden argument*/NULL);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_31 = V_0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_32;
		L_32 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB((&L_33), L_32, /*hidden argument*/Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
		U3CU3Ec__DisplayClass4_0_tD6EC22C3A6D96467F8872D905E76417DEBD50EF2 * L_34 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_34);
		String_t* L_35 = L_34->get_graphDomain_1();
		AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE * L_36 = (AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE *)il2cpp_codegen_object_new(AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE_il2cpp_TypeInfo_var);
		AccessToken__ctor_mD3084A415552822986216C17545EBB06B7021B3D(L_36, L_27, L_28, L_30, L_31, L_33, L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		String_t* L_37;
		L_37 = AccessToken_ToJson_mCB7D6E04F3796E40BD4E024F78D1C1EF45180B00(L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Json_tE1BF00925B378B16FE51D56A77E44547E84C03DB_il2cpp_TypeInfo_var);
		RuntimeObject * L_38;
		L_38 = Json_Deserialize_m80F0DCD7ED9DF399D673C2228A3D7561DDC56457(L_37, /*hidden argument*/NULL);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_38, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var));
		RuntimeObject* L_39 = V_2;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_40 = V_0;
		NullCheck(L_39);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(!0,!1) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_39, _stringLiteralFADDF05B43A17EA6A8388C2C998770D78F8909EE, L_40);
		RuntimeObject* L_41 = V_2;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_42 = V_1;
		NullCheck(L_41);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(!0,!1) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_41, _stringLiteral3E1A3C74C7169410C083C38E4316E0B616B1FB85, L_42);
		U3CU3Ec__DisplayClass4_0_tD6EC22C3A6D96467F8872D905E76417DEBD50EF2 * L_43 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_43);
		MockLoginDialog_t9CF05624F932E4AC61432980C65D8A59B6CA8202 * L_44 = L_43->get_U3CU3E4__this_0();
		NullCheck(L_44);
		String_t* L_45;
		L_45 = EditorFacebookMockDialog_get_CallbackID_m3C0F0A4CF09E8025821214DF4C5FCE3DDFC8DD63_inline(L_44, /*hidden argument*/NULL);
		bool L_46;
		L_46 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_45, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_016d;
		}
	}
	{
		RuntimeObject* L_47 = V_2;
		U3CU3Ec__DisplayClass4_0_tD6EC22C3A6D96467F8872D905E76417DEBD50EF2 * L_48 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_48);
		MockLoginDialog_t9CF05624F932E4AC61432980C65D8A59B6CA8202 * L_49 = L_48->get_U3CU3E4__this_0();
		NullCheck(L_49);
		String_t* L_50;
		L_50 = EditorFacebookMockDialog_get_CallbackID_m3C0F0A4CF09E8025821214DF4C5FCE3DDFC8DD63_inline(L_49, /*hidden argument*/NULL);
		NullCheck(L_47);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_47, _stringLiteralA5D04E432BAC10E5BF00FAEE5AD03DFA57F88C4C, L_50);
	}

IL_016d:
	{
		U3CU3Ec__DisplayClass4_0_tD6EC22C3A6D96467F8872D905E76417DEBD50EF2 * L_51 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_51);
		MockLoginDialog_t9CF05624F932E4AC61432980C65D8A59B6CA8202 * L_52 = L_51->get_U3CU3E4__this_0();
		NullCheck(L_52);
		Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A * L_53;
		L_53 = EditorFacebookMockDialog_get_Callback_mB414433277F2E3C45DFF4F4A28D9325C43EFA944_inline(L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_019a;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_tD6EC22C3A6D96467F8872D905E76417DEBD50EF2 * L_54 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_54);
		MockLoginDialog_t9CF05624F932E4AC61432980C65D8A59B6CA8202 * L_55 = L_54->get_U3CU3E4__this_0();
		NullCheck(L_55);
		Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A * L_56;
		L_56 = EditorFacebookMockDialog_get_Callback_mB414433277F2E3C45DFF4F4A28D9325C43EFA944_inline(L_55, /*hidden argument*/NULL);
		RuntimeObject* L_57 = V_2;
		ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * L_58 = (ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 *)il2cpp_codegen_object_new(ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5_il2cpp_TypeInfo_var);
		ResultContainer__ctor_mD39221B1A09D30AB8C198F5767BBD3C517586467(L_58, L_57, /*hidden argument*/NULL);
		NullCheck(L_56);
		Callback_1_Invoke_m68DA77FC073985AEBA44E208A3826A0D1A0F4526(L_56, L_58, /*hidden argument*/Callback_1_Invoke_m68DA77FC073985AEBA44E208A3826A0D1A0F4526_RuntimeMethod_var);
	}

IL_019a:
	{
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
// System.Void Facebook.Unity.Utilities/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE8C9EEB6AD314C381B65C59A940D8C78E43AA8E4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t07DB35654B84F9536C79685DDE68969F89E08208_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t07DB35654B84F9536C79685DDE68969F89E08208 * L_0 = (U3CU3Ec_t07DB35654B84F9536C79685DDE68969F89E08208 *)il2cpp_codegen_object_new(U3CU3Ec_t07DB35654B84F9536C79685DDE68969F89E08208_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF091F7805EB5B7EE3DFDAAEA84C1B2191B163E5E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t07DB35654B84F9536C79685DDE68969F89E08208_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t07DB35654B84F9536C79685DDE68969F89E08208_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Facebook.Unity.Utilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF091F7805EB5B7EE3DFDAAEA84C1B2191B163E5E (U3CU3Ec_t07DB35654B84F9536C79685DDE68969F89E08208 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Facebook.Unity.Utilities/<>c::<ParsePermissionFromResult>b__19_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CParsePermissionFromResultU3Eb__19_0_mBA18321F0CAF2B6AE6322E4AD2EF7AFBE87933B3 (U3CU3Ec_t07DB35654B84F9536C79685DDE68969F89E08208 * __this, RuntimeObject * ___permission0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___permission0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE * LoginResult_get_AccessToken_m6DDF9B1A8F63CEF6497A0F846F473FC32E3421FF_inline (LoginResult_tD685FAD3338C703E9001B91C80DAE72EB889ADD8 * __this, const RuntimeMethod* method)
{
	{
		AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE * L_0 = __this->get_U3CAccessTokenU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessToken_set_CurrentAccessToken_m89E9DA7B22C97CD852A646D092C031A409975F95_inline (AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE * L_0 = ___value0;
		((AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE_StaticFields*)il2cpp_codegen_static_fields_for(AccessToken_tFC374BB7018676CAD386CDEF220DDC7D756854AE_il2cpp_TypeInfo_var))->set_U3CCurrentAccessTokenU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ResultContainer_get_ResultDictionary_m54F102EC69960805511681B39A6E205EC54A0810_inline (ResultContainer_t315E90260C287C4C206C2916F1E896A3EDD2D6B5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CResultDictionaryU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FacebookGameObject_get_Facebook_m9E679BFB8543D49BDADC13DF674122699C72FA23_inline (FacebookGameObject_t6FC4F88C6F002C8663BD2429B8E090A960E341BA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CFacebookU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnDLLLoaded_tF6931D34771F7C57F71E731BFE7B86676BCA26FC * FB_get_OnDLLLoadedDelegate_m0BDFE1904A457997439BBDFD9016A11380CBA041_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		OnDLLLoaded_tF6931D34771F7C57F71E731BFE7B86676BCA26FC * L_0 = ((FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_StaticFields*)il2cpp_codegen_static_fields_for(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var))->get_U3COnDLLLoadedDelegateU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDict_set_NumEntries_m903864AFD0C84100F452FD86EAD90D8914E1AF00_inline (NativeDict_t7F0F20CA44B5C90D5076D1EB289255DDEA8F42AF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CNumEntriesU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDict_set_Keys_m76188FB7DD583FF0DA33F34BEE833E2D0B00BF38_inline (NativeDict_t7F0F20CA44B5C90D5076D1EB289255DDEA8F42AF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_U3CKeysU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDict_set_Values_m654E161C3EA517FC486B1CA9D4C709456BE0396B_inline (NativeDict_t7F0F20CA44B5C90D5076D1EB289255DDEA8F42AF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_U3CValuesU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EditorFacebookMockDialog_get_CallbackID_m3C0F0A4CF09E8025821214DF4C5FCE3DDFC8DD63_inline (EditorFacebookMockDialog_tED6E44AFBC3DF5B93DB89A7137CDF227687DB951 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCallbackIDU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A * EditorFacebookMockDialog_get_Callback_mB414433277F2E3C45DFF4F4A28D9325C43EFA944_inline (EditorFacebookMockDialog_tED6E44AFBC3DF5B93DB89A7137CDF227687DB951 * __this, const RuntimeMethod* method)
{
	{
		Callback_1_t45E44C4BFF3E42507F17E09D88D0BF8EA623459A * L_0 = __this->get_U3CCallbackU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
