using System;
using System.Collections.Generic;
using LionStudios.Suite.Analytics.Heartbeat;
using UnityEngine;

namespace LionStudios.Suite.Analytics
{
    public class LionAnalyticsApplication : MonoBehaviour
    {
        #region Static
        private static LionAnalyticsApplication instance;

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
        private static void OnAppStart()
        {
            GameObject appObj = new GameObject("LionAnalyticsApplication");
            instance = appObj.AddComponent<LionAnalyticsApplication>();

            LionAnalytics.OnLogEvent += instance.OnEventFired;

            GameObject.DontDestroyOnLoad(appObj);
        }

        private const string timeInAppKey = "com.lionstudios.analytics.timeinapp";
        internal static int GetTotalTimeInApp()
        {
            if (instance == null) return 0;
            return Mathf.RoundToInt(instance._timeInApp);
        }
#endregion

        #region Instance
        private HeartbeatManager _heartbeat;
        private float _timeInApp = 0f;

        private void OnEnable()
        {
            LoadAppTime();
        }

        private void Start()
        {
            _heartbeat = new HeartbeatManager();
        }
        
        private void Update()
        {
            _timeInApp += Time.deltaTime;
            _heartbeat?.CheckForHeartbeat();
        }

        private void OnDisable()
        {
            PlayerPrefs.SetInt(timeInAppKey, Mathf.RoundToInt(_timeInApp));
        }        

        private void OnApplicationPause(bool pauseStatus)
        {
            if (pauseStatus)
            {
                SaveAppTime();
            }
            else
            {
                _heartbeat?.ResetHeartbeat();
            }
        }

        private void OnApplicationQuit()
        {
            SaveAppTime();
        }

        private void OnEventFired(LionGameEvent gameEvent, bool isUAEvent, params Runtime.Sdk.SdkId[] exclusiveTo)
        {
            _heartbeat?.ResetHeartbeat();
        }

        private void LoadAppTime()
        {
            _timeInApp = PlayerPrefs.GetInt(timeInAppKey, 0);
        }
        
        private void SaveAppTime()
        {
            PlayerPrefs.SetInt(timeInAppKey, Mathf.RoundToInt(_timeInApp));
        }
        #endregion
    }
}