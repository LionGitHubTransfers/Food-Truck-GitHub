using System.Collections;
using System.Collections.Generic;
using LionStudios.Runtime.Sdk;
using LionStudios.Suite.Core;
using UnityEngine;
using LionStudios.Suite.Debugging;

namespace LionStudios.Suite.Analytics
{
    public class Engagement : PersistentData<Engagement>
    {
        private static Engagement _instance;

        private static Engagement Instance
        {
            get
            {   
                if(_instance == null)
                {
                    _instance = Load();
                }
                return _instance;
            }
        }
        
        public Dictionary<string, EngagementInfo> _events = new Dictionary<string, EngagementInfo>();
        
        
        /// <summary>
        /// Add an event to be tracked for engagement. Lion Analytics tracks the fire count of the event and automatically fires
        /// a custom event when a 'milestone' is reached. Use this for cost-per-engagement (CPE) events. 
        /// </summary>
        /// <param name="eventName">The event name to be tracked by Lion Analytics. This is NOT the event token.</param>
        /// <param name="milestones"></param>
        public static void RegisterEngagementEvent(EngagementInfo engagementEvent)
        {
            if (engagementEvent.milestones == null)
            {
                LionStudios.Suite.Debugging.LionDebug
                    .LogWarning("Failed to add engagement event. Cannot register engagement event(s) without milestones.");
                return;
            }
            
            if (!Instance._events.ContainsKey(engagementEvent.eventName))
            {
                EngagementInfo info = new EngagementInfo(engagementEvent.eventName);
                info.milestones = engagementEvent.milestones;
                Instance._events.Add(engagementEvent.eventName, info);
            }
            else
            {
                // Replace overlapping milestone tokens if user attempts to
                // register existing engagement
                EngagementInfo info = Instance._events[engagementEvent.eventName];
                for (int i = 0; i < engagementEvent.milestones.Length; i++)
                {
                    Milestone ms = engagementEvent.milestones[i];
                    if (info.ContainsMilestone(ms.value))
                    {
                        info.SetMilestoneToken(ms.value, ms.adjustToken);
                    }
                }
            }
            
            Instance.SaveLocal();
        }

        /// <summary>
        /// Add an event to be tracked for engagement. Lion Analytics tracks the fire count of the event and automatically fires
        /// a custom event when a 'milestone' is reached. Use this for cost-per-engagement (CPE) events. 
        /// </summary>
        /// <param name="eventName">The event name to be tracked by Lion Analytics. This is NOT the event token.</param>
        /// <param name="milestones"></param>
        public static void RegisterEngagementEvent(string eventName, params Milestone[] milestones)
        {
            if (milestones == null)
            {
                LionStudios.Suite.Debugging.LionDebug
                    .LogWarning("Failed to add engagement event. Cannot register engagement event(s) without milestones.");
                return;
            }
            
            if (!Instance._events.ContainsKey(eventName))
            {
                EngagementInfo info = new EngagementInfo(eventName);
                info.milestones = milestones;
                Instance._events.Add(eventName, info);
            }
            else
            {
                // Replace overlapping milestone tokens if user attempts to
                // register existing engagement
                EngagementInfo info = Instance._events[eventName];
                for (int i = 0; i < milestones.Length; i++)
                {
                    Milestone ms = milestones[i];
                    if (info.ContainsMilestone(ms.value))
                    {
                        info.SetMilestoneToken(ms.value, ms.adjustToken);
                    }
                }
            }
            
            Instance.SaveLocal();
        }

        public static void TryFireEvent(string eventName, int levelNum,
            Dictionary<string, object> parameters = null)
        {
            if (!Instance._events.ContainsKey(eventName))
            {

                //LionDebug.Log($"Failed to fire engagement event. No event with name '{eventName}' exist.", LionDebug.DebugLogLevel.Warn);
                return;
            }

            EngagementInfo e = Instance._events[eventName];
            Milestone ms = null;
            if (e.ContainsMilestone(levelNum, out ms))
            {
                FireEvent(e, ms);
                Instance.SaveLocal();
            }
        }

        public static void TryFireEvent(string eventName, string missionName,
            Dictionary<string, object> parameters = null)
        {
            if (!Instance._events.ContainsKey(eventName))
            {
                LionDebug.Log($"Failed to fire engagement event. No event with name '{eventName}' exist.", LionDebug.DebugLogLevel.Verbose);
                return;
            }

            EngagementInfo e = Instance._events[eventName];
            Milestone ms = null;
            if (e.ContainsMilestone(missionName, out ms))
            {
                FireEvent(e, ms);
                Instance.SaveLocal();
            }
        }
        

        /// <summary>
        /// Steps the fire count of an engagement event and fires a custom event if it has reached a milestone.
        /// </summary>
        /// <param name="eventName"></param>
        public static void TryFireEvent(string eventName, Dictionary<string, object> parameters = null)
        {
            if (!Instance._events.ContainsKey(eventName))
            {
                LionDebug.Log($"Failed to fire engagement event. No event with name '{eventName}' exist.",LionDebug.DebugLogLevel.Verbose);
                return;
            }

            EngagementInfo e = Instance._events[eventName];
            Milestone ms = null;
            if (e.ContainsMilestone(++e.fireCount, out ms))
            {
                FireEvent(e, ms);
                Instance.SaveLocal();
            }
        }

        private static void FireEvent(EngagementInfo e, Milestone ms)
        {
            LionGameEvent gameEvent = new LionGameEvent();
            gameEvent.eventName = ms.adjustToken;
            gameEvent.AddParam(EventParam.customEventToken, ms.adjustToken);
            LionAnalytics.LogEvent(gameEvent, isUAEvent: true, additionalData: null, SdkId.Adjust);

            if (ms.firebaseToken != null)
            {
                LionGameEvent firebaseEvent = new LionGameEvent();
                firebaseEvent.eventName = ms.firebaseToken;
                firebaseEvent.AddParam(EventParam.customEventToken, ms.firebaseToken, overrideExisting: true);
                LionAnalytics.LogEvent(firebaseEvent, isUAEvent: true, additionalData: null,SdkId.Firebase);
            }
        }
    }
}