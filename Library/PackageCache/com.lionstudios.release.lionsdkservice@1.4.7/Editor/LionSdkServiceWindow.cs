using System.Text.RegularExpressions;
using LionStudios.Runtime.Sdk;
using UnityEditor;
using UnityEngine;

namespace LionStudios.Editor.Sdk
{
    public class LionSdkServiceWindow : EditorWindow
    {
        [MenuItem("LionStudios/SDK Service")]
        public static void ShowWindow()
        {
            var window = GetWindow<LionSdkServiceWindow>();
            window.titleContent = new GUIContent("Installed SDKs");
            window.ShowAuxWindow();
        }

        private void OnGUI()
        {
            LionSdkCollection sdkCollection = LionSdkService.GetRuntimeSdkInfos();
            if (sdkCollection == null)
            {
                GUILayout.Label("SDKs not loaded. Please Reload!");
                if (GUILayout.Button("Reload SDKs", GUILayout.MinHeight(30)))
                {
                    LionSdkServiceEditor.ReloadSdks();
                }
                return;
            }

            GUILayout.Label("Installed SDKs", EditorStyles.boldLabel);
            GUILayout.Label("SDKs are detected based on their default installation locations. " +
                            "Sdks not present in their default locations will not be detected.",
                EditorStyles.wordWrappedLabel);

            bool defineScriptingSymbols = LionSdkInfoRuntime.RuntimeInfo.defineScriptingSymbols;
            LionSdkInfoRuntime.RuntimeInfo.defineScriptingSymbols = EditorGUILayout.Toggle(
                "Define SDK Scripting Symbols",
                defineScriptingSymbols, GUILayout.Width(650));
            
            
            using (new GUILayout.VerticalScope(EditorStyles.helpBox))
            {
                foreach (LionSdkInfo sdk in sdkCollection)
                {
                    DrawSdkStatus(sdk);
                }
            }
            
            GUILayout.FlexibleSpace();
            if (GUILayout.Button("Reload SDKs", GUILayout.MinHeight(30)))
            {
                LionSdkServiceEditor.ReloadSdks();
            }
        }

        private void DrawReloadingSdks()
        {
            EditorGUILayout.BeginVertical();
            {
                GUILayout.FlexibleSpace();
                EditorGUILayout.BeginHorizontal();
                {
                    GUILayout.FlexibleSpace();
                    GUILayout.Label("Reloading SDKs", EditorStyles.largeLabel);
                    GUILayout.FlexibleSpace();
                }
                EditorGUILayout.EndHorizontal();
            }
            GUILayout.FlexibleSpace();
            EditorGUILayout.EndVertical();
            
            GUILayout.FlexibleSpace();
        }

        private void DrawSdkStatus(LionSdkInfo sdk)
        {
            EditorGUILayout.BeginHorizontal(EditorStyles.boldLabel);
            {
                Rect nameRect;
                Rect installRect;

                string sdkName = ((SdkId) sdk.ID).ToString();
                sdkName = Regex.Replace(sdkName, "([a-z])([A-Z])", "$1 $2");
                GUILayout.Label(sdkName, EditorStyles.label);
                nameRect = GUILayoutUtility.GetLastRect();

                GUILayout.FlexibleSpace();

                Color prevCol = GUI.color;
                Color installCol = Color.red;
                string installString = "Not Supported";

                if (sdk.IsSupported)
                {
                    installCol = sdk.IsInstalled ? Color.green : Color.red;
                    installString = sdk.IsInstalled ? "Installed" : "Not Installed";
                }

                GUI.color = installCol;
                GUILayout.Label(installString);
                installRect = GUILayoutUtility.GetLastRect();
                GUI.color = prevCol;

                // draw line
                DrawStatusLine(nameRect, installRect, Color.black * 0.5f);
            }
            EditorGUILayout.EndHorizontal();
        }

        private void DrawStatusLine(Rect from, Rect to, Color color)
        {
            Vector3 fromPos = from.center;
            Vector3 toPos = to.center;

            fromPos.x += from.width / 2;
            fromPos.y += from.height / 2;
            
            toPos.x -= to.width / 2;
            toPos.y += to.height / 2;
            
            Handles.BeginGUI();
            Handles.color = color;
            Handles.DrawDottedLine(fromPos, toPos, 0.3f);
            Handles.EndGUI();
        }
    }
}