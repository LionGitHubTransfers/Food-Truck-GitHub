﻿#if HAS_LION_APPLOVIN_SDK
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;
using LionStudios.Suite.Core;
using LionStudios.Suite.Ads;
using LionStudios.Suite.Debugging;
using LionStudios.Suite.Analytics;
using LionStudios.Suite.RemoteConfig;
using LionStudios.Suite.GDPR;

using System;

/// <summary>
/// This is a sample script for integrating MAX SDK with Lion Suite.
/// This sample includes loading and showing ads, and connection with GDPR
/// Includes settings and functionality for initializing MAX.
/// 
/// NOTE - REQUIRES PACKAGES:
///     AppLovin MAX
///     Lion Suite - Ads
///     Lion Suite - Analytics
///     Lion Suite - GDPR
///     RemoteConfig.cs
/// </summary>
public class LionMaxSdk : ILionSdk, ILionAdProvider
{
    private static ApplovinMaxSettings _settings = new ApplovinMaxSettings();

    public int Priority => 1;
    
    [LabelOverride("AppLovin MAX")]
    public class ApplovinMaxSettings : ILionSettingsInfo
    {
        [Header("General")]
        public string sdkKey = "";

        // rewarded ads
        [Header("Rewarded Ads")]

        public string rewardedAdUnitIdAndroid = "";
        public string rewardedAdUnitIdIos = "";

        // interstitial ads
        [Header("Interstitial Ads")]
        public string interstitialAdUnitIdAndroid = "";
        public string interstitialAdUnitIdIos = "";

        // banner ads
        [Header("Banner Ads")]
        public string bannerAdUnitIdAndroid = "";
        public string bannerAdUnitIdIos = "";

        // cross promo ads
        [Header("Cross Promo Ads")]
        public string crossPromoAdUnitIdAndroid = "";
        public string crossPromoAdUnitIdIos = "";
        public float xPercent = 5.0f;
        public float yPercent = 30.0f;
        public float wPercent = 30.0f;
        public float hPercent = 30.0f;
        public float rDegrees = 45.0f;
    }

    private string InterstitialAdUnit
    {
        get
        {
#if UNITY_IOS
            return _settings.interstitialAdUnitIdIos;
#elif UNITY_ANDROID
            return _settings.interstitialAdUnitIdAndroid;
#endif
        }
    }

    private string RewardedAdUnit
    {
        get
        {
#if UNITY_IOS
            return _settings.rewardedAdUnitIdIos;
#elif UNITY_ANDROID
            return _settings.rewardedAdUnitIdAndroid;
#endif
        }
    }

    private string BannerAdUnit
    {
        get
        {
#if UNITY_IOS
            return _settings.bannerAdUnitIdIos;
#elif UNITY_ANDROID
            return _settings.bannerAdUnitIdAndroid;
#endif
        }
    }

    private string CrossPromoAdUnit
    {
        get
        {
#if UNITY_IOS
            return _settings.crossPromoAdUnitIdIos;
#elif UNITY_ANDROID
            return _settings.crossPromoAdUnitIdAndroid;
#endif
        }
    }

    public const string bannersDisabledString = "bannersDisabled";
    public const string rewardedAdsDisabledString = "rewardedAdsDisabled";
    public const string interstitialsDisabledString = "interstitialsDisabled";
    public const string rvInterstitialTimerString = "rvInterstitialTimer";
    public const string interstitialStartLevelString = "interstitialStartLevel";
    public const string interstitialTimerString = "interstitialTimer";
    public const string crossPromoDisabledString = "crossPromoDisabled";

    public static float xPercentNotFromSettings;
    public static float yPercentNotFromSettings;
    public static float wPercentNotFromSettings;
    public static float hPercentNotFromSettings;
    public static float rDegreesNotFromSettings;
    public static bool customCrossPromoDimensions = false;

    public void ApplySettings(ILionSettingsInfo newSettings)
    {
        _settings = (ApplovinMaxSettings)newSettings;
    }

    public ILionSettingsInfo GetSettings()
    {
        if (_settings == null)
        {
            _settings = new ApplovinMaxSettings();
        }

        return _settings;
    }

