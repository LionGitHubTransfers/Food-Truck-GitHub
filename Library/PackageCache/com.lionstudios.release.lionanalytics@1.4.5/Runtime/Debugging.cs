using LionStudios.Suite.Debugging;

namespace LionStudios.Suite.Analytics
{
    internal class Debugging
    {
        public static void Log(string msg)
        {
            LionDebug.Log(msg, LionDebug.DebugLogLevel.Default);
        }

        public static void LogEvent(string msg)
        {
            LionDebug.Log(msg, LionDebug.DebugLogLevel.Event);
        }

        public static void LogWarning(string msg)
        {
            LionDebug.Log(msg, LionDebug.DebugLogLevel.Warn);
        }
    }
}
