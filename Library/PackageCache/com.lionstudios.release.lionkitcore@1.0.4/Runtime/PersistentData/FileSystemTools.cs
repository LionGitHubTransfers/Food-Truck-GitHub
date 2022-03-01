using UnityEngine;
using System.IO;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace LionStudios.Suite
{
    public class FileSystemTools
    {
        public static string[] GetLocalMapLocations()
        {
            string[] mapNameList = new string[0];
            if (Directory.Exists(Application.persistentDataPath))
            {
                mapNameList = Directory.GetDirectories(Application.persistentDataPath);
            }
            return mapNameList;
        }

        public static string[] GetLocalMapNames()
        {
            string[] nameList = GetLocalMapLocations();
            for (int i = 0; i < nameList.Length; i++)
            {
                nameList[i] = new DirectoryInfo(nameList[i]).Name;
            }
            return nameList;
        }

        public static void CopyDir(string sourceDirectory, string targetDirectory, bool excludeMetaFiles = false)
        {
            if (string.IsNullOrEmpty(sourceDirectory) || string.IsNullOrEmpty(targetDirectory))
                return;

            DirectoryInfo diSource = new DirectoryInfo(sourceDirectory);
            DirectoryInfo diTarget = new DirectoryInfo(targetDirectory);

            CopyAll(diSource, diTarget, excludeMetaFiles);
        }

        public static void CopyAll(DirectoryInfo source, DirectoryInfo target, bool excludeMetaFiles = false)
        {
            Directory.CreateDirectory(target.FullName);

            // Copy each file into the new directory.
            foreach (FileInfo file in source.GetFiles())
            {
                //Debug.Log(file.Extension + " :: " + excludeMetaFiles + " :: " + (file.Extension == ".meta"));
                if (excludeMetaFiles && file.Extension == ".meta")
                    continue;

                Debug.LogFormat(@"Copying {0}\{1}", target.FullName, file.Name);
                file.CopyTo(Path.Combine(target.FullName, file.Name), true);
            }

            // Copy each subdirectory using recursion.
            foreach (DirectoryInfo diSourceSubDir in source.GetDirectories())
            {
                DirectoryInfo nextTargetSubDir =
                    target.CreateSubdirectory(diSourceSubDir.Name);
                CopyAll(diSourceSubDir, nextTargetSubDir, excludeMetaFiles);
            }
        }

        public static string FindFileInDirectory(string dir, string fileName)
        {
            string[] files = Directory.GetFiles(dir, fileName);

            if (files.Length > 0)
                return files[0];

            foreach (string subDir in Directory.GetDirectories(dir))
            {
                string file = FindFileInDirectory(subDir, fileName);
                if (string.IsNullOrEmpty(file) == false)
                    return file;
            }

            return null;
        }
    }
}
