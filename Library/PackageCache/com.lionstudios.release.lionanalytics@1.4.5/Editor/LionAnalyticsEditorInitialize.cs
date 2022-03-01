using UnityEditor;
using System.IO;
using UnityEngine;

namespace LionStudios.Suite.Analytics
{
    [InitializeOnLoad]
    public class LionAnalyticsEditor
    {
        private const string AssetsDir = "LionStudios/LionAnalytics/";

        #region Code Stripping
        private const string LinkXMLPath = "link.xml";
        private const string LinkXMLTemplate = "<linker>"
                                               
                                               + "<assembly fullname=\"Firebase.Analytics\">"
                                               + "<type fullname=\"Firebase.Analytics.FirebaseAnalytics\" preserve=\"all\"/>"
                                               + "<type fullname=\"Firebase.Analytics.Parameter\" preserve=\"all\"/>"
                                               + "</assembly>"
                                               
                                               + "</linker>";
        #endregion
        
        static LionAnalyticsEditor()
        {
            WriteLinkXml();
        }

        private static void WriteLinkXml()
        {
            string shortPath = Path.Combine(Application.dataPath, AssetsDir);
            string fullPath = Path.Combine(shortPath, LinkXMLPath);
            
            if (!Directory.Exists(shortPath))
            {
                Directory.CreateDirectory(shortPath);
            }
            File.WriteAllText(fullPath, LinkXMLTemplate);
        }
    }
}