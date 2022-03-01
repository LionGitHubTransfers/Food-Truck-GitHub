using System;
using System.CodeDom;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Reflection.Emit;
using System.Text;
using System.Threading.Tasks;
using JetBrains.Annotations;
using LionStudios.Suite.Core;
using LionStudios.Suite.Debugging;
using UnityEngine;
using UnityEditor;
using UnityEditor.Graphs;
using UnityEngine.UIElements;

namespace LionStudios.Suite.Editor
{
    public class LionSettingsManagerWindow : EditorWindow
    {
        private Vector2 _navListScrollPos;
        private Vector2 _contentScrollPos;

        // styles
        private GUIStyle _backgroundStyle;
        private GUIStyle _platformIconStyle;
        private GUIStyle _navWindowStyle;
        private GUIStyle _contentWindowStyle;
        private GUIStyle _toolbarStyle;
        private GUIStyle _toolbarButtonStyle;
        private GUIStyle _navButtonStyle;
        private GUIStyle _navHeaderStyle;

        // icons
        private GUIContent _saveIcon;
        private GUIContent _platformIosIcon;
        private GUIContent _platformAndroidIcon;
        private GUIContent _platformWindowsIcon;

        // color
        private Color _color_ultraBlack;
        private Color _color_skyBlue;
        private Color _color_regalRed;
        private Color _color_lionsMainYellow;
        private Color _color_serengetiGreen;
        private Color _color_rarePink;
        private Color _color_royalePurple;
        private Color _color_grayScale_1;
        private Color _color_grayScale_2;
        private Color _color_grayScale_3;
        private Color _color_grayScale_4;
        private Color _color_grayScale_5;
        private Color _color_grayScale_6;

        private GUIContent PlatformIcon
        {
            get
            {
                switch (EditorUserBuildSettings.activeBuildTarget)
                {
                    case BuildTarget.Android:
                        return _platformAndroidIcon;
                    case BuildTarget.iOS:
                        return _platformIosIcon;
                    default:
                        return _platformWindowsIcon;
                }
            }
        }
        
        private void LoadColors()
        {
            // colors
            _color_ultraBlack = ColorUtil.Normalized(0, 0, 0, 255 * 0.4f);
            _color_skyBlue = ColorUtil.Normalized(75, 174, 201, 255);
            _color_regalRed = ColorUtil.Normalized(218, 73, 75, 255);
            _color_lionsMainYellow = ColorUtil.Normalized(255, 158, 29, 255);
            _color_serengetiGreen = ColorUtil.Normalized(61, 181, 168, 255);
            _color_rarePink = ColorUtil.Normalized(218, 73, 75, 255);
            _color_royalePurple = ColorUtil.Normalized(100, 65, 226, 255);

            _color_grayScale_1 = ColorUtil.Normalized(229, 231, 226, 255);
            _color_grayScale_2 = ColorUtil.Normalized(214, 217, 206, 255);
            _color_grayScale_3 = ColorUtil.Normalized(189, 194, 187, 255);
            _color_grayScale_4 = ColorUtil.Normalized(142, 153, 155, 255);
            _color_grayScale_5 = ColorUtil.Normalized(101, 114, 122, 255);
            _color_grayScale_6 = ColorUtil.Normalized(62, 78, 86, 255);
        }
        
