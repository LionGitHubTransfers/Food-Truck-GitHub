using System;
using System.Collections;
using System.Collections.Generic;
using LionStudios.Suite.Core;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
#if UNITY_EDITOR
using UnityEditorInternal;
#endif

namespace LionStudios.Suite.Debugging
{
    
    /**
            @api {get} /Debugger LionDebugger
            @apiName Debugger Functions
            @apiGroup Lion Debugger
            @apiVersion 1.0.0
            
            @apiDescription LionDebugger Class to customize the behaviour of the debugger and debug logs.
            
            *@apiExample Example of usage:
            
            using LionStudios.Debugger;
            
            public class Example{
                LionDebugger.Show();
                LionDebug.Log("LionDebugger is showing:" + LionDebugger.IsShowing());
                
                #if UNITY_EDITOR
                    LionDebugger.Hide();
                    LionDebug.Log("LionDebugger is not showing" + LionDebugger.IsShowing());
                #endif
                
                Button btn;
                System.Func<string> returnStr;
                ILionDebugElement elem;
                
                LionDebugger.AddButton("button", btn.OnClick, "level");
                LionDebugger.AddInfo("Labeling", "one");
                LionDebugger.AddInfo("Labeling2", str, "two");
                LionDebugger.AddElement(elem, "three");
                LionDebugger.AddDebuggerTab("tabName");
                
            }
        */
    public class LionDebugger : MonoBehaviour
    {
        private const string DefaultTabTitle = "General";
        private const string AdsTabTitle = "Ads";
        private const string PersistentDataTabTitle = "Data";

        /********************************************************************************
         * 
         * PUBLIC DEBUGGER METHODS
         * 
         ********************************************************************************
         * IsShowing()
         * Show()
         * Hide()
         * AddButton(string, action, page)
         * AddInfo(label, page)
         * AddInfo(label, rtnStr, page)
         * AddElement(element, page)
         * AddDebuggerTab(string)
         * AddTab(string, tab) Don't see
         ********************************************************************************/
        
        /**
            @api {get} /Debugger IsShowing
            @apiName Debugger IsShowing
            @apiGroup Lion Debugger
            @apiVersion 1.0.0
            
            @apiHeader (Public Functions) {bool} [IsShowing] Returns true or false if the Debugger is showing
            @apiExample {Lion Debugger} Example of usage:
            
            using LionStudios.Debugger;
            
            public class Example{
                LionDebug.Log("LionDebugger is showing:" + LionDebugger.IsShowing()); 
            }
         */
        public static bool IsShowing()
        {
            return instance != null && instance.enabled && instance.gameObject.activeInHierarchy;
        }
        
        
        
        /**
            @api {show} /Debugger Show
            @apiName Debugger Show
            @apiGroup Lion Debugger
            @apiVersion 1.0.0
            
            @apiHeader (Public Functions) {Void} Show Call Show for the lion debugger to be visible
            @apiExample {Lion Debugger} Example of usage:
            
            using LionStudios.Debugger;
            
            public class Example{
                LionDebugger.Show();
                LionDebug.Log("LionDebugger is showing:" + LionDebugger.IsShowing()); 
            }
         */
        public static void Show(bool ignoreInstallMode = false)
        {
            LionDebug.Log($"Attempting Show of the Debugger\n" +
                          $"ignoreInstallMode: {ignoreInstallMode}\n" +
                          $"Application.installMode: {Application.installMode}", LionDebug.DebugLogLevel.Verbose);
            bool canShow = IsShowing();
            if (!ignoreInstallMode && (Application.installMode == ApplicationInstallMode.Store || !Debug.isDebugBuild))
            {
                canShow = false;
            }

            if (canShow)
            {
                LionDebug.Log("Show Lion Debugger");
                if (EventSystem.current == null)
                {
                    EventSystem evSystem = new GameObject("EventSystem").AddComponent < EventSystem>();
                    evSystem.gameObject.AddComponent<StandaloneInputModule>();
                }   
                instance.gameObject.SetActive(true);
            }
        }
        
        /**
            @api {hide} /Debugger Hide
            @apiName Debugger Hide
            @apiGroup Lion Debugger
            @apiVersion 1.0.0
            
            @apiHeader (Public Functions) {Void} Hides the Debugger
            @apiExample Example of usage:
            
            using LionStudios.Debugger;
            
            public class Example{
                LionDebugger.Hide();
                LionDebug.Log("LionDebugger is showing:" + LionDebugger.IsShowing()); 
            }
         */
        public static void Hide()
        {
            LionDebug.Log("Hiding Lion Debugger");
            instance.gameObject.SetActive(false);
        }

