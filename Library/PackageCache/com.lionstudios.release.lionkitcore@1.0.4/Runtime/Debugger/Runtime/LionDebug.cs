using System;
using LionStudios.Suite.Core;
using UnityEngine;

namespace LionStudios.Suite.Debugging
{
    
    /**
            @api {get} /Debugger Debugger UI Settings
            @apiName Debugger UI Settings
            @apiGroup Lion Debugger
            @apiVersion 1.0.0
            
            @apiDescription 
            <img src="../Images/Debugger.png" width="920" height="125">
            <p>Enable Lion Runtime Debugger - Toggle this to use Lion Studio's on-screen debugger (Disabled on store builds)</p>
            <p>Show at Startup - Show Runtime debugger immediately after opening the app (Disabled on store builds)</p>
            <p>Logging Level - Select how much info Lion Studios outputs to Unitys Debug Log</p>
                <ul><li> None - Hide all output from Lionkit</li>
                <li>Default - Log Standard output</li>
                <li>Event - Log only firing of analytics events</li>
                <li>Event_Verbose - Log verbose analytics (Available in 1.1.34+) </li>
                <li>Verbose - Show all information</li></ul>
         */
    public class LionDebug : ILionSettingsProvider
    {
        private static LionDebugSettings _settings = new LionDebugSettings();
        public class LionDebugSettings : ILionSettingsInfo
        {
            [Header("General")]
            public bool debuggerEnabled = true;
            public bool showDebuggerAtStartup = true;
            public DebugLogLevel debugLogLevel = DebugLogLevel.Default;
        }

        public enum DebugLogLevel : int
        {
            None = 0, // hide all output from Lion Kit
            Warn,
            Error,
            Event, // log only analytic/Ad events
            Default, // log standard output
            Verbose // show all logs
        }
        
        public static void LogFormat(DebugLogLevel logLevel, string msg, params object[] args)
        {
            Log(string.Format(msg, args), logLevel);
        }
        
        public static void Log(string msg, DebugLogLevel logLevel = DebugLogLevel.Default)
        {
            if(_settings != null && _settings.debugLogLevel >= logLevel)
            {
                UnityEngine.Debug.Log(msg);
            }
        }
        
        public static void LogErrorFormat(string msg, params string[] args)
        {
            LogError(string.Format(msg, args));
        }
        
        public static void LogErrorFormat(UnityEngine.Object context, string msg, params string[] args)
        {
            LogError(context, string.Format(msg, args));
        }
        
        public static void LogError(string msg)
        {
            UnityEngine.Debug.LogError(msg);
        }
        
        public static void LogError(UnityEngine.Object context, string msg)
        {
            UnityEngine.Debug.LogError(msg, context);
        }
        
        public static void LogWarning(string msg)
        {
            UnityEngine.Debug.LogWarning(msg);
        }

        public static void LogException(Exception e)
        {
            UnityEngine.Debug.LogException(e);
        }

        public ILionSettingsInfo GetSettings()
        {
            return _settings;
        }

        public void ApplySettings(ILionSettingsInfo newSettings)
        {
            _settings = (LionDebugSettings)newSettings;
        }
    }
}