        private void LoadStyles()
        {
            // styles
            _backgroundStyle = new GUIStyle(EditorStyles.helpBox);
            _backgroundStyle.normal.background = TextureUtil.CreateTexture(1, 1, _color_ultraBlack);

            _platformIconStyle = new GUIStyle(EditorStyles.boldLabel);
            _platformIconStyle.normal.background = TextureUtil.CreateTexture(1, 1, _color_rarePink);
            _platformIconStyle.padding = new RectOffset(0, 0, 0, 0);
            _platformIconStyle.margin = new RectOffset(0, 0, 0, 0);
            _platformIconStyle.alignment = TextAnchor.MiddleCenter;
            _platformIconStyle.imagePosition = ImagePosition.ImageOnly;

            _navWindowStyle = new GUIStyle(EditorStyles.helpBox);
            _navWindowStyle.padding = new RectOffset(0, 0, 0, 20);
            _navWindowStyle.normal.background = TextureUtil.CreateTexture(1, 1, _color_regalRed * 0.8f);

            _navButtonStyle = new GUIStyle(EditorStyles.miniButton);
            _navButtonStyle.margin = new RectOffset(0, 0, 5, 5);
            _navButtonStyle.fixedHeight = 30;
            _navButtonStyle.stretchHeight = true;
            _navButtonStyle.fontStyle = FontStyle.Bold;
            _navButtonStyle.fontSize = 16;
            _navButtonStyle.normal.background = TextureUtil.CreateTexture(1, 1, _color_ultraBlack);
            _navButtonStyle.onNormal.background = TextureUtil.CreateTexture(1, 1, _color_ultraBlack);
            _navButtonStyle.hover.background = TextureUtil.CreateTexture(1, 1, _color_regalRed);
            _navButtonStyle.onHover.background = TextureUtil.CreateTexture(1, 1, _color_regalRed);
            _navButtonStyle.active.background = TextureUtil.CreateTexture(1, 1, _color_regalRed);
            _navButtonStyle.onActive.background = TextureUtil.CreateTexture(1, 1, _color_regalRed);
            _navButtonStyle.focused.background = TextureUtil.CreateTexture(1, 1, _color_regalRed);
            _navButtonStyle.onFocused.background = TextureUtil.CreateTexture(1, 1, _color_regalRed);

            _navHeaderStyle = new GUIStyle(EditorStyles.largeLabel);
            _navHeaderStyle.margin = new RectOffset(0, 0, 15, 3);
            _navHeaderStyle.fixedHeight = 30;
            _navHeaderStyle.stretchHeight = true;
            _navHeaderStyle.fontStyle = FontStyle.Bold;
            _navHeaderStyle.fontSize = 16;
            _navHeaderStyle.alignment = TextAnchor.MiddleCenter;
            _navHeaderStyle.normal.textColor = Color.white;
            _navHeaderStyle.normal.background = TextureUtil.CreateTexture(1, 1, _color_lionsMainYellow * 0.2f);

            _contentWindowStyle = new GUIStyle(EditorStyles.helpBox);
            _contentWindowStyle.normal.background = TextureUtil.CreateTexture(1, 1, _color_regalRed * 0.5f);

            _toolbarStyle = new GUIStyle(EditorStyles.toolbar);
            _toolbarStyle.stretchHeight = true;
            _toolbarStyle.fixedHeight = 30;
            _toolbarStyle.normal.background = TextureUtil.CreateTexture(1, 1, _color_ultraBlack);

            _toolbarButtonStyle = new GUIStyle(EditorStyles.toolbarButton);
            _toolbarButtonStyle.stretchHeight = true;
            _toolbarButtonStyle.fixedHeight = 30;
        }

        private void LoadIcons()
        {
            // icons
            _saveIcon = EditorGUIUtility.IconContent("SaveAs@2x");
            _platformIosIcon = EditorGUIUtility.IconContent("BuildSettings.iPhone@2x");
            _platformAndroidIcon = EditorGUIUtility.IconContent("d_BuildSettings.Android@2x");
            _platformWindowsIcon = EditorGUIUtility.IconContent("d_BuildSettings.Metro@2x");
        }

        private int _selectedSettingIdx;
        private string[] _settingProviderNames;
        private bool[] _settingToggles;
        private void LoadSettings()
        {
            _settingProviderNames = new string[0];
            _settingToggles = new bool[0];
            
            var settingProviders = LionSettingsService.GetAllProviders();
            if (settingProviders == null) return;

            _settingToggles = new bool[settingProviders.Length];
            _settingProviderNames = new string[settingProviders.Length];

            for (int i = 0; i < settingProviders.Length; i++)
            {
                ILionSettingsProvider provider = settingProviders[i];
                if (provider != null)
                {
                    string providerName = provider.ToString();
                    
                    ILionSettingsInfo settings = provider.GetSettings();
                    if (settings != null)
                    {
                        string[] providerNameSplit = providerName.Split('.');
                        providerName = providerNameSplit[providerNameSplit.Length - 1];
                        providerName = providerName.Replace("Lion", "");
                        providerName = providerName.SplitCamelCase();
                        
                        LabelOverrideAttribute nameOverride =
                            settings.GetType().GetCustomAttribute<LabelOverrideAttribute>();
                        if (nameOverride != null)
                        {
                            _settingProviderNames[i] = nameOverride.label;
                        }
                        else
                        {
                            _settingProviderNames[i] = providerName;
                        }
                    }
                }
            }

            SelectSetting(0);
        }