    public bool IsInitialized()
    {
        return MaxSdk.IsInitialized();
    }

    private void OnMaxInitialized(MaxSdkBase.SdkConfiguration sdkConfiguration)
    {
        if (MaxSdk.IsInitialized())
        {
#if DEVELOPMENT_BUILD || UNITY_EDITOR
            MaxSdk.ShowMediationDebugger();
#endif

            bool gdprRequired = true;
#if UNITY_IOS
				if ((MaxSdkUtils.CompareVersions(UnityEngine.iOS.Device.systemVersion, "14.5") != MaxSdkUtils.VersionComparisonResult.Lesser)
					|| (MaxSdkUtils.CompareVersions(UnityEngine.iOS.Device.systemVersion, "14.5-beta") != MaxSdkUtils.VersionComparisonResult.Lesser))
				{
					gdprRequired = false;
				}
#endif

            if (gdprRequired)
            {
                LionGDPR.OnAdConsentUpdated += () =>
                {
                    MaxSdk.SetHasUserConsent(LionGDPR.AdConsentGranted);
                };

                switch (sdkConfiguration.ConsentDialogState)
                {
                    case MaxSdkBase.ConsentDialogState.Applies:
                        // Show user consent dialog... 
                        // Note: If we have previously completed GDPR, the dialog will not appear.
                        LionGDPR.Initialize(UserStatus.Applies);
                        break;

                    case MaxSdkBase.ConsentDialogState.DoesNotApply:
                        // No need to show consent dialog, proceed with initialization
                        LionGDPR.Initialize(UserStatus.DoesNotApply);
                        break;

                    case MaxSdkBase.ConsentDialogState.Unknown:
                        // Consent dialog state is unknown. Proceed with initialization, but check if the consent
                        // dialog should be shown on the next application initialization
                        LionGDPR.Initialize(UserStatus.Unknown);
                        MaxSdk.SetHasUserConsent(LionGDPR.AdConsentGranted);
                        LoadAds(LionAdTypeFlag.All);
                        break;

                    default:
                        LionGDPR.Initialize(UserStatus.NotSet);
                        break;
                }
            }
            else
            {
                LoadAds(LionAdTypeFlag.All);
            }
            
            Debug.Log("MaxSDK init Complete.  Consent Dialog State = " + sdkConfiguration.ConsentDialogState);
        }
        else
        {
            Debug.Log("Failed to init MaxSDK");
        }
    }

    public void OnInitialize(LionCoreContext ctx)
    {
        ApplovinMaxSettings maxSettings = ctx.GetSettings<ApplovinMaxSettings>();
        LionDebug.LionDebugSettings debugSettings = ctx.GetSettings<LionDebug.LionDebugSettings>();

        string[] adUnitIds = new string[]
        {
            // rewarded
            maxSettings.rewardedAdUnitIdAndroid,
            maxSettings.rewardedAdUnitIdIos,
            
            // interstitial
            maxSettings.interstitialAdUnitIdAndroid,
            maxSettings.interstitialAdUnitIdIos,

            // banner
            maxSettings.bannerAdUnitIdAndroid,
            maxSettings.bannerAdUnitIdIos,
        };

        // init callback
        MaxSdkCallbacks.OnSdkInitializedEvent += OnMaxInitialized;
        
        // load callbacks
        MaxSdkCallbacks.Interstitial.OnAdLoadedEvent += OnAdLoaded;
        MaxSdkCallbacks.Rewarded.OnAdLoadedEvent += OnAdLoaded;
        MaxSdkCallbacks.Banner.OnAdLoadedEvent += OnAdLoaded;

        MaxSdkCallbacks.Interstitial.OnAdLoadFailedEvent += OnAdLoadFail;
        MaxSdkCallbacks.Rewarded.OnAdLoadFailedEvent += OnAdLoadFail;
        MaxSdkCallbacks.Banner.OnAdLoadFailedEvent += OnAdLoadFail;

        // show callbacks
        MaxSdkCallbacks.Interstitial.OnAdDisplayedEvent += OnAdDisplayed;
        MaxSdkCallbacks.Rewarded.OnAdDisplayedEvent += OnAdDisplayed;
        MaxSdkCallbacks.Banner.OnAdExpandedEvent += OnAdDisplayed;

        MaxSdkCallbacks.Interstitial.OnAdDisplayFailedEvent += OnAdDisplayFailed;
        MaxSdkCallbacks.Rewarded.OnAdDisplayFailedEvent += OnAdDisplayFailed;

        // init
        MaxSdk.SetSdkKey(maxSettings.sdkKey);
        MaxSdk.SetUserId(SystemInfo.deviceUniqueIdentifier);
        MaxSdk.SetVerboseLogging(debugSettings.debugLogLevel == LionDebug.DebugLogLevel.Verbose);
        MaxSdk.InitializeSdk(adUnitIds);

        // init cross promo 
        AppLovinCrossPromo.Init();
        
        

        // Re-init ads whenever the GDPR dialog is closed
        LionGDPR.OnClosed += delegate
        {
            LoadAds(LionAdTypeFlag.All);
        };
        


    }

