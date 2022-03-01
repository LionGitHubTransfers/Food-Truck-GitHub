using Facebook.Unity;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Admob : Singleton<Admob>
{
    public event Action<bool> Action_RewardPlayer;
    private const string MaxSdkKey = "9ZURTATZVEdg2tq3FuhiyvvpqnkVZ6bCFA8aZ6e6P2vDuAdSAh9CyeilTR5egVTrFETG3KQdxVRoOpu3MeThLO";
    private string InterstitialAdUnitId = "";
    private string RewardedAdUnitId = "";
    private string BannerAdUnitId = "";
    private int m_LevelOfFirstInterstitial = 5;
    private int m_InterstitialInterval = 35;
    private int m_RewardInterval = 35;
    private float m_LastInterstitialTime = 0f;
    private float m_LastRewardTime = 0f;
    private bool m_IsShowBanner = false;
    private bool m_IsShowGDPR = false;
    private bool m_IsInitialize = false;
    private bool m_IsSandEvet = false;
    public GameObject ATT;
    public bool SetBannerState
    {
        set
        {
            m_IsShowBanner = value;
        }
    }
    public bool IsRewardVideoReady
    {
        get
        {
            return MaxSdk.IsRewardedAdReady(RewardedAdUnitId);
        }
    }
    public bool IsShowGDPR
    {
        get
        {
            return m_IsShowGDPR;
        }
    }
    public bool IsInitialize
    {
        get
        {
            return m_IsInitialize;
        }
    }
    private void Start()
    {
        InterstitialAdUnitId = "cce6659e7e9c8e22";
        RewardedAdUnitId = "541bbc690aaf170b";
        BannerAdUnitId = "7adcfcf66d184908";
#if UNITY_IOS
        InterstitialAdUnitId = "b9b38d2baf4f9994";
        RewardedAdUnitId = "9dd1a224ca81db6c";
        BannerAdUnitId = "08e7614b33fdc54c";
#endif
        StartCoroutine(WaitForInternet());
        DontDestroyOnLoad(this);
    }
    private IEnumerator WaitForInternet()
    {
    InitAd();
        bool _isConnected = false;
        while (!_isConnected)
        {
            //  _isConnected = StaticMethods.IsInternetConnected();
            _isConnected = Application.internetReachability != NetworkReachability.NotReachable;
            yield return new WaitForSeconds(5f);
        }

    }
    private void InitAd()
    {
        MaxSdkCallbacks.OnSdkInitializedEvent += sdkConfiguration =>
        {
          #if UNITY_IOS
                    AudienceNetwork.AdSettings.SetAdvertiserTrackingEnabled(sdkConfiguration.AppTrackingStatus == MaxSdkBase.AppTrackingStatus.Authorized);
                   FB.Mobile.SetAdvertiserTrackingEnabled(sdkConfiguration.AppTrackingStatus == MaxSdkBase.AppTrackingStatus.Authorized);
          #endif

    //MaxSdk.ShowMediationDebugger();
            Debug.Log("654654: Initialize");
            m_IsInitialize = true;
            InitializeInterstitialAds();
            InitializeRewardedAds();
            //  InitializeBannerAds();
            if (sdkConfiguration.ConsentDialogState == MaxSdkBase.ConsentDialogState.Applies)
            {
                // Show user consent dialog
                m_IsShowGDPR = true;
            }
            else if (sdkConfiguration.ConsentDialogState == MaxSdkBase.ConsentDialogState.DoesNotApply)
            {
                // No need to show consent dialog, proceed with initialization
                m_IsShowGDPR = false;
            }
          ATT.SetActive(true);
          
        };

        MaxSdk.SetSdkKey(MaxSdkKey);
       MaxSdk.InitializeSdk();



    }
    #region RewardAD
    private void InitializeRewardedAds()
    {
        MaxSdkCallbacks.OnRewardedAdLoadedEvent += OnRewardedAdLoadedEvent;
        MaxSdkCallbacks.OnRewardedAdLoadFailedEvent += OnRewardedAdFailedEvent;
        MaxSdkCallbacks.OnRewardedAdFailedToDisplayEvent += OnRewardedAdFailedToDisplayEvent;
        MaxSdkCallbacks.OnRewardedAdDisplayedEvent += OnRewardedAdDisplayedEvent;
        MaxSdkCallbacks.OnRewardedAdClickedEvent += OnRewardedAdClickedEvent;
        MaxSdkCallbacks.OnRewardedAdHiddenEvent += OnRewardedAdDismissedEvent;
        MaxSdkCallbacks.OnRewardedAdReceivedRewardEvent += OnRewardedAdReceivedRewardEvent;
        
        LoadRewardedAd();


    }
  
    private void LoadRewardedAd()
    {
        MaxSdk.LoadRewardedAd(RewardedAdUnitId);
    }
    private void OnRewardedAdLoadedEvent(string adUnitId)
    {

    }
    private void OnRewardedAdFailedEvent(string adUnitId, int errorCode)
    {
        Debug.Log("654654: Load Reward Failed - " + errorCode.ToString());
        Invoke("LoadRewardedAd", 10f);
    }
    private void OnRewardedAdFailedToDisplayEvent(string adUnitId, int errorCode)
    {
        Debug.Log("654654: Display Reward Failed - " + errorCode.ToString());
        LoadRewardedAd();
    }
    private void OnRewardedAdDisplayedEvent(string adUnitId)
    {

    }
    private void OnRewardedAdClickedEvent(string adUnitId)
    {

    }
    private void OnRewardedAdDismissedEvent(string adUnitId)
    {
        if (m_IsSandEvet)
        {
            Action_RewardPlayer?.Invoke(false);
            m_IsSandEvet = false;
        }
        LoadRewardedAd();
    }
    private void OnRewardedAdReceivedRewardEvent(string adUnitId, MaxSdk.Reward reward)
    {
        if (m_IsSandEvet)
        {
            Action_RewardPlayer?.Invoke(true);
            m_IsSandEvet = false;
        }
        m_LastRewardTime = Time.time;
        LoadRewardedAd();
    }
    #endregion
    #region Interstitial
    private void InitializeInterstitialAds()
    {
        // Attach callbacks
        MaxSdkCallbacks.OnInterstitialLoadedEvent += OnInterstitialLoadedEvent;
        MaxSdkCallbacks.OnInterstitialLoadFailedEvent += OnInterstitialFailedEvent;
        MaxSdkCallbacks.OnInterstitialAdFailedToDisplayEvent += InterstitialFailedToDisplayEvent;
        MaxSdkCallbacks.OnInterstitialHiddenEvent += OnInterstitialDismissedEvent;
        // Load the first interstitial
        LoadInterstitial();
    }
    private void LoadInterstitial()
    {
        MaxSdk.LoadInterstitial(InterstitialAdUnitId);
    }
    private void ShowInterstitial()
    {
        MaxSdk.ShowInterstitial(InterstitialAdUnitId);
    }
    private void OnInterstitialLoadedEvent(string adUnitId)
    {
    }
    private void OnInterstitialFailedEvent(string adUnitId, int errorCode)
    {
        Debug.Log("654654: Load Interstitial Failed - " + errorCode.ToString());
        Invoke("LoadInterstitial", 3f);
    }
    private void InterstitialFailedToDisplayEvent(string adUnitId, int errorCode)
    {
        Debug.Log("654654: Display Interstitial Failed - " + errorCode.ToString());
        LoadInterstitial();
    }
    private void OnInterstitialDismissedEvent(string adUnitId)
    {
        m_LastInterstitialTime = Time.time;
        LoadInterstitial();
    }
    #endregion
    #region Banner
    private void InitializeBannerAds()
    {
        MaxSdk.CreateBanner(BannerAdUnitId, MaxSdkBase.BannerPosition.BottomCenter);
        StartCoroutine(ChangeBannerState());
    }
    private void ToggleBannerVisibility()
    {
        if (m_IsShowBanner)
        {
            MaxSdk.ShowBanner(BannerAdUnitId);
        }
        else
        {
            MaxSdk.HideBanner(BannerAdUnitId);
        }
    }
    private IEnumerator ChangeBannerState()
    {
        while (true)
        {
            ToggleBannerVisibility();
            yield return new WaitForSeconds(10f);
        }
    }
    #endregion
    public void ShowInterstitialVideo()
    {
        float currentTime = Time.time;
        int m_CurrentLevel = PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0) + 1;
        if (MaxSdk.IsInterstitialReady(InterstitialAdUnitId)
            && currentTime - m_LastInterstitialTime > m_InterstitialInterval
            && currentTime - m_LastRewardTime > m_RewardInterval
            && m_CurrentLevel >= m_LevelOfFirstInterstitial)
        {

            ShowInterstitial();
        }
    }
    public void ShowRewardedAd(string _placement)
    {
        m_IsSandEvet = true;

        MaxSdk.ShowRewardedAd(RewardedAdUnitId, _placement);
    }
    public void ShowBanner()
    {
        m_IsShowBanner = true;
    }
}
