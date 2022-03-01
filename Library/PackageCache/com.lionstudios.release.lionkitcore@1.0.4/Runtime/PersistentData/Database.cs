using UnityEngine;
using System;
using System.IO;
using System.Collections.Generic;

namespace LionStudios.Suite
{
    public static class Database
    {
        const string database = "Database";

        // ============ Persistent Database Paths ==============
        public static string GetFilePath<T>(string instanceId)
        {
            return GetClassPath<T>() + "/" + instanceId;
        }

        public static string GetClassPath<T>()
        {
            return GetEnvPath() + "/" + GetDatabaseCollection<T>();
        }

        public static string GetEnvPath()
        {
#if UNITY_EDITOR
            return GetDataPath() + "/" + "Editor";// NakamaController.Server.Environment;
#else
            return GetDataPath() + "/" + "Local";// NakamaController.Server.Environment;
#endif
        }

        public static string GetDataPath()
        {
            return Application.persistentDataPath + "/" + database;
        }

        // ============== Resource Database Paths ============

        public static string GetFilePathResources<T>(string instanceId)
        {
            return GetClassPathResources<T>() + "/" + instanceId;
        }

        public static string GetFilePathResources(Type type, string instanceId)
        {
            return GetClassPathResources(type) + "/" + instanceId;
        }

        public static string GetClassPathResources<T>()
        {
            return GetDataPathResources() + "/" + GetDatabaseCollection<T>();
        }

        public static string GetClassPathResources(Type type)
        {
            return GetDataPathResources() + "/" + GetDatabaseCollection(type);
        }

        public static string GetDataPathResources()
        {
            return "DefaultPlayerData/" + database;
        }

        // ====================================================

        public static string GetDatabaseCollection<T>()
        {
            return typeof(T).ToString();
        }

        public static string GetDatabaseCollection(Type type)
        {
            return type.ToString();
        }

        public static void DeleteAllData()
        {
            //Debug.Log("Deleting All Persistent Data... ");
            string appPath = GetDataPath();
            if (Directory.Exists(appPath))
                Directory.Delete(appPath, true);

            _EditQueue.Clear();
            _LoadedAssetReference.Clear();
        }
        
        public static void DeleteEnvironmentData()
        {
            //Debug.Log("Deleting All Persistent Data... ");
            string appPath = GetEnvPath();
            if (Directory.Exists(appPath))
                Directory.Delete(appPath, true);

            _EditQueue.Clear();
            _LoadedAssetReference.Clear();
        }

        public static bool Paused { get { return _Pauses.Count > 0; } }

        public static void PauseEdit(string reason)
        {
            if (_Pauses.Contains(reason) == false)
            {
                if (_Pauses.Count == 0)
                {
                    //Debug.Log(new RText("Pause Edit :: " + reason, Color.yellow));
                    _TimePaused = Time.time;
                }

                _Pauses.Add(reason);
            }
        }

        public static void ResumeEdit(string reason, bool clearQueuedEdits = false)
        {
            if (_Pauses.Contains(reason))
                _Pauses.Remove(reason);

            if (_Pauses.Count == 0)
            {
                if (clearQueuedEdits)
                    _EditQueue.Clear();
                else
                    ProcessEditQueue();

                _TimeUnpaused = Time.time;
                //Debug.Log(new RText("Resume Edit :: " + reason, Color.green));
            }
        }

        public static void Reset()
        {
            _Pauses.Clear();
            ClearQueuedEdits();
        }

        public static void ClearQueuedEdits()
        {
            _EditQueue.Clear();
        }

        public static void EnqueueEdit(Action edit)
        {
            if (_EditQueue.Contains(edit) == false)
                _EditQueue.Add(edit);
        }

        

        static void ProcessEditQueue()
        {
            //_ProcessingEditQueue = true;
            //Debug.Log(new RText("Database Edit Queue Count = " + _EditQueue.Count, Color.white));
            foreach (Action edit in _EditQueue)
            {
                edit?.Invoke();
            }

            //NakamaController.ProcessAllQueues();
            //Debug.Log(new RText("Processed Database Edit Queue!", Color.green));
            _EditQueue.Clear();
            //_ProcessingEditQueue = false;
        }

        public static float PausedDuration
        {
            get
            {
                if (Paused)
                {
                    return Time.time - _TimePaused;
                }
                return 0f;
            }
        }

        public static float TimeSinceLastPaused
        {
            get
            {
                if (Paused == false)
                {
                    return Time.time - _TimeUnpaused;
                }
                return 0f;
            }
        }

        public static string PausedReason
        {
            get
            {
                if (Paused)
                {
                    string pauseReason = "";
                    int index = 0;
                    foreach (string reason in _Pauses)
                    {
                        pauseReason += reason;
                        if (index < _Pauses.Count - 1)
                            pauseReason += ",";
                    }

                    return pauseReason;
                }

                return "none";
            }
        }

        #region Reference
        static Dictionary<string, Dictionary<string, IPersistentData>> _LoadedAssetReference = new Dictionary<string, Dictionary<string, IPersistentData>>();

        public static IPersistentData GetInstance(string collection, string instanceId)
        {
            if (_LoadedAssetReference.ContainsKey(collection))
            {
                if (_LoadedAssetReference[collection].ContainsKey(instanceId))
                    return _LoadedAssetReference[collection][instanceId];
            }

            return null;
        }

        public static T GetInstance<T>(string instanceId) where T : PersistentData<T>, new()
        {
            string collection = GetDatabaseCollection<T>();
            if (_LoadedAssetReference.ContainsKey(collection))
            {
                if (_LoadedAssetReference[collection].ContainsKey(instanceId))
                    return _LoadedAssetReference[collection][instanceId] as T;
            }

            return null;
        }

        public static void AddReference<T>(T data) where T : PersistentData<T>, new()
        {
            if (string.IsNullOrEmpty(data.instanceId))
            {
                Debug.LogError("Add Reference - Data instanceId is null. Reference can't be added");
                return;
            }

            string collection = GetDatabaseCollection<T>();
            if (_LoadedAssetReference.ContainsKey(collection) == false)
                _LoadedAssetReference[collection] = new Dictionary<string, IPersistentData>();

            _LoadedAssetReference[collection][data.instanceId] = data;
        }

        public static void RemoveReference<T>(string instanceId) where T : PersistentData<T>, new()
        {
            string collection = GetDatabaseCollection<T>();
            if (_LoadedAssetReference.ContainsKey(collection))
            {
                if (_LoadedAssetReference[collection].ContainsKey(instanceId))
                    _LoadedAssetReference[collection].Remove(instanceId);
            }
        }

        public static void RemoveReference<T>(T instance) where T : PersistentData<T>, new()
        {
            RemoveReference<T>(instance.instanceId);
        }

        public static void RemoveCollectionReference<T>()
        {
            string collection = GetDatabaseCollection<T>();
            if (_LoadedAssetReference.ContainsKey(collection))
            {
                _LoadedAssetReference.Remove(collection);
            }
        }
        #endregion

        static bool _ProcessingEditQueue;
        static float _TimePaused;
        static float _TimeUnpaused;
        readonly static List<Action> _EditQueue = new List<Action>();
        public static HashSet<string> _Pauses = new HashSet<string>();
    }
}
