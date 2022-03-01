using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Text.RegularExpressions;
using LionStudios.Suite.Utility.Json;
using UnityEngine;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace LionStudios.Suite
{
    public class EnumFlagsAttribute : PropertyAttribute
    {
    }

    public static class TextureUtil
    {
        public static Texture2D CreateTexture(int width, int height, Color fillColor, bool updateMips = false)
        {
            Texture2D tex = new Texture2D(width, height);
            for (int x = 0; x < width; x++)
            {
                for (int y = 0; y < height; y++)
                {
                    tex.SetPixel(x, y, fillColor);
                }
            }

            tex.Apply(updateMipmaps: updateMips);
            return tex;
        }
    }

    public static class StringUtil
    {
        public static Dictionary<string, string> ToStringDict(IDictionary<string, object> dict)
        {
            if (dict == null)
            {
                return null;
            }

            var newDict = new Dictionary<string, string>();
            foreach (KeyValuePair<string, object> kvp in dict)
            {
                newDict[kvp.Key] = kvp.Value.ToString();
            }

            return newDict;
        }
        public static string ToSnakeCase(this string text)
        {
            if (string.IsNullOrEmpty(text))
            {
                return text;
            }

            var builder = new StringBuilder(text.Length + Math.Min(2, text.Length / 5));
            var previousCategory = default(UnicodeCategory?);

            for (var currentIndex = 0; currentIndex < text.Length; currentIndex++)
            {
                var currentChar = text[currentIndex];
                if (currentChar == '_')
                {
                    builder.Append('_');
                    previousCategory = null;
                    continue;
                }

                var currentCategory = char.GetUnicodeCategory(currentChar);
                switch (currentCategory)
                {
                    case UnicodeCategory.UppercaseLetter:
                    case UnicodeCategory.TitlecaseLetter:
                        if (previousCategory == UnicodeCategory.SpaceSeparator ||
                            previousCategory == UnicodeCategory.LowercaseLetter ||
                            previousCategory != UnicodeCategory.DecimalDigitNumber &&
                            previousCategory != null &&
                            currentIndex > 0 &&
                            currentIndex + 1 < text.Length &&
                            char.IsLower(text[currentIndex + 1]))
                        {
                            builder.Append('_');
                        }

                        currentChar = char.ToLower(currentChar, CultureInfo.InvariantCulture);
                        break;

                    case UnicodeCategory.LowercaseLetter:
                    case UnicodeCategory.DecimalDigitNumber:
                        if (previousCategory == UnicodeCategory.SpaceSeparator)
                        {
                            builder.Append('_');
                        }

                        break;

                    default:
                        if (previousCategory != null)
                        {
                            previousCategory = UnicodeCategory.SpaceSeparator;
                        }

                        continue;
                }

                builder.Append(currentChar);
                previousCategory = currentCategory;
            }

            return builder.ToString();
        }
    }

    public static class TextUtil
    {
        public struct RText
        {
            public string text;

            public RText(object message, Color? color = null, bool bold = false, bool italic = false, int size = -1)
            {
                text = "<color=#" + ColorUtility.ToHtmlStringRGB(color ?? Color.white) + ">" + message + "</color>";
                if (bold)
                {
                    text = "<b>" + text + "</b>";
                }

                if (italic)
                {
                    text = "<i>" + text + "</i>";
                }

                if (size > 0)
                {
                    text = "<size=" + size + ">" + text + "</size>";
                }
            }

            // This seems to break unity with no error message so leaving it commented out for now
            public static implicit operator string(RText richText)
            {
                return richText.text;
            }

            public override string ToString()
            {
                return text;
            }
        }

        public static string SplitCamelCase(this string str)
        {
            return Regex.Replace(
                Regex.Replace(
                    str,
                    @"(\P{Ll})(\P{Ll}\p{Ll})",
                    "$1 $2"
                ),
                @"(\p{Ll})(\P{Ll})",
                "$1 $2"
            );
        }
    }

    public static class ConsoleUtil
    {
        public static void ClearConsole()
        {
#if UNITY_EDITOR
            var assembly = Assembly.GetAssembly(typeof(SceneView));
            var type = assembly.GetType("UnityEditor.LogEntries");
            var method = type.GetMethod("Clear");
            method.Invoke(new object(), null);
#endif
        }
    }

    public static class ReflectionUtil
    {
        public static IEnumerable<T> GetEnumerableOfType<T>(params object[] constructorArgs)
            where T : class, IComparable<T>
        {
            List<T> objects = new List<T>();
            foreach (Type type in
                Assembly.GetAssembly(typeof(T)).GetTypes()
                    .Where(myType => myType.IsClass && !myType.IsAbstract && myType.IsSubclassOf(typeof(T))))
            {
                objects.Add((T) Activator.CreateInstance(type, constructorArgs));
            }

            objects.Sort();
            return objects;
        }
    }

    public static class NamespaceUtil
    {
        private static Dictionary<string, object> _namespaceCache;

        /// <summary>
        /// Heavy operation, use with caution!
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static T[] GetObjectsOfType<T>(bool ignoreTransparent = true)
        {
            if (_namespaceCache == null)
            {
                _namespaceCache = new Dictionary<string, object>();
            }

            try
            {
                var providerType = typeof(T);
                IEnumerable<Type> allProviders =
                    from x in AppDomain.CurrentDomain.GetAssemblies().SelectMany(y => y.GetTypes())
                    where !x.IsAbstract && x.IsClass && providerType.IsAssignableFrom(x)
                    select x;

                foreach (var p in allProviders)
                {
                    if (!_namespaceCache.ContainsKey(p.FullName))
                    {
                        T inst = (T) Activator.CreateInstance(p);
                        _namespaceCache.Add(p.FullName, inst);
                    }
                }

                List<T> result = new List<T>();
                foreach (var k in _namespaceCache)
                {
                    if (providerType.IsAssignableFrom(k.Value.GetType()))
                    {
                        result.Add((T) k.Value);
                    }
                }

                return result.ToArray();
            }
            catch (Exception e)
            {
                LionStudios.Suite.Debugging.LionDebug.LogException(e);
                return null;
            }
        }
    }

    public static class ColorUtil
    {
        public static Color Normalized(float r, float g, float b, float a)
        {
            return new Color(r / 255f, g / 255f, b / 255f, a / 255f);
        }

        public static Color Denormalized(float r, float g, float b, float a)
        {
            return new Color(r * 255, g * 255, b * 255, a * 255);
        }
    }

    public static class DictUtility
    {
        
        public static T ToObject<T>(this IDictionary<string, object> source)
            where T : class, new()
        {
            var someObject = new T();
            var someObjectType = someObject.GetType();

            foreach (var item in source)
            {
                someObjectType
                    .GetProperty(item.Key)
                    .SetValue(someObject, item.Value, null);
            }

            return someObject;
        }

        public static IDictionary<string, object> AsDictionary(this object source, BindingFlags bindingAttr = BindingFlags.DeclaredOnly | BindingFlags.Public | BindingFlags.Instance)
        {
            string json = MiniJson.Serialize(source);
            return JsonUtility.FromJson<Dictionary<string, object>>(json);
        }
    }
}