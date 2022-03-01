#if UNITY_EDITOR
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using LionStudios.Suite.Debugging;
using UnityEngine;
using UnityEditor;
using UnityEditor.PackageManager;
using UnityEditor.PackageManager.Requests;

namespace LionStudios.Suite.Editor.PackageManager
{
    public static class LionPackageService
    {
        private enum PackageServiceRequestType
        {
            NotSpecified,
            AddRequest,
            RemoveRequest,
            ListRequest,
            EmbedRequest,
            SearchRequest
        }
        
        private class ServiceRequest
        {
            public Request innerRequest = null;
            public System.Func<Request> onRequest = null;
            public PackageServiceRequestType requestType = PackageServiceRequestType.NotSpecified;

            /// <summary>
            /// Callbacks are represented as string for all Client Request types.
            /// Request callback string examples:
            ///
            /// Client.List => "com.unity.packageOne\ncom.unity.packageTwo\com.unity.packageThree"
            /// Client.Add => "com.unity.newPackage"
            /// Client.Remove => "com.unity.oldPackage"
            ///
            /// *All Errors are represented by empty strings*
            /// </summary>
            public System.Action<object> callback;

            public ServiceRequest(System.Func<Request> request,
                System.Action<object> onFinish, PackageServiceRequestType requestType = PackageServiceRequestType.NotSpecified)
            {
                this.onRequest = request;
                this.callback = onFinish;
                this.innerRequest = null;
                this.requestType = requestType;
            }

            public void BeginRequest()
            {
                innerRequest = onRequest.Invoke();
            }
        }

        public static bool IsBusy => _requests.Count > 0;
        private static Queue<ServiceRequest> _requests = new Queue<ServiceRequest>();
        private static EditorApplication.CallbackFunction _onEditorUpdate = OnEditorUpdate;

        private static bool EditorIsHooked => (EditorApplication.update != null)
                                              && (EditorApplication.update.GetInvocationList()
                                                  .FirstOrDefault(x => x == (Delegate) _onEditorUpdate) != null);
        
        
#if UNITY_EDITOR
        public static bool SnapshotExists
        {
            get
            {
                string snapshot = Path.Combine(Application.dataPath,
                    PackageUtility.PackageSnapshotPath, PackageUtility.PackageSnapshotFilename);
                return File.Exists(snapshot);
            }
        }
        
        [MenuItem("LionStudios/Advanced/Reload Runtime Packages")]
        public static void ReloadRuntimePackages()
        {
            ListAllPackages((packageCollection) =>
            {
                if (packageCollection == null)
                {
                    LionDebug.Log("Package Service: No packages found.");
                    return;
                }

                string dir = Path.Combine(Application.dataPath, PackageUtility.PackageSnapshotPath);
                if (!Directory.Exists(dir))
                {
                    Directory.CreateDirectory(dir);
                }
                
                // write listed packages to disk
                File.WriteAllText(Path.Combine(dir, PackageUtility.PackageSnapshotFilename), 
                    JsonUtility.ToJson(packageCollection, true));
                
                AssetDatabase.SaveAssets();
                AssetDatabase.Refresh();
            });
        }
#endif
        