    public void OnPostInitialize(LionCoreContext ctx) { }
    public void OnPreInitialize(LionCoreContext ctx) { }

    #region Privacy Links
    private Dictionary<string, string> _privacyLinks = new Dictionary<string, string>
    {
        {"UNITY_NETWORK", "https://unity3d.com/fr/legal/privacy-policy" },
        {"APPLOVIN", "https://www.applovin.com/privacy/" },
        {"ADMOB_NETWORK", "https://policies.google.com/privacy/update" },
        {"ADCOLONY_NETWORK", "https://www.adcolony.com/privacy-policy/" },
        {"AMAZON_NETWORK", "https://advertising.amazon.com/resources/ad-policy/en/gdpr" },
        {"CHARTBOOST_NETWORK", "https://answers.chartboost.com/en-us/articles/200780269" },
        {"FYBER_NETWORK", "https://fyber.com/Privacy-policy/" },
        {"INMOBI_NETWORK", "https://www.inmobi.com/privacy-policy/" },
        {"IRONSOURCE_NETWORK", "https://ironsource.mobi/privacypolicy.html" },
        {"MINTEGRAL_NETWORK", "https://www.mintegral.com/en/privacy/" },
        {"NEND_NETWORK", "https://www.fancs.com/en/privacy" },
        {"SMAATO_NETWORK", "https://www.smaato.com/privacy/" },
        {"TIKTOK_NETWORK", "https://www.tiktok.com/legal/privacy-policy?lang=en#privacy-eea" },
        {"VERIZON_NETWORK", "https://www.verizon.com/about/privacy/advertising-programs-privacy-notice" },
        {"YANDEX_NETWORK", "https://yandex.com/legal/confidential/" },
        {"VUNGLE_NETWORK", "https://vungle.com/privacy/" },
        {"FACEBOOK_MEDIATE", "https://www.facebook.com/policy.php" },
        {"MYTARGET_NETWORK", "https://legal.my.com/us/mytarget/privacy/" }
    };

    public string[] GetPrivacyLinks()
    {
        List<string> privacyLinks = new List<string>();
        foreach (var kvp in _privacyLinks)
        {
            privacyLinks.Add(kvp.Value);
        }

        return privacyLinks.ToArray();
    }
    #endregion

    #region Ads

    private void OnAdLoaded(string adUnit, MaxSdkBase.AdInfo adInfo)
    {
        if (string.IsNullOrEmpty(adUnit))
        {
            return;
        }

        if (adUnit == InterstitialAdUnit)
        {
            LionAnalytics.InterstitialLoad(adInfo.Placement, adInfo.NetworkName);
        }else if (adUnit == RewardedAdUnit)
        {
            LionAnalytics.RewardVideoLoad(adInfo.Placement, adInfo.NetworkName);
        }else if (adUnit == BannerAdUnit)
        {
            LionAnalytics.BannerLoad(adInfo.Placement, adInfo.NetworkName);
        }
    }

