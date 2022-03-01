#if UNITY_EDITOR
using System;
using System.IO;
using UnityEditor;
using System.Text.RegularExpressions;
using UnityEngine;

namespace LionStudios.Suite.Editor
{
    [CustomPropertyDrawer(typeof(EnumFlagsAttribute))]
    public class EnumFlagsAttributeDrawer : PropertyDrawer
    {
        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            //EditorGUI.showMixedValue = property.hasMultipleDifferentValues;
            label = EditorGUI.BeginProperty(position, label, property);
            EditorGUI.BeginChangeCheck();
            var oldValue = (Enum)fieldInfo.GetValue(property.serializedObject.targetObject);
            var newValue = EditorGUI.EnumFlagsField(position, label, oldValue);
            if (EditorGUI.EndChangeCheck())
            {
                property.intValue = (int)Convert.ChangeType(newValue, fieldInfo.FieldType);
            }
            EditorGUI.EndProperty();
        }
    }

    public static class EditorUtility
    {
        public static void DeleteAllPersistentData()
        {
            Database.DeleteAllData();
        }
        
        public static T[] GetAllAssets<T>() where T : UnityEngine.Object
        {
            string[] assetGUIDs = AssetDatabase.FindAssets("t:" + typeof(T));
            T[] assets = new T[assetGUIDs.Length];
            for (int i = 0; i < assetGUIDs.Length; i++)
            {
                assets[i] = AssetDatabase.LoadAssetAtPath<T>(AssetDatabase.GUIDToAssetPath(assetGUIDs[i]));
            }
            return assets;
        }
        
        public static void ReplaceInFile(string filePath, string searchText, string replaceText)
        {
            var content = string.Empty;
            using (StreamReader reader = new StreamReader( filePath ))
            {
                content = reader.ReadToEnd();
                reader.Close();
            }

            content = Regex.Replace( content, searchText, replaceText );

            using (StreamWriter writer = new StreamWriter( filePath ))
            {
                writer.Write( content );
                writer.Close();
            }
        }
    }
}
#endif