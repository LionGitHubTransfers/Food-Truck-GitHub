using UnityEngine;
using System;
using System.Collections.Generic;
using System.Reflection;

namespace LionStudios.Suite.Core
{
	
	/**
	@api {get} /LionCore ILionSDK
	@apiName LionCore ILionSDK
	@apiGroup LionCore
	@apiVersion 1.0.0
	@apiDescription
	* - __Use Case__: Implement an SDK, includes options for Pre-, On- and Post-initialization logic	
	* 
	*	- Can be per SDK, or per group of SDKs (including monolith)
	*
	*	- PreInitialization takes place before all ILionSDK OnInitialization logic
	*
	* 	- PostInitialization takes place after all ILionSDK OnInitialization logic
	*
	* 	- If logic must execute immediately after a specific SDK has initialized, include that within the OnInitialization block
	*
	* - Requires __isInitialized__ variable
	*
	* 	- Must return value when SDK is initialized
	*
	* - Requires Priority variable
	*
	* 	- Sets the order of SDK initializations (ascending order, 1 = first)
	*
	* 	- Default 0 (order does not matter)
	*
	* - Requires __ILionSettingsProvider__ class
	*	
	*
	*@apiHeader (ILionSdk Interface Components) {Void} OnPreInitialize Fired after settings have been loaded but before internal modules are initialized
	*@apiHeader (ILionSdk Interface Components) {Void} OnInitialize Fired after settings and modules are initialized
	*@apiHeader (ILionSdk Interface Components) {Void} OnPostInitialize Fired after settings, modules, and sdks have been initialized
	*@apiHeader (ILionSdk Interface Components) {String} GetPrivacyLinks A list of privacy links used by the SDK
	*@apiHeader (ILionSdk Interface Components) {Bool} IsInitialized A flag used to indicate whether the wrapper has loaded the SDK
	*@apiHeader (ILionSdk Interface Components) {Int} Priority (VARIABLE) Sets the priority of initialization order when multiple SDKs are present in project

	*@apiExample Example of usage:
			
			using LionStudios.Suite.Core;

			public class TestSdk : ILionSdk
			{
			// Priority of SDK initialization
			public int Priority => 0;

			private static TestSdkSettings _settings = new TestSdkSettings();
			public class TestSdkSettings : ILionSettingsInfo
			{
				public bool settingA = false;
				public bool settingB = false;
				public bool settingC = false;

				// Can be defined, will pre-populate Lion Settings fields
				public string settingD = “settingD Value”;
				public string settingE;
				public string settingF;
			}

			// Define SDK privacy policy links here
			public string[] GetPrivacyLinks() 
			{ 
				return new string[] 
				{ 
				"https://example.com",
				"https://example1.com",
				"https://example2.com"
				};
			}

			public void ApplySettings(ILionSettingsInfo newSettings)
			{
				_settings = (TestSdkSettings)newSettings;
			}

			public ILionSettingsInfo GetSettings()
			{
				return _settings;
			}

			public void OnInitialize(LionCoreContext ctx)
			{
				// Debug log for console
				Debugging.LionDebug.Log("Initialized Foo Module!");

				// Add information to Lion Debugger tool
				LionDebugger.AddInfo(“Debug info”);
			}

			public void OnPostInitialize(LionCoreContext ctx)
			{
				LionDebug.Log("On SDK Post Init");
			}

			public void OnPreInitialize(LionCoreContext ctx)
			{
				LionDebug.Log("On SDK Pre Init");
			}

			public bool IsInitialized()
			{
			return true;
			}
		}


		*/
	public interface ILionSdk : ILionSettingsProvider
	{
		
		bool IsInitialized();

		int Priority { get; }

		string[] GetPrivacyLinks();

		
		/// <summary>
		/// Fired after settings have been loaded but before internal modules are initialized
		/// </summary>
		/// <param name="ctx">Contains the loaded modules and sdks of Lion Core</param>
		void OnPreInitialize(LionCoreContext ctx);

	
		/// <summary>
		/// Fired after settings and modules are initialized
		/// </summary>
		/// <param name="ctx">Contains the loaded modules and sdks of Lion Core</param>
		void OnInitialize(LionCoreContext ctx);

		/// <summary>
		/// Fired after settings, modules, and sdks have been initialized
		/// </summary>
		/// <param name="ctx">Contains the loaded modules and sdks of Lion Core</param>
		void OnPostInitialize(LionCoreContext ctx);
	}
}