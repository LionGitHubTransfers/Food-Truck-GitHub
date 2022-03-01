using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net.Mail;
using LionStudios.Suite.Debugging;
using LionStudios.Suite.Utility.Json;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
using UnityEditor.VersionControl;

#endif

namespace LionStudios.Suite.Core
{
    public sealed class LionSettingsService
    {
        private const string SettingsFilename = "LionKitSettings.txt";
        private const string SettingsDirectory = "LionStudios/Resources/";

        private static ILionSettingsProvider[] _settingsProviders = null;
        private static ILionSettingsProvider[] settingProviders
        {
            get
            {
                if (_settingsProviders == null)
                {
                    LionDebug.Log($"Lion Core: Searching for settings providers...", LionDebug.DebugLogLevel.Verbose);
                    _settingsProviders = NamespaceUtil.GetObjectsOfType<ILionSettingsProvider>();

                    foreach (var p in _settingsProviders)
                    {
                        LionDebug.Log($"Lion Core: Found settings provider {p.ToString()}",  LionDebug.DebugLogLevel.Verbose);
                    }
                }
                return _settingsProviders;
            }
        }

        private static Dictionary<Type, object> _settingsCache;

        public static void InitializeService()
        {
            LionDebug.Log("Lion Core: Initializing Settings Service",  LionDebug.DebugLogLevel.Verbose);
            LoadSettings();
        }

        public static void SaveSettings()
        {
#if UNITY_EDITOR
            LionDebug.Log("Lion Core: Saving Settings", LionDebug.DebugLogLevel.Verbose);
            try
            {
                // gather settings from providers
                Dictionary<string, object> settingsBuffer = new Dictionary<string, object>();
                foreach(var provider in settingProviders)
                {
                    ILionSettingsInfo settings = provider.GetSettings();
                    var json = JsonUtility.ToJson(settings, true);
                    var result = MiniJson.Deserialize(json);
                    settingsBuffer[provider.ToString()] = result;
                }

                // serialize settings
                string settingsJson = MiniJson.Serialize(settingsBuffer, true);
                if (!string.IsNullOrEmpty(settingsJson))
                {
                    string directory = Path.Combine(Application.dataPath, SettingsDirectory);
                    if (!Directory.Exists(directory))
                    {
                        Directory.CreateDirectory(directory);
                    }

                    // write to file
                    File.WriteAllText(Path.Combine(directory, SettingsFilename), settingsJson);
                }
            }
            catch (Exception e)
            {
                LionDebug.LogException(e);
            }
            finally
            {
                AssetDatabase.SaveAssets();
                AssetDatabase.Refresh();
            }
#endif
        }

        public static void LoadSettings()
        {
            LionDebug.Log("Lion Core: Loading Lion Settings...",  LionDebug.DebugLogLevel.Verbose);

            TextAsset settingsFile = (TextAsset) Resources.Load(SettingsFilename.Replace(".txt", ""), typeof(TextAsset));
            if (settingsFile == null)
            {
                LionDebug.Log("Lion Core: Settings file missing. Creating a new one",  LionDebug.DebugLogLevel.Verbose);
                SaveSettings();
                settingsFile = (TextAsset) Resources.Load(SettingsFilename.Replace(".txt", ""), typeof(TextAsset));
            }

            string json = settingsFile.text;
            if (string.IsNullOrEmpty(json))
            {
                // settings json malformed, try re-save
                LionDebug.LogWarning("Lion Core: Failed to load settings. Settings file malformed.");
                return;
            }

            DeserializeSettings(json);
        }

        public static ILionSettingsProvider[] GetAllProviders()
        {
            return settingProviders;
        }

        public static ILionSettingsInfo[] GetAllSettings()
        {
            ILionSettingsInfo[] infos = new ILionSettingsInfo[settingProviders.Length];
            for(int i = 0; i < infos.Length; i++)
            {
                var setting = settingProviders[i].GetSettings();
                infos[i] = setting;
            }
            return infos;
        }

        public static T GetSettings<T>() where T : ILionSettingsInfo
        {
            if (_settingsCache == null) _settingsCache = new Dictionary<Type, object>();
            if (_settingsCache.ContainsKey(typeof(T))) return (T) _settingsCache[typeof(T)];
            
            try
            {
                foreach (var provider in settingProviders)
                {
                    var setting = provider.GetSettings();
                    if (setting.GetType() == typeof(T))
                    {
                        _settingsCache[typeof(T)] = setting;
                        return (T)setting;
                    }
                }
            }catch(Exception e)
            {
                LionDebug.LogError($"Lion Settings Service: Failed to find settings provider for type '{typeof(T)}'."
                                   + "Make sure you have implemented 'ISettingsProvider' interface."
                                   + "If the issue persists please contact Lion Studios support.");
                LionDebug.LogException(e);
            }
            
            return default(T);
        }

        private static void DeserializeSettings(string json)
        {
            if (!string.IsNullOrEmpty(json))
            {
                Dictionary<string, object> jsonDict =
                    MiniJson.Deserialize(json) as Dictionary<string, object>;

                if (jsonDict == null || jsonDict.Count == 0) return;
                foreach (var provider in settingProviders)
                {
                    if (jsonDict.ContainsKey(provider.ToString()))
                    {
                        string settingJson = MiniJson.Serialize(jsonDict[provider.ToString()]);
                        ILionSettingsInfo s = (ILionSettingsInfo)JsonUtility.FromJson(settingJson, provider.GetSettings().GetType());
                        provider.ApplySettings(s);
                    }
                }
            }
        }

        public static void ClearCache()
        {
            _settingsProviders = null;
            _settingsCache.Clear();
        }
    }
}