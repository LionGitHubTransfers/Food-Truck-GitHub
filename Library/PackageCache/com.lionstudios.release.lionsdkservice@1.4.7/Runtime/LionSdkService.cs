using System.IO;
using UnityEngine;

namespace LionStudios.Runtime.Sdk
{
    public class LionSdkService
    {
        public static LionSdkCollection GetRuntimeSdkInfos()
        {
            LionSdkInfoRuntime runtimeSdkInfo = LionSdkInfoRuntime.RuntimeInfo;
            return runtimeSdkInfo != null ? runtimeSdkInfo.Sdks : null;
        }

        public static bool CanDefineScriptingSymbols()
        {
            LionSdkInfoRuntime runtimeSdkInfo = LionSdkInfoRuntime.RuntimeInfo;
            return runtimeSdkInfo != null && runtimeSdkInfo.defineScriptingSymbols;
        }

        public static void SetDefineScriptingSymbols(bool shouldDefine)
        {
            LionSdkInfoRuntime runtimeSdkInfo = LionSdkInfoRuntime.RuntimeInfo;
            if (runtimeSdkInfo != null)
            {
                runtimeSdkInfo.defineScriptingSymbols = shouldDefine;
            }
        }
    }
}