        /**
            @api {set} /Debugger AddButton
            @apiName Debugger AddButton
            @apiGroup Lion Debugger
            @apiVersion 1.0.0
            
            @apiHeader (Public Functions) {DebugButton} AddButton Add a button to the Debugger UI
            @apiParam {string} Name of the button
            @apiParam {Action} When the button is clicked
            @apiParam {string} Name of the pages
            
            @apiExample Example of usage:
            
            using LionStudios.Debugger;
            
            public class Example{
                
                Button btn;
                
                LionDebugger.AddButton("button", btn.OnClick, "level");
                
            }
         */
        public static DebugButton AddButton(string button, Action onClick, string page = "")
        {
            DebugButton newBtn = Instantiate(instance.buttonPrefab);
            newBtn.SetLabel(button);
            newBtn.AddClickAction(onClick);
            newBtn.ID = newBtn.GetInstanceID().ToString();

            AddElement(newBtn, page);
            return newBtn;
        }

        /**
            @api {set} /Debugger AddInfo(string, string)
            @apiName Debugger AddInfo1
            @apiGroup Lion Debugger
            @apiVersion 1.0.0
            
            @apiHeader (Public Functions) {DebugInfoLabel} AddInfo Add static string to Debugger UI (e.g, app version, IDFA)
            @apiParam {string} Name of the label
            @apiParam {string} Name of the pages
            
            @apiExample Example of usage:
            
            using LionStudios.Debugger;
            
            public class Example{
                LionDebugger.AddInfo("Labeling", "one");
                
            }
         */
        public static DebugInfoLabel AddInfo(string label, string page = "")
        {
            DebugInfoLabel newLabel = Instantiate(instance.labelPrefab);
            newLabel.SetLabel(label);
            newLabel.ID = newLabel.GetInstanceID().ToString();

            AddElement(newLabel, page);
            return newLabel;
        }

        /**
            @api {set} /Debugger AddInfo(string, System Func, string )
            @apiName Debugger AddInfo2
            @apiGroup Lion Debugger
            @apiVersion 1.0.0
            
            @apiHeader (Public Functions) {DebugInfoLiveLabel} AddInfo Add dynamic string to Debugger UI (e.g, time of last event, etc)
            @apiParam {string} Name of the label
            @apiParam {string} System.Func<string> Set the live information
            @apiParam {string} Name of the pages
            
            @apiExample Example of usage
            
            using LionStudios.Debugger;
            
            public class Example{
                System.Func<string> returnStr;
                
                LionDebugger.AddInfo("Labeling2", str, "two");
                
            }
         */
        public static DebugInfoLiveLabel AddInfo(string label, System.Func<string> returnStr, string page = "")
        {
            DebugInfoLiveLabel newLiveLabel = Instantiate(instance.liveLabelPrefab);
            newLiveLabel.SetLabel(label);
            newLiveLabel.SetLiveInfo(returnStr);
            newLiveLabel.ID = newLiveLabel.GetInstanceID().ToString();

            AddElement(newLiveLabel, page);
            return newLiveLabel;
        }

        /**
            @api {set} /Debugger AddElement
            @apiName Debugger AddElement
            @apiGroup Lion Debugger
            @apiVersion 1.0.0
            
            @apiHeader (Public Functions) {Void} AddElement Add custom element to Debugger UI (e.g, graph)
            @apiParam {ILionDebugElement} The Lion Debug element
            @apiParam {string} Name of the pages
            
            @apiExample Example of usage:
            
            using LionStudios.Debugger;
            
            public class Example{
                ILionDebugElement elem;
                LionDebugger.AddElement(elem, "three");
                
            }
         */
        public static void AddElement(ILionDebugElement element, string page = "")
        {
            ILionDebugTab tab = instance.GetDebuggerTab(page);
            if (tab == null)
            {
                tab = string.IsNullOrEmpty(page) ?
                    instance.GetDebuggerTab(DefaultTabTitle)
                    : instance.AddDebuggerTab(page);
            }

            tab.AddElement(element);
        }
        
        internal static void NextTab()
        {
            int nextTab = instance._currentTab + 1;
            if(nextTab >= instance._tabPages.Count)
            {
                nextTab = 0;
            }

            instance.GoToTabIndex(nextTab);
        }