        private static void OnEditorUpdate()
        {
            if (_requests.Count == 0) return;
            ServiceRequest request = _requests.Peek();
            
            if (request.innerRequest == null)
            {
                request.BeginRequest();
            }
            else if (request.innerRequest.IsCompleted)
            {
                object result = null;
                if (request.innerRequest.Error == null)
                { 
                    switch (request.requestType)
                    {
                        case PackageServiceRequestType.AddRequest:
                            result = ((AddRequest) request.innerRequest).Result.name;
                            break;
                        case PackageServiceRequestType.RemoveRequest:
                            result = ((RemoveRequest) request.innerRequest).PackageIdOrName;
                            break;
                        case PackageServiceRequestType.EmbedRequest:
                            result = ((EmbedRequest) request.innerRequest).Result.name;
                            break;
                        case PackageServiceRequestType.ListRequest:
                            
                            ListRequest list = request.innerRequest as ListRequest;
                            List<PackageUtility.PackageInfo> packages = new List<PackageUtility.PackageInfo>();
                            
                            foreach (var package in list.Result)
                            {
                                PackageUtility.PackageInfo p = new PackageUtility.PackageInfo();
                                p.name = package.name;
                                p.version = package.version;
                                
                                // query depenedencies
                                p.dependencies = new PackageUtility.DependencyInfo[package.dependencies.Length];
                                for (int i = 0; i < package.dependencies.Length; i++)
                                {
                                    PackageUtility.DependencyInfo d = new PackageUtility.DependencyInfo();
                                    d.name = package.dependencies[i].name;
                                    d.version = package.dependencies[i].version;
                                    
                                    p.dependencies[i] = d;
                                }
                                
                                packages.Add(p);
                                result += $"{package.name}\n";
                            }
                            
                            result = new PackageUtility.PackageCollection(packages.ToArray());
                            break;
                        case PackageServiceRequestType.SearchRequest:
                            SearchRequest search = request.innerRequest as SearchRequest;
                            foreach (var package in search.Result)
                            {
                                result += $"{package.name}\n";
                            }
                            break;
                    }

                }
                else
                {
                    result = request.innerRequest.Error.message;
                    LionDebug.Log($"Inner request for {request.requestType} FAILED.\nReason: {result}", LionDebug.DebugLogLevel.Verbose);
                }
                
                request.callback?.Invoke(result);
                _requests.Dequeue();

                // unsubscribe from editor
                if (_requests.Count == 0)
                {
                    EditorApplication.update -= _onEditorUpdate;
                }
            }
        }
        public static void ListAllPackages(System.Action<object> onFinish)
        {
            if (!EditorIsHooked)
            {
                EditorApplication.update -= _onEditorUpdate;
                EditorApplication.update += _onEditorUpdate;
            }

            LionDebug.Log("Lion Package Service: Getting Installed Packages", LionDebug.DebugLogLevel.Verbose);
            _requests.Enqueue(new ServiceRequest(
                () => { return Client.List(); },
                onFinish,
                PackageServiceRequestType.ListRequest
            ));
        }
        public static void InstallPackage(string packageName, System.Action<object> onFinish)
        {
            if (!EditorIsHooked)
            {
                EditorApplication.update -= _onEditorUpdate;
                EditorApplication.update += _onEditorUpdate;
            }
            
            LionDebug.Log($"Lion Package Service: Installing Package {packageName}", LionDebug.DebugLogLevel.Verbose);
            
            _requests.Enqueue(new ServiceRequest(
                () => { return Client.Add(packageName); },
                onFinish,
                PackageServiceRequestType.AddRequest
            ));
        }
        public static void UninstallPackage(string packageName, System.Action<object> onFinish)
        {
            if (!EditorIsHooked)
            {
                EditorApplication.update -= _onEditorUpdate;
                EditorApplication.update += _onEditorUpdate;
            }
            LionDebug.Log($"Lion Package Service: Uninstalling Package {packageName}", LionDebug.DebugLogLevel.Verbose);
            _requests.Enqueue(new ServiceRequest(
                () => { return Client.Remove(packageName);},
                onFinish,
                PackageServiceRequestType.RemoveRequest
            ));
        }
        public static void EmbedPackage(string packageName, System.Action<object> onFinish)
        {
            if (!EditorIsHooked)
            {
                EditorApplication.update -= _onEditorUpdate;
                EditorApplication.update += _onEditorUpdate;
            }
            
            _requests.Enqueue(new ServiceRequest(
                () => { return Client.Embed(packageName);},
                onFinish,
                PackageServiceRequestType.EmbedRequest
            ));
        }
        
        public static void SearchPackage(string packageName, System.Action<object> onFinish)
        {
            if (!EditorIsHooked)
            {
                EditorApplication.update -= _onEditorUpdate;
                EditorApplication.update += _onEditorUpdate;
            }
            
            LionDebug.Log($"Lion Package Service: Searching for package {packageName}", LionDebug.DebugLogLevel.Verbose);
            _requests.Enqueue(new ServiceRequest(
                () => { return Client.Search(packageName); },
                onFinish,
                PackageServiceRequestType.SearchRequest
            ));
        }
    }
}
#endif