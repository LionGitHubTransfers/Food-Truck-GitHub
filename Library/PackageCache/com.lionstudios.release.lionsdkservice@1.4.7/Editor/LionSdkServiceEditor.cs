#if UNITY_EDITOR
using System;
using System.IO;
using System.Linq;
using LionStudios.Runtime.Sdk;
using UnityEditor;
using UnityEngine;
using UnityEditor.PackageManager;
using UnityEditor.PackageManager.Requests;

[InitializeOnLoad]
public class LionSdkServiceEditor
{
    #region SDK DEFINES
    private const string SDK_HAS_ADJUST = "HAS_LION_ADJUST_SDK";
    private const string SDK_HAS_GAMEANALYTICS = "HAS_LION_GAME_ANALYTICS_SDK";
    private const string SDK_HAS_FIREBASE = "HAS_LION_FIREBASE_SDK";
    private const string SDK_HAS_NAKAMA = "HAS_LION_NAKAMA_SDK";
    private const string SDK_HAS_DELTADNA = "HAS_LION_DELTADNA_SDK";
    private const string SDK_HAS_APPLOVIN_MAX = "HAS_LION_APPLOVIN_SDK";
    private const string SDK_HAS_GOOGLE_REVIEW = "HAS_LION_GOOGLE_REVIEW_SDK";
    private const string SDK_HAS_FACEBOOK_SDK= "HAS_LION_FACEBOOK_SDK";
    #endregion
    
    private static ListRequest _listPackagesRequest;
    private static string processorDefinitions = string.Empty;

    public delegate void SdksReloadedDel(LionSdkCollection collection);
    public static SdksReloadedDel OnSdksReloaded;

    private static BuildTargetGroup processorTargetGrp
    {
        get
        {
#if UNITY_ANDROID
            return BuildTargetGroup.Android;
#elif UNITY_IOS
            return BuildTargetGroup.iOS;
#endif
            return BuildTargetGroup.Standalone;
        }
    }

    static LionSdkServiceEditor()
    {
        if (processorTargetGrp == BuildTargetGroup.Standalone)
        {
            Debug.LogWarning("Lion Suite: Please change target platform to Android or iOS");
            return;
        }
        
        processorDefinitions = PlayerSettings.GetScriptingDefineSymbolsForGroup(processorTargetGrp);
        _listPackagesRequest = Client.List();
        LionSdkCollection sdks = ReloadSdks();
        LionSdkInfoRuntime.CreateOrUpdate(sdks);
    }
    
    public static LionSdkCollection ReloadSdks()
    {
        LionSdkCollection sdks = GetAllSdks();
        bool defineScriptingSymbols = LionSdkService.CanDefineScriptingSymbols();
        string oldDefinitions = processorDefinitions;
        foreach (LionSdkInfo sdk in sdks)
        {
            if (sdk.IsSupported)
            {
                sdk.IsInstalled = IsSdkInstalled(sdk);
            }

            if (defineScriptingSymbols)
            {
                SetPreprocessorDefinitions((SdkId)sdk.ID, sdk.IsInstalled);
            }
        }

        if (defineScriptingSymbols
            && oldDefinitions != processorDefinitions)
        {
            ApplyPreprocessorDefinitions();
        }
        
        OnSdksReloaded?.Invoke(sdks);
        return sdks;
    }

    public static void SetPreprocessorDefinitions(SdkId sdk, bool toggle)
    {
        string define = string.Empty;
        switch (sdk)
        {
            case SdkId.Adjust:
                define = SDK_HAS_ADJUST;
                break;
            case SdkId.Firebase:
                define = SDK_HAS_FIREBASE;
                break;
            case SdkId.Nakama:
                define = SDK_HAS_NAKAMA;
                break;
            case SdkId.GameAnalytics:
                define = SDK_HAS_GAMEANALYTICS;
                break;
            case SdkId.ApplovinMAX:
                define = SDK_HAS_APPLOVIN_MAX;
                break;
            case SdkId.DeltaDNA:
                define = SDK_HAS_DELTADNA;
                break;
            case SdkId.GooglePlayReview:
                define = SDK_HAS_GOOGLE_REVIEW;
                break;
            case SdkId.Facebook:
                define = SDK_HAS_FACEBOOK_SDK;
                break;
        }

        if (toggle)
        {
            if (!processorDefinitions.Contains(define))
            {
                processorDefinitions += $";{define}";
            }
        }
        else
        {
            if (processorDefinitions.Contains(define))
            {
                processorDefinitions = processorDefinitions.Replace($"{define}", "");
            }
        }
        
#if LION_SUITE_DEV
        Debug.Log("New Definitions: " + processorDefinitions);
#endif
    }

    private static void ApplyPreprocessorDefinitions()
    {
        UnityEditor.PlayerSettings.SetScriptingDefineSymbolsForGroup(processorTargetGrp, processorDefinitions);
    }

    public static bool IsSdkInstalled(LionSdkInfo lionSdkInfo)
    {
        bool isInstalled = false;
        bool foundAssets = false;
        bool foundPackage = false;

        // check for sdk asset path
        if (!string.IsNullOrEmpty(lionSdkInfo.AssetPath))
        {
            string fullAssetPath = $"{Application.dataPath}/{lionSdkInfo.AssetPath}";
            if (Directory.Exists(fullAssetPath))
            {
                // check for additional required directories (ONLY WHEN INSTALLING VIA ASSETS)
                if (lionSdkInfo.RequiredDirectories != null
                    && lionSdkInfo.RequiredDirectories.Length > 0)
                {
                    bool foundAllReqDirectories = true;
                    foreach (string reqDir in lionSdkInfo.RequiredDirectories)
                    {
                        string assetPath = $"{Application.dataPath}/{reqDir}";
                        if (!Directory.Exists(assetPath))
                        {
                            foundAllReqDirectories = false;
                        }
                    }

                    if (foundAllReqDirectories)
                    {
                        isInstalled = true;
                        foundAssets = true;
                    }
                }
                else
                {
                    isInstalled = true;
                    foundAssets = true;
                }
            }
        }
        
        // check for package
        if (!string.IsNullOrEmpty(lionSdkInfo.PackageName) && _listPackagesRequest != null && _listPackagesRequest.Result != null)
        {
            var sdkPkg = _listPackagesRequest.Result.FirstOrDefault(x => x != null && x.name == lionSdkInfo.PackageName);
            if (sdkPkg != null)
            {
                isInstalled = true;
                foundPackage = true;
            }
        }

        if (lionSdkInfo.AssetAndPackageRequired)
        {
            isInstalled = foundAssets && foundPackage;
        }

        return isInstalled;
    }
    
    public static LionSdkCollection GetAllSdks()
    {
        TextAsset sdksJson = Resources.Load<TextAsset>("LionSdkService/Sdks");
        string json = sdksJson.text;
        if (string.IsNullOrEmpty(json))
        {
            Debug.LogError("Lion SDK Manager: Failed to query for SDKs, supported Sdks list is empty!");
            return null;
        }
        

        LionSdkCollection collection = JsonUtility.FromJson<LionSdkCollection>(json);
        return collection;
    }
}
#endif