    private void OnAdLoadFail(string adUnit, MaxSdkBase.ErrorInfo errorInfo)
    {
        if (string.IsNullOrEmpty(adUnit))
        {
            return;
        }
        
        if (adUnit == InterstitialAdUnit)
        {
            LionAnalytics.InterstitialLoadFail("no_network", (AdErrorType)errorInfo.Code.GetHashCode());
        }else if (adUnit == RewardedAdUnit)
        {
            LionAnalytics.RewardVideoLoadFail("no_network", null ,(AdErrorType)errorInfo.Code.GetHashCode());
        }else if (adUnit == BannerAdUnit)
        {
            LionAnalytics.BannerLoadFail("no_network", (AdErrorType)errorInfo.Code.GetHashCode());
        }
    }

    private void OnAdDisplayed(string adUnit, MaxSdkBase.AdInfo adInfo)
    {
        if (string.IsNullOrEmpty(adUnit))
        {
            return;
        }
        
        if (adUnit == InterstitialAdUnit)
        {
            LionAnalytics.InterstitialShow(adInfo.Placement, adInfo.NetworkName);
        }else if (adUnit == RewardedAdUnit)
        {
            LionAnalytics.RewardVideoShow(adInfo.Placement, adInfo.NetworkName);
        }else if (adUnit == BannerAdUnit)
        {
            LionAnalytics.BannerShow(adInfo.Placement, adInfo.NetworkName);
        }
    }
    
    private void OnAdDisplayFailed(string adUnit, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo)
    {
        if (string.IsNullOrEmpty(adUnit))
        {
            return;
        }
        
        if (adUnit == InterstitialAdUnit)
        {
            LionAnalytics.InterstitialShowFail(adInfo.Placement, adInfo.NetworkName, null,(AdErrorType)errorInfo.Code.GetHashCode() );
        }else if (adUnit == RewardedAdUnit)
        {
            LionAnalytics.RewardVideoShowFail(adInfo.Placement, adInfo.NetworkName, (AdErrorType)errorInfo.Code.GetHashCode() );

        }else if (adUnit == BannerAdUnit)
        {
            LionAnalytics.BannerShowFail(adInfo.Placement, adInfo.NetworkName, (AdErrorType)errorInfo.Code.GetHashCode() );
        }
    }
    


    public void LoadAds(LionAdTypeFlag adType)
    {

        bool bannersDisabled = RemoteConfig.LoadMaxVar<bool>(bannersDisabledString);
        bool rewardedAdsDisabled = RemoteConfig.LoadMaxVar<bool>(rewardedAdsDisabledString);
        bool interstitialsDisabled = RemoteConfig.LoadMaxVar<bool>(interstitialsDisabledString);

        // Whenever GDPR is completed or updated we will want to (re)initialize ads so that we are loading and showing ads from the correct campaigns
        if (LionGDPR.Completed ||
            LionGDPR.Status == UserStatus.Unknown ||
            !LionGDPR.CanShowGdpr
            || MaxSdk.GetSdkConfiguration().ConsentDialogState == MaxSdkBase.ConsentDialogState.Unknown)
        {
            if(adType == LionAdTypeFlag.Interstitial)
            {
                if (!interstitialsDisabled)
                {
                    MaxSdk.LoadInterstitial(InterstitialAdUnit);
                }
            }

            if(adType == LionAdTypeFlag.Rewarded)
            {
                if (!rewardedAdsDisabled)
                {
                    MaxSdk.LoadRewardedAd(RewardedAdUnit);
                }
            }

            if(adType == LionAdTypeFlag.Banner)
            {
                if (!bannersDisabled)
                {
                    MaxSdk.CreateBanner(BannerAdUnit, MaxSdkBase.BannerPosition.BottomCenter);
                }
            }

            if(adType == LionAdTypeFlag.All)
            {
                if (!interstitialsDisabled && !rewardedAdsDisabled
                    && !bannersDisabled)
                {
                    MaxSdk.LoadInterstitial(InterstitialAdUnit);
                    MaxSdk.LoadRewardedAd(RewardedAdUnit);
                    MaxSdk.CreateBanner(BannerAdUnit, MaxSdkBase.BannerPosition.BottomCenter);
                }
            }
        }
    }