        private void SelectSetting(int idx)
        {
            LionSettingsService.SaveSettings();
            if (idx < 0 || idx >= _settingProviderNames.Length) return;
            for (int i = 0; i < _settingToggles.Length; i++) _settingToggles[i] = idx == i;
            _selectedSettingIdx = idx;
        }

        private void Reload()
        {
            if (EditorApplication.isCompiling)
            {
                return;
            }
            
            LoadColors();
            LoadIcons();
            LoadSettings();
        }

        private void OnValidate()
        {
            LionSettingsService.SaveSettings();
            Reload();
        }

        private void OnEnable()
        {
            Reload();
        }

        private void OnFocus()
        {
            if (Application.isPlaying)
            {
                return;
            }

            LionSettingsService.SaveSettings();
        }

        private void OnGUI()
        {
            if(_toolbarStyle == null)
            {
                LoadStyles();
            }

            // header
            EditorGUILayout.BeginHorizontal(_toolbarStyle);
            {
                if (GUILayout.Button(_saveIcon, _toolbarButtonStyle))
                {
                    LionSettingsService.SaveSettings();
                }

                GUILayout.FlexibleSpace();
            }
            EditorGUILayout.EndHorizontal();

            EditorGUILayout.BeginHorizontal(_backgroundStyle);
            {
                // Nav list
                _navListScrollPos =
                    EditorGUILayout.BeginScrollView(_navListScrollPos, _navWindowStyle, GUILayout.MaxWidth(200));
                {
                    // draw platform ico
                    if (GUILayout.Button(PlatformIcon, _platformIconStyle))
                    {
                        BuildPlayerWindow.ShowBuildPlayerWindow();
                    }

                    // draw nav header
                    GUILayout.Label("Settings", _navHeaderStyle);

                    // draw nav list
                    for (int i = 0; i < _settingProviderNames.Length; i++)
                    {
                        if (_settingProviderNames[i] != null)
                        {
                            DrawTabButton(i);
                        }
                    }
                }
                EditorGUILayout.EndScrollView();

                // content view
                _contentScrollPos = EditorGUILayout.BeginScrollView(_contentScrollPos, _contentWindowStyle);
                {
                    // draw content view
                    DrawSettings(_selectedSettingIdx);
                }
                EditorGUILayout.EndScrollView();
            }
            EditorGUILayout.EndHorizontal();
        }

        private void DrawTabButton(int settingIdx)
        {
            if (settingIdx < 0 || settingIdx >= _settingProviderNames.Length) return;
            bool lastToggleVal = _settingToggles[settingIdx];
            bool currentToggleVal = GUILayout.Toggle(_settingToggles[settingIdx], _settingProviderNames[settingIdx], _navButtonStyle);
            if (lastToggleVal != currentToggleVal) SelectSetting(settingIdx);
        }

        private void DrawSettings(int settingIdx)
        {
            if (settingIdx < 0 || settingIdx >= _settingProviderNames.Length) return;

            ILionSettingsProvider provider = LionSettingsService.GetAllProviders()[settingIdx];
            object settings = provider.GetSettings();

            DrawProviderFields(ref provider, ref settings);
            DrawButtons(ref provider, ref settings);
        }

        private void DrawButtons(ref ILionSettingsProvider provider, ref object settings)
        {
            List<MethodInfo> allMethods = new List<MethodInfo>();

            allMethods.AddRange(provider.GetType().GetMethods(
                BindingFlags.Public
                | BindingFlags.Instance
                | BindingFlags.Default));

            allMethods.AddRange(settings.GetType().GetMethods(
                BindingFlags.Public
                | BindingFlags.Instance
                | BindingFlags.Default));

            foreach (MethodInfo method in allMethods)
            {
                SettingsButtonAttribute buttonAttr = method.GetCustomAttribute<SettingsButtonAttribute>();
                if(buttonAttr != null)
                {
                    string label = string.IsNullOrEmpty(buttonAttr.label) 
                        ? method.Name.SplitCamelCase() : buttonAttr.label;

                    if (GUILayout.Button(label))
                    {
                        method.Invoke(provider, null);
                    }
                }
            }
        }
        
