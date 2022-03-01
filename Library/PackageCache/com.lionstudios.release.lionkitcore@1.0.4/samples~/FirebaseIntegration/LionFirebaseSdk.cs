#if HAS_LION_FIREBASE_SDK
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LionStudios.Suite.Core;
using LionStudios;
using LionStudios.Suite.Debugging;
using Firebase;
using Firebase.Analytics;
using LionStudios.Suite.Debugging;

#if UNITY_EDITOR
using UnityEditor;
using System.IO;
#endif

public class LionFireBaseSDK : ILionSdk
{
    private string cachedGameKey;
    public int Priority => 0;
    
    private static LionFirebaseSettings _settings = new LionFirebaseSettings();

    public class LionFirebaseSettings : ILionSettingsInfo {}

    public void ApplySettings(ILionSettingsInfo newSettings)
    {
        _settings = (LionFirebaseSettings)newSettings;
    }

    public ILionSettingsInfo GetSettings()
    {
        if (_settings == null)
        {
            _settings = new LionFirebaseSettings();
        }

        return _settings;
    }
    
    public string[] GetPrivacyLinks()
    {
        return new string[] {"https://firebase.google.com/support/privacy" };
    }
    
    private bool _isInitialized;
    public bool IsInitialized()
    {
        return _isInitialized;
    }
    
    public void OnInitialize(LionCoreContext ctx)
    {
        LionDebug.Log("Resolving Firebase Dependencies");
        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task=>{
            FirebaseAnalytics.SetAnalyticsCollectionEnabled(true);
        });
    }

    public void OnPostInitialize(LionCoreContext ctx) { }
    public void OnPreInitialize(LionCoreContext ctx) { }

}
#endif