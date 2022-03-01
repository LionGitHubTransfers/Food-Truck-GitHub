#if UNITY_EDITOR
using LionStudios.Suite.Debugging;
using UnityEngine;
using UnityEditor;
using UnityEditor.Compilation;

namespace LionStudios.Suite.Editor.Platform
{
    public static class LionPlatformDefine
    {
        public static void TryAddDefineSymbol(string symbol)
        {
            if (string.IsNullOrEmpty(symbol))
            {
                return;
            }

            LionDebug.Log($"Attempting to add define symbol {symbol}",
                LionDebug.DebugLogLevel.Verbose);
            
            if (!GroupHasDefineSymbol(BuildTargetGroup.Android, symbol))
            {
                AddDefineSymbolToGroup(BuildTargetGroup.Android, symbol);
            }
            
            if (!GroupHasDefineSymbol(BuildTargetGroup.iOS, symbol))
            {
                AddDefineSymbolToGroup(BuildTargetGroup.iOS, symbol);
            }
        }
        public static void TryRemoveDefineSymbol(string symbol)
        {
            if (string.IsNullOrEmpty(symbol))
            {
                return;
            }
            
            LionDebug.Log($"Attempting to remove define symbol {symbol}",
                LionDebug.DebugLogLevel.Verbose );
            
            if (GroupHasDefineSymbol(BuildTargetGroup.Android, symbol))
            {
                RemoveDefineSymbolFromGroup(BuildTargetGroup.Android, symbol);
            }
            
            if (GroupHasDefineSymbol(BuildTargetGroup.iOS, symbol))
            {
                RemoveDefineSymbolFromGroup(BuildTargetGroup.iOS, symbol);
            }
        }
        private static void AddDefineSymbolToGroup(BuildTargetGroup group, string newSymbol)
        {
            string symbols = PlayerSettings.GetScriptingDefineSymbolsForGroup(group);
            if (string.IsNullOrEmpty(symbols))
            {
                symbols = newSymbol;
            }
            else if (symbols.Contains(newSymbol) == false)
            {
                symbols += $";{newSymbol}";
            }

            PlayerSettings.SetScriptingDefineSymbolsForGroup(group, symbols);
        }
        private static void RemoveDefineSymbolFromGroup(BuildTargetGroup group, string symbol)
        {
            string symbols = PlayerSettings.GetScriptingDefineSymbolsForGroup(group);
            if (string.IsNullOrEmpty(symbols))
            {
                return;
            }

            symbols = symbols.Replace(symbol, "");
            PlayerSettings.SetScriptingDefineSymbolsForGroup(group, symbols);
        }
        private static bool GroupHasDefineSymbol(BuildTargetGroup group, string symbol)
        {
            string symbols = PlayerSettings.GetScriptingDefineSymbolsForGroup(group);
            return !string.IsNullOrEmpty(symbols) && symbols.Contains(symbol);
        }
    }

    [CustomEditor(typeof(LionPlatformDefine), isFallback=true)]
    public class LionPlatformDefineEditor : UnityEditor.Editor
    {
        
    }
}
#endif