        private void HandleAttributes(FieldInfo field)
        {
            HeaderAttribute headerAttr = field.GetCustomAttribute<HeaderAttribute>();
            if (headerAttr != null)
            {
                EditorGUILayout.Space(10);
                EditorGUILayout.LabelField(headerAttr.header, EditorStyles.boldLabel);
            }

            SpaceAttribute spaceAttr = field.GetCustomAttribute<SpaceAttribute>();
            if(spaceAttr != null)
            {
                EditorGUILayout.Space(spaceAttr.height);
            }
        }

        private void DrawProviderFields(ref ILionSettingsProvider provider, ref object settings)
        {
            FieldInfo[] fields = settings.GetType().GetFields(
                BindingFlags.Public
                | BindingFlags.Instance
                | BindingFlags.Default);

            for (int i = 0; i < fields.Length; i++)
            {
                FieldInfo field = fields[i];
                object newVal = null;

                // Handle non-unity custom classes
                newVal = DrawField(field, settings);

                if (!object.Equals(field.GetValue(settings), newVal))
                {
                    field.SetValue(settings, newVal);
                    provider.ApplySettings((ILionSettingsInfo) settings);
                }
            }
        }

        private object DrawField(FieldInfo field, object parent)
        {
            object val = field.GetValue(parent);
            object newVal = val;

            try
            {
                GUIContent fieldLabel = new GUIContent(GetFieldName(field));
                Type fieldType = field.FieldType;

                // handle attributes
                HandleAttributes(field);

                if (fieldType.IsArray)
                {
                    newVal = DrawArrayField(field, parent);
                }
                else
                {
                    if (val is int)
                    {
                        newVal = EditorGUILayout.IntField(fieldLabel, (int) val);
                    }
                    else if (val is float)
                    {
                        newVal = EditorGUILayout.FloatField(fieldLabel, (float) val);
                    }
                    else if (val is bool)
                    {
                        newVal = EditorGUILayout.Toggle(fieldLabel, (bool) val);
                    }
                    else if (val is string)
                    {
                        newVal = EditorGUILayout.TextField(fieldLabel, (string) val);
                    }
                    else if (val is Color)
                    {
                        newVal = EditorGUILayout.ColorField(fieldLabel, (Color) val) as object;
                    }
                    else if (fieldType.IsInterface)
                    {
                        newVal = EditorGUILayout.ObjectField(fieldLabel, (UnityEngine.Object) val, field.GetType(),
                            false) as object;
                    }
                    else if (val is Enum)
                    {
                        if (field.GetCustomAttribute<EnumFlagsAttribute>() != null)
                        {
                            newVal = EditorGUILayout.EnumFlagsField(fieldLabel, (Enum) val, includeObsolete: false);
                        }
                        else
                        {
                            newVal = EditorGUILayout.EnumPopup(fieldLabel, (Enum) val);
                        }
                    }
                    else if (val is Color)
                    {
                        newVal = EditorGUILayout.ColorField(fieldLabel, (Color) val);
                    }
                    else if (fieldType.IsClass && !fieldType.IsEnum && !fieldType.IsPrimitive &&
                             fieldType != typeof(string) && !fieldType.IsAssignableFrom(typeof(UnityEngine.Component)))
                    {
                        if (fieldType.IsSubclassOf(typeof(UnityEngine.MonoBehaviour)))
                        {
                            newVal =
                                EditorGUILayout.ObjectField(fieldLabel, (UnityEngine.Object) val, fieldType, false) as
                                    object;
                        }
                        else
                        {
                            EditorGUILayout.LabelField(fieldLabel);
                            object inst = field.GetValue(parent);
                            if (inst == null)
                            {
                                inst = Activator.CreateInstance(fieldType);
                            }

                            EditorGUI.indentLevel++;
                            FieldInfo[] classFields = inst.GetType().GetFields(
                                BindingFlags.Public
                                | BindingFlags.Instance
                                | BindingFlags.Default);

                            for (int i = 0; i < classFields.Length; i++)
                            {
                                object classFieldVal = DrawField(classFields[i], inst);
                                if (!object.Equals(classFields[i].GetValue(inst), classFieldVal))
                                {
                                    classFields[i].SetValue(inst, classFieldVal);
                                }
                            }

                            newVal = inst;
                            EditorGUI.indentLevel--;
                        }
                    }
                }
            }
            catch (MissingFieldException missingFieldException)
            {
                LionDebug.LogWarning("Field type mismatch or missing. Reloading assets.");
                AssetDatabase.Refresh(ImportAssetOptions.Default);
            }
            catch (TypeLoadException typeLoadException)
            {
                LionDebug.LogError($"Failed to load type '{typeLoadException.TypeName}' for settings field." +
                                   $"\nException:{typeLoadException.Message}");
            }
            catch (Exception exception)
            {
                LionDebug.LogException(exception);
            }

