using System.Collections.Generic;
using UnityEngine;
using com.adjust.sdk;
using Facebook.Unity;
using GameAnalyticsSDK;
using LionStudios;

public static class AnalyticsManager
{


	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
	private static void OnGameStart()
	{
		// do pre-initialization here (SDK params)
		////LionKit.OnInitialized += () =>
		//{
		// MAX information available for use
		// do Facebook init + Start App (See ATT Documentation for Facebook ATE)
		// do Adjust init (See ATT Documentation for iOS 14.5 Support)
		// check Firebase dependencies (subscribe to events within)
		// do event subscription...

		if (!FB.IsInitialized)
		{
			// Initialize the Facebook SDK
			FB.Init(InitCallback, OnHideUnity);
		}
		else
		{
			// Already initialized, signal an app activation App Event
			FB.ActivateApp();
		}



		if (IsAuthorized()) GameAnalytics.Initialize();




		//};
	}

	private static bool IsAuthorized()
	{
#if UNITY_IOS
		var sdkConfiguration = MaxSdk.GetSdkConfiguration();
		return sdkConfiguration.AppTrackingStatus == MaxSdkBase.AppTrackingStatus.Authorized;
#endif

		return true;
	}





	private static void InitCallback()
	{
		if (FB.IsInitialized)
		{
			// Signal an app activation App Event
			FB.ActivateApp();
			// Continue with Facebook SDK
			// ...

#if UNITY_IOS
			var isAuthorized = IsAuthorized();
		//	AudienceNetwork.AdSettings.SetAdvertiserTrackingEnabled(isAuthorized);
			FB.Mobile.SetAdvertiserTrackingEnabled(isAuthorized);
#endif
		}
		else
		{
			Debug.Log("Failed to Initialize the Facebook SDK");
		}
	}

	private static void OnHideUnity(bool isGameShown)
	{
		if (!isGameShown)
		{
			// Pause the game - we will need to hide
			Time.timeScale = 0;
		}
		else
		{
			// Resume the game - we're getting focus again
			Time.timeScale = 1;
		}
	}
}
