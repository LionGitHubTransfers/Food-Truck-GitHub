using UnityEngine;

namespace LionStudios.Suite.Analytics.Heartbeat
{
    public class HeartbeatManager
    {
        private float _maxHeartbeatDelay = 60f;
        private float _lastHeartbeatTime = 0f;
        
        public HeartbeatManager()
        {
            ResetHeartbeat();
        }
        
        public void CheckForHeartbeat()
        {
            if (Time.time - _lastHeartbeatTime >= _maxHeartbeatDelay)
            {
                LionAnalytics.Heartbeat();
                ResetHeartbeat();
            }
        }

        public void ResetHeartbeat()
        {
            _lastHeartbeatTime = Time.time;
        }
    }
}