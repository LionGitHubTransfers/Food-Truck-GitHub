using System;
using System.Linq;
using System.Reflection;
using System.Collections.Generic;
using System.ComponentModel;
using LionStudios.Suite.Core;
using LionStudios.Suite.Debugging;
using LionStudios.Suite.Utility.Json;
using UnityEngine;

namespace LionStudios.Suite.Analytics
{
    
    public static class ObjectToDictionaryHelper
    {
        public static IDictionary<string, object> ToDictionary(this object source)
        {
            return source.ToDictionary<object>();
        }

        public static IDictionary<string, T> ToDictionary<T>(this object source)
        {
            if (source == null)
                ThrowExceptionWhenSourceArgumentIsNull();

            var dictionary = new Dictionary<string, T>();
            foreach (PropertyDescriptor property in TypeDescriptor.GetProperties(source))
                AddPropertyToDictionary<T>(property, source, dictionary);
            return dictionary;
        }

        private static void AddPropertyToDictionary<T>(PropertyDescriptor property, object source, Dictionary<string, T> dictionary)
        {
            object value = property.GetValue(source);
            if (IsOfType<T>(value))
                dictionary.Add(property.Name, (T)value);
        }

        private static bool IsOfType<T>(object value)
        {
            return value is T;
        }

        private static void ThrowExceptionWhenSourceArgumentIsNull()
        {
            throw new ArgumentNullException("source", "Unable to convert object to a dictionary. The source object is null.");
        }
    }
    
    public class Firebase : Sdk
    {
        const string firebaseAnalyticsQualifiedName = "Firebase.Analytics.FirebaseAnalytics";
        const string firebaseAnalyticsParameterQualifiedName = "Firebase.Analytics.Parameter";
        const string firebaseAnalyticsTrackEventMethodName = "LogEvent";

        const string firebaseNotFoundMessage =
            "Lion Analytics: Firebase Analytics not found or assembly inaccesible. Check SDK Service.";

        private Type firebaseAnalyticsType;
        private Type firebaseParameterType;

        private MethodInfo logEventMethod;

        public Firebase()
        {
            var sdkType = AnalyticsSdkBridge.GetType(firebaseAnalyticsQualifiedName);
            if (sdkType == null)
            {
                Analytics.Debugging.LogWarning(firebaseNotFoundMessage);
                return;
            }

            firebaseAnalyticsType = sdkType;

            var parameterType = AnalyticsSdkBridge.GetType(firebaseAnalyticsParameterQualifiedName);
            if(parameterType == null)
            {
                Analytics.Debugging.LogWarning(firebaseNotFoundMessage);
                return;
            }

            firebaseParameterType = parameterType;
            try
            {
                logEventMethod = firebaseAnalyticsType.GetMethods(BindingFlags.Static | BindingFlags.Public)
                    .First(m => m.Name == firebaseAnalyticsTrackEventMethodName && m.GetParameters().Length == 2
                    && m.GetParameters().First((x) => x.Name == "parameters") != null);

            }catch(Exception e)
            {
                Analytics.Debugging.LogWarning(e.Message);
            }
        }

        public override void TryFireEvent(LionGameEvent gameEvent)
        {
            List<object> paramArray = new List<object>();
            foreach (var parameter in gameEvent.eventParams)
            {
                if (parameter.Value == null) continue;
                object paramValue = null;

                if(parameter.Value is int
                   || parameter.Value is long
                   || parameter.Value is float
                   || parameter.Value is double)
                {
                    paramValue = parameter.Value;
                }
                else
                {
                    if (parameter.Key == EventParam.transaction)
                    {
                        Transaction transaction = (Transaction) parameter.Value;
                        paramValue = $"{transaction.name}.{transaction.transactionID}";
                    }
                    else if (parameter.Key == EventParam.reward)
                    {
                        Reward reward = (Reward) parameter.Value;
                        paramValue = $"{reward.rewardName}";
                    }
                    else
                    {
                        paramValue = parameter.Value.ToString();
                    }
                }

                // Create instance of Firebase.Analytics.Parameter
                object newParam = Activator.CreateInstance(
                    firebaseParameterType, args: new object[]{
                        parameter.Key,
                        paramValue
                });
                
                paramArray.Add(newParam);
            }
            
            // determine event name
            string evName = ParseEventName(gameEvent);
            
            // parameter array of T
            object[] paramArrayT = (object[])Array.CreateInstance(
                firebaseParameterType,
                paramArray.Count);
            
            paramArray.CopyTo(paramArrayT);
            object[] methodParams = new object[]
            {
                // Event name
                evName,
                
                // Parameters
                paramArrayT
            };
            
            // Call to Firebase.Analytics.FirebaseAnalytics.LogEvent(string, Parameters[])
            logEventMethod.Invoke(firebaseAnalyticsType, methodParams);
            LionDebug.Log("Fired event to Firebase Analytics", LionDebug.DebugLogLevel.Event);
        }

        private string ParseEventName(LionGameEvent gameEvent)
        {
            string customEvToken = gameEvent.TryGetParam<string>(EventParam.customEventToken);
            if (!string.IsNullOrEmpty(customEvToken))
            {
                return $"{customEvToken}";
            }
            
            if (gameEvent.eventType == EventType.Undefined)
            {
                return $"{gameEvent.eventType.ToString()}";
            }

            System.Text.StringBuilder builder = new System.Text.StringBuilder();
            switch (gameEvent.eventType)
            {
                case EventType.Game:
                    builder.Append(gameEvent.eventType.ToString());
                    builder.Append("_");
                    builder.Append(gameEvent.gameEventType.ToString());
                break;

                case EventType.Level:
                    builder.Append(gameEvent.eventType.ToString());
                    builder.Append("_");
                    builder.Append(gameEvent.levelEventType.ToString());
                break;

                case EventType.Ad:
                    builder.Append(gameEvent.adType.ToString());
                    builder.Append("_");
                    builder.Append(gameEvent.adEventType.ToString());
                break;

                case EventType.IAP:
                    builder.Append(gameEvent.eventType.ToString());
                    builder.Append("_");
                    builder.Append(gameEvent.iapEventType.ToString());
                break;
                default:
                    builder.Append(gameEvent.eventType);
                break;
            }

            return builder.ToString();
        }
    }
}