        internal static void PrevTab()
        {
            int prevTab = instance._currentTab - 1;
            if (prevTab < 0)
            {
                prevTab = instance._tabPages.Count - 1;
            }

            instance.GoToTabIndex(prevTab);
        }

        /********************************************************************************
         * 
         * INSTANCE
         * 
         ********************************************************************************
         * Handles GUI-drawing window and inner content. Creates and updates window
         * styles internally.
         ********************************************************************************/
        private static LionDebugger _inst;
        private static LionDebugger instance { get
            {
                if(_inst == null)
                {
                    LionDebugger prefab = Resources.Load<LionDebugger>("LionDebugger");
                    if (prefab == null)
                    {
                        LionDebug.LogError("No debugger prefab found!");
                        return null;
                    }

                    _inst = LionDebugger.Instantiate(prefab);
                    //_inst.BuildDefaultDebugTab();
                    _inst.gameObject.SetActive(false);
                    DontDestroyOnLoad(instance);
                }

                return _inst;
            } }

        // pages
        private List<DebuggerTab> _tabPages = new List<DebuggerTab>();
        private int _currentTab = 0;

        // components
        public Transform tabsBarInner;
        public Transform tabsContent;

        // prefabs
        public DebuggerTab tabPrefab;
        public DebugButton buttonPrefab;
        public DebugInfoLabel labelPrefab;
        public DebugInfoLiveLabel liveLabelPrefab;

        private void BuildDefaultDebugTab()
        {
            // add app elements to page
            LionDebugger.AddInfo("-App-", DefaultTabTitle);
            LionDebugger.AddInfo("App Identifier", () =>
            {
                return Application.identifier;
            }, DefaultTabTitle);
            
            LionDebugger.AddInfo("Version", () =>
            {
                return Application.version;
            }, DefaultTabTitle);

            GoToTabIndex(0);
        }

        private void OnEnable()
        {
            _refreshOpCache = true;
        }

        private Graphic[] _opacityElementCache = null;
        private bool _refreshOpCache = true;
        public void SetWindowOpacity(float opacity)
        {
            if(_opacityElementCache == null || _refreshOpCache == true)
            {
                _opacityElementCache = this.gameObject.GetComponentsInChildren<Graphic>();
                _refreshOpCache = false;
            }
            
            for(int i = 0; i < _opacityElementCache.Length; i++)
            {
                Color c = _opacityElementCache[i].color;
                c.a = opacity;
                _opacityElementCache[i].color = c;
            }
        }

        public void Close()
        {
            LionDebugger.Hide();
        }

        private void GoToTab(string id)
        {
            if (string.IsNullOrEmpty(id))
            {
                return;
            }

            for (int i = 0; i < _tabPages.Count; i++)
            {
                if (_tabPages[i].ID == id)
                {
                    GoToTabIndex(i);
                    break;
                }
            }
        }

        private void GoToTabIndex(int index)
        {
            if(index < 0 || index >= _tabPages.Count)
            {
                return;
            }

            for(int i = 0; i < _tabPages.Count; i++)
            {
                if(i == index)
                {
                    _tabPages[i].Show();
                }
                else
                {
                    _tabPages[i].Hide();
                }
            }

            _currentTab = index;
        }

        private ILionDebugTab GetDebuggerTab(string id)
        {
            for(int i = 0; i < _tabPages.Count; i++)
            {
                if(_tabPages[i].ID == id)
                {
                    return _tabPages[i];
                }
            }
            return null;
        }

        
        /**
            @api {show} /Debugger Debugger Function
            @apiName Debugger Functions
            @apiGroup Lion Debugger
            @apiVersion 1.0.0
            
            @apiHeader (Public Functions) {ILionDebugTab} Adds a tab
            @apiParam {string} Pass in a string
         */
        private ILionDebugTab AddDebuggerTab(string id)
        {
            if(GetDebuggerTab(id) != null)
            {
                string msg = string.Format("Lion Debugger: Tab '{0}' already exists!", id);
                return null;
            }

            DebugButton newTabButton = DebugButton.Instantiate(this.buttonPrefab);
            newTabButton.SetLabel(id);
            newTabButton.AddClickAction(() =>
            {
                this.GoToTab(id);
            });

            DebuggerTab newTab = DebuggerTab.Instantiate(this.tabPrefab, tabsContent.transform);
                        
            // disable by default
            newTab.Hide();
            
            newTab.ID = id;

            // add page
            _tabPages.Add(newTab);

            // attach tab button
            newTabButton.transform.SetParent(this.tabsBarInner, false);


            return newTab;
        }
    }
}