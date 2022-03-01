using System;
using System.Collections.Generic;
using System.IO;
using LionStudios.Suite.Utility.Json;
using UnityEditor;
using UnityEngine;

namespace LionStudios.Suite.Core
{
    
/**
          @api {get} /ILionSettings ILionSettingsProvider Interface
            @apiName ILionSettingsProvider
            @apiGroup LionCore
            @apiVersion 1.0.0
            @apiDescription 
        *
            * The ILionSettingsProvider interface is used to create input fields inside the Lion Settings Window
            * - __Use Case__: Send settings fields to Lion Settings UI. Lion Suite (Core) automatically detects Settings Providers on initialization
            *
            * - Settings type
            *   - __Static Data__: Hard-Coded
            *   - __Dynamic Data__: queried from iSDK, iModule (settings providers, more info on how to provided in LionSDK Section)
            *
            * - Implementing Settings Providers
            *   - Developers must decide what to expose
            *
            * - Requires __ILionSettingsInfo__ class (to get and apply settings)
            *
            * - Lion Settings display will default to the order in which settings are defined in __ILionSettingsProvider__ (does not support custom configuration / layout)
            *
            *
            *@apiHeader (ILionSettingsProvider Interface Components) {Void} GetSettings (FUNCTION) Gets the inputted settings
            *@apiHeader (ILionSettingsProvider Interface Components) {Void} ApplySettings (FUNCTION) Applies and updates the lion settings window
            *
            *
            * @apiExample Example of Settings up a ILionSettingsProvider Interface :
            *   
            *   // Be sure to indicate that the class is using the ILionSettingsInfo property, which is a child of the ILionSettingsProvider Interface 
            *   public class ThirdPartySdk : ILionSettingsInfo 
            *   {
            *        public string appToken = "";   
            *   }
            *    
            *   public void ApplySettings(ILionSettingsInfo newSettings)
            *   {
            *       _settings = (LionAdjustSdkSettings)newSettings;
            *   }
            *   
            *
            *  public ILionSettingsInfo GetSettings()
            *    {
            *        if(_settings == null)
            *        {
            *            _settings = new LionAdjustSdkSettings();
            *        }
            *
            *        return _settings;
            *    }
            *
*/
    public interface ILionSettingsInfo
    {
        
    }
    
    public interface ILionSettingsProvider
    {
        ILionSettingsInfo GetSettings();
        
        void ApplySettings(ILionSettingsInfo newSettings);
    }
}