            return newVal;
        }
        
        private object DrawArrayField(FieldInfo field, object parent)
        {
            object[] value = field.GetValue(parent) as object[];
            string arrayLabel = string.Format("{0} (Count: {1})", GetFieldName(field), value.Length);
            EditorGUILayout.LabelField(arrayLabel);

            EditorGUI.indentLevel++;
            for (int i = 0; i < value.Length; i++)
            {
                FieldInfo[] fields = value[i].GetType().GetFields(
                    BindingFlags.Public
                    | BindingFlags.Instance
                    | BindingFlags.Default);
                
                    Type fieldType = value[i].GetType();
                    object newVal = value[i];
                    string fieldLabel = "";
                    
                    if (value[i] is int)
                    {
                        newVal = EditorGUILayout.IntField(fieldLabel, (int) value[i]);
                    }
                    else if (value[i] is float)
                    {
                        newVal = EditorGUILayout.FloatField(fieldLabel, (float) value[i]);
                    }
                    else if (value[i] is bool)
                    {
                        newVal = EditorGUILayout.Toggle(fieldLabel, (bool) value[i]);
                    }
                    else if (value[i] is string)
                    {
                        newVal = EditorGUILayout.TextField(fieldLabel, (string) value[i]);
                    }
                    else if (fieldType.IsClass && !fieldType.IsEnum && !fieldType.IsPrimitive &&
                             fieldType != typeof(string) && !fieldType.IsAssignableFrom(typeof(UnityEngine.Component)))
                    {
                        if (fieldType.IsSubclassOf(typeof(UnityEngine.MonoBehaviour)))
                        {
                            newVal =
                                EditorGUILayout.ObjectField(fieldLabel, (UnityEngine.Object) value[i], fieldType, false) as
                                    object;
                        }
                        else
                        {
                            EditorGUILayout.LabelField(fieldLabel);
                            object inst = value[i];
                            if (inst == null)
                            {
                                inst = Activator.CreateInstance(inst.GetType());
                            }
                            
                            FieldInfo[] classFields = inst.GetType().GetFields(
                                BindingFlags.Public
                                | BindingFlags.Instance
                                | BindingFlags.Default);

                            for (int k = 0; k < classFields.Length; k++)
                            {
                                object classFieldVal = DrawField(classFields[k], inst);
                                if (!object.Equals(classFields[k].GetValue(inst), classFieldVal))
                                {
                                    classFields[k].SetValue(inst, classFieldVal);
                                }
                            }

                            newVal = inst;
                        }
                    }

                    value[i] = newVal;
            }
            
            EditorGUI.indentLevel--;
            return value;
        }

        private string GetFieldName(FieldInfo field)
        {
            if (field == null) return string.Empty;
            
            // process field name
            StringBuilder sb = new StringBuilder(field.Name);
            sb.Replace("_", "");
            if (!char.IsUpper(sb[0])) sb[0] = char.ToUpper(sb[0]);
            return sb.ToString().SplitCamelCase();
        }
    }
}