      public static void SetCustomCrossPromoDimensions(float xPercent, float yPercent, float wPercent, float hPercent, float rDegrees)
    {
        xPercentNotFromSettings = xPercent;
        yPercentNotFromSettings = yPercent;
        wPercentNotFromSettings = wPercent;
        hPercentNotFromSettings = hPercent;
        rDegreesNotFromSettings = rDegrees;
        customCrossPromoDimensions = true;
    }

    public static void switchCrossPromoToSettingsWindowValues()
    {
        customCrossPromoDimensions = false;
    }

    
    private float lastInterstitialShowTime;
    private float lastRvInterstitialShowTime;
    public void ShowAd(LionAdType adType, string placement = null, int? level = null,
        Dictionary<string, object> additionalData = null)
    {
        float rvInterstitialTimer = RemoteConfig.LoadMaxVar<float>(rvInterstitialTimerString);
        float interstitialTimer = RemoteConfig.LoadMaxVar<float>(interstitialTimerString);
        float interstitialStartLevel = RemoteConfig.LoadMaxVar<float>(interstitialStartLevelString);
        bool bannersDisabled = RemoteConfig.LoadMaxVar<bool>(bannersDisabledString);
        bool crossPromoDisabled = RemoteConfig.LoadMaxVar<bool>(crossPromoDisabledString);
        bool rewardedAdsDisabled = RemoteConfig.LoadMaxVar<bool>(rewardedAdsDisabledString);
        bool interstitialsDisabled = RemoteConfig.LoadMaxVar<bool>(interstitialsDisabledString);

        if (!IsInitialized()) return;
        switch (adType)
        {
            case LionAdType.Rewarded:
                if (!rewardedAdsDisabled
                    && Time.time - lastRvInterstitialShowTime >= rvInterstitialTimer)
                {
                    MaxSdk.ShowRewardedAd(RewardedAdUnit, placement);
                    lastRvInterstitialShowTime = Time.time;
                }
                break;
            case LionAdType.Interstitial:
                if (!interstitialsDisabled
                    && level >= interstitialStartLevel
                    && (Time.time - lastInterstitialShowTime) >= interstitialTimer)
                {
                    MaxSdk.ShowInterstitial(InterstitialAdUnit, placement);
                    lastInterstitialShowTime = Time.time;
                }
                break;
            case LionAdType.Banner: 
                if (!bannersDisabled)
                {
                    MaxSdk.ShowBanner(BannerAdUnit);
                }
                break;
            case LionAdType.CrossPromo:
                if (!crossPromoDisabled)
                {
                    if(customCrossPromoDimensions)
                    {
                        AppLovinCrossPromo.Instance().ShowMRec (xPercentNotFromSettings,
                        yPercentNotFromSettings, wPercentNotFromSettings, hPercentNotFromSettings, rDegreesNotFromSettings);
                    }
                    else
                    {
                        AppLovinCrossPromo.Instance().ShowMRec (_settings.xPercent,
                        _settings.yPercent, _settings.wPercent, _settings.hPercent, _settings.rDegrees);
                    }
                    
                }
                break;
        }
    }

    public void HideAd(LionAdType adType, string placement = null, int? level = null, Dictionary<string, object> additionalData = null)
    {
        if (adType == LionAdType.Banner)
        {
            MaxSdk.HideBanner(BannerAdUnit);
        }

        if (adType == LionAdType.CrossPromo)
        {
            AppLovinCrossPromo.Instance().HideMRec();
        }
    }


    public bool IsAdReady(LionAdType adType)
    {
        switch (adType)
        {
            case LionAdType.Banner:
                return true;
            case LionAdType.Interstitial:
                return MaxSdk.IsInterstitialReady(InterstitialAdUnit);
            case LionAdType.Rewarded:
                return MaxSdk.IsRewardedAdReady(RewardedAdUnit);
            case LionAdType.CrossPromo:
                return true;
            default:
                return false;
        } 
    }
    #endregion

}
#endif