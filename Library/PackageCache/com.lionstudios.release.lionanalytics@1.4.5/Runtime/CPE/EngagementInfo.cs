using System;
using System.Collections.Generic;
using UnityEngine;

namespace LionStudios.Suite.Analytics
{
    #region CPE
    [Serializable]
    public class Milestone
    {
        [SerializeField] public int value;
        [SerializeField] public string missionName;
        [SerializeField] public string adjustToken;
        [SerializeField] public string firebaseToken;
        
        public Milestone(int value)
        {
            this.value = value;
        }
        
        public Milestone(int value, string adjustToken)
        {
            this.value = value;
            this.adjustToken = adjustToken;
        }
        
        public Milestone(int value, string adjustToken, string firebaseToken)
        {
            this.value = value;
            this.adjustToken = adjustToken;
            this.firebaseToken = firebaseToken;
        }
        

        // Constructors for Mission CPE events
        public Milestone(string missionName)
        {
            this.missionName = missionName;
        }
        
        public Milestone(string missionName, string adjustToken)
        {
            this.missionName = missionName;
            this.adjustToken = adjustToken;
        }
        
        public Milestone(string missionName, string adjustToken, string firebaseToken)
        {
            this.missionName = missionName;
            this.adjustToken = adjustToken;
            this.firebaseToken = firebaseToken;
        }
    }

    [Serializable]
    public class EngagementInfo
    {
        [SerializeField] public string eventName;
        [SerializeField] public int fireCount;
        [SerializeField] public Milestone[] milestones;

        public EngagementInfo(string eventName)
        {
            this.eventName = eventName;
        }
        
        public EngagementInfo(string eventName, params Milestone[] milestones)
        {
            this.eventName = eventName;
            this.milestones = milestones;
        }

        public bool ContainsMilestone(int value)
        {
            foreach (var t in milestones)
            {
                if (t.value == value)
                {
                    return true;
                }
            }

            return false;
        }
        
        
        public bool ContainsMilestone(int value, out Milestone milestone)
        {
            foreach (var t in milestones)
            {
                if (t.value == value)
                {
                    milestone = t;
                    return true;
                }
            }

            milestone = null;
            return false;
        }


        public bool ContainsMilestone(string value, out Milestone milestone)
        {
            foreach (var t in milestones)
            {
                if (t.missionName == value)
                {
                    milestone = t;
                    return true;
                }
            }

            milestone = null;
            return false;
        }

        public void ResetFireCount()
        {
            fireCount = 0;
        }

        /// <summary>
        /// Use for debugging
        /// </summary>
        public void SetFireCount(int value)
        {
            fireCount = value;
        }

        public void SetMilestoneToken(int ms, string adjustToken = null, string firebaseToken = null)
        {
            for (int i = 0; i < milestones.Length; i++)
            {
                if (milestones[i].value == ms)
                {
                    if (!string.IsNullOrEmpty(adjustToken))
                    {
                        milestones[i].adjustToken = adjustToken;
                    }

                    if (!string.IsNullOrEmpty(firebaseToken))
                    {
                        milestones[i].firebaseToken = firebaseToken;
                    }
                }
            }
        }
    }

    #endregion
}