using System.Collections;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;
using LionStudios.Suite.Analytics;
using System.Text;
using LionStudios.Runtime.Sdk;
using UnityEditor.Compilation;

namespace Tests
{
    [TestFixture]
    public class LionAnalyticsTests
    {
        private const float TIMEOUT = 5f;

        [UnityTest]
        public IEnumerator TestGeneralEvents()
        {
            Reward testReward = new Reward("test Reward","testType",3);

            
            yield return ThrowEvent(() => { LionAnalytics.GiftReceived(gift: testReward,
                senderID: "1Z5RIF",
                giftAccepted:false,
                uniqueTracking: "testTraclong"); }, 
                (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.InGame);

                Assert.IsNotNull(gameEvent.TryGetParam<string>(EventParam.senderID));
                //Assert.IsNotNull(gameEvent.eventParams[EventParam.senderID]);

                // score
                Assert.IsFalse(gameEvent.TryGetParam<bool>(EventParam.giftAccepted));

                // attempt
                Assert.IsNotNull(gameEvent.TryGetParam<string>(EventParam.uniqueTracking));
            });

            yield return ThrowEvent(() => { LionAnalytics.GameStart(); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Game);
                Assert.AreEqual(gameEvent.gameEventType, GameEventType.Started);
            });

            yield return ThrowEvent(() => { LionAnalytics.DebugEvent("Debug_Event"); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Debug);
                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.message), "Debug_Event");
            });
            
            yield return ThrowEvent(() => { LionAnalytics.LevelFail(level: 3, attemptNum: 5); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.missionID), "3");
                Assert.AreEqual(gameEvent.TryGetParam<int>(EventParam.missionAttempt), 5);
            });
            
            yield return ThrowEvent(() => { LionAnalytics.InAppPurchase(virtualCurrencyAmount:5,virtualCurrencyName:"coins",virtualCurrencyType:"TestVirtualType",
                realCurrencyType:"USD",realCurrencyAmount:4,purchaseName:"TestName"); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.IAP);
                Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.transaction));
            });
        }

        [UnityTest]
        public IEnumerator TestAdsEvents()
        {
            const string placement = "placement_";
            const string network = "network_";

            string placementId;
            string networkId;

            ///
            /// BANNER
            ///
            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.BannerShow(placementId, networkId); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adEventType, AdEventType.Show);
                Assert.AreEqual(gameEvent.adType, AdType.Banner);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.placement), placementId);
                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
            });

            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.BannerHide(placementId); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.Banner);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.Hide);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.placement), placementId);
            });
            
            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.BannerLoad(placementId, networkId); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.Banner);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.Loaded);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.placement), placementId);
                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
            });

            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.BannerLoadFail(network: networkId); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.Banner);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.LoadFail);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
            });

            ///
            /// Interstitial
            ///
            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.InterstitialLoad(placementId, networkId); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.Interstitial);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.Loaded);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.placement), placementId);
                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
            });

            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.InterstitialLoadFail(network: networkId, AdErrorType.NoFill); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.Interstitial);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.LoadFail);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
            });

            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.InterstitialShow(placementId, networkId); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.Interstitial);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.Show);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.placement), placementId);
                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
            });

            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.InterstitialShowFail(placementId, networkId); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.Interstitial);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.ShowFail);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.placement), placementId);
                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
            });

            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.InterstitialClick(placementId, networkId); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.Interstitial);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.Clicked);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.placement), placementId);
                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
            });

            ///
            /// Reward Video
            ///
            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.RewardVideoLoad(placementId, networkId); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.RV);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.Loaded);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.placement), placementId);
                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
            });

            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.RewardVideoLoadFail(networkId); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.RV);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.LoadFail);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
            });

            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.RewardVideoShow(placementId, networkId); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.RV);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.Show);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.placement), placementId);
                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
            });

            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.RewardVideoShowFail(placementId, networkId); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.RV);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.ShowFail);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.placement), placementId);
                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
            });

            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.RewardVideoClick(placementId, networkId); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.RV);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.Clicked);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.placement), placementId);
                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
            });

            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.RewardVideoCollect(placementId, reward: null); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.RV);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.RewardRecieved);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.placement), placementId);
            });


            ///
            /// Cross Promo
            ///
            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.CrossPromoLoad(placementId, networkId,6); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.CrossPromo);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.Loaded);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.placement), placementId);
                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
                Assert.AreEqual(gameEvent.TryGetParam<object>(EventParam.missionID), 6);
            });

            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.CrossPromoLoadFail(networkId,10); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.CrossPromo);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.LoadFail);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
                Assert.AreEqual(gameEvent.TryGetParam<object>(EventParam.missionID), 10);
            });

            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.CrossPromoShow(placementId, networkId,5); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.CrossPromo);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.Show);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.placement), placementId);
                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
                Assert.AreEqual(gameEvent.TryGetParam<object>(EventParam.missionID), 5);
            });

            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.CrossPromoShowFail(placementId, networkId,AdErrorType.Undefined,6); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.CrossPromo);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.ShowFail);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.placement), placementId);
                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
                Assert.AreEqual(gameEvent.TryGetParam<object>(EventParam.missionID), 6);
            });

            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.CrossPromoStart(placementId, networkId,22); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.CrossPromo);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.Show);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.placement), placementId);
                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
                Assert.AreEqual(gameEvent.TryGetParam<object>(EventParam.missionID), 22);
            });

            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.CrossPromoEnd(placementId, networkId,22); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.CrossPromo);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.Hide);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.placement), placementId);
                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
                Assert.AreEqual(gameEvent.TryGetParam<object>(EventParam.missionID), 22);
            });


            placementId = string.Format("{0}_{1}", placement, Random.Range(100, 999));
            networkId = string.Format("{0}_{1}", network, Random.Range(100, 999));
            yield return ThrowEvent(() => { LionAnalytics.CrossPromoClick(placementId, networkId,22); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Ad);

                Assert.AreEqual(gameEvent.adType, AdType.CrossPromo);
                Assert.AreEqual(gameEvent.adEventType, AdEventType.Clicked);

                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.placement), placementId);
                Assert.AreEqual(gameEvent.TryGetParam<string>(EventParam.adProvider), networkId);
                Assert.AreEqual(gameEvent.TryGetParam<object>(EventParam.missionID), 22);
            });

        }

        [UnityTest]
        public IEnumerator TestLevelEvents()
        {
            yield return ThrowEvent(() => { LionAnalytics.LevelStart(level: 100, attemptNum: 3, score: null); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Level);
                Assert.AreEqual(gameEvent.levelEventType, LevelEventType.Start);

                Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionID));
                Assert.IsNotNull(gameEvent.eventParams[EventParam.missionID]);

                Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionAttempt));
                Assert.IsNotNull(gameEvent.eventParams[EventParam.missionAttempt]);
            });

            yield return ThrowEvent(() => { LionAnalytics.LevelComplete(level: 150, attemptNum: 3, reward: new Reward("reward", "rewardType", 1)); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Level);
                Assert.AreEqual(gameEvent.levelEventType, LevelEventType.Complete);

                // score
                Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionID));
                Assert.IsNotNull(gameEvent.eventParams[EventParam.missionID]);

                // attempt
                Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionAttempt));
                Assert.IsNotNull(gameEvent.eventParams[EventParam.missionAttempt]);

                // reward
                Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.reward));
                Assert.IsNotNull(gameEvent.eventParams[EventParam.reward]);
            });

            yield return ThrowEvent(() => { LionAnalytics.LevelFail(level: 200, score: 50, attemptNum: 3); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Level);
                Assert.AreEqual(gameEvent.levelEventType, LevelEventType.Fail);

                // level
                Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionID));
                Assert.IsNotNull(gameEvent.eventParams[EventParam.missionID]);

                // score
                Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.userScore));
                Assert.IsNotNull(gameEvent.eventParams[EventParam.userScore]);

                // attempt
                Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionAttempt));
                Assert.IsNotNull(gameEvent.eventParams[EventParam.missionAttempt]);
            });

            yield return ThrowEvent(() => { LionAnalytics.LevelRestart(level: 300, score: 50, attemptNum: 3); }, (gameEvent) =>
            {
                Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Level);
                Assert.AreEqual(gameEvent.levelEventType, LevelEventType.Restart);

                // level
                Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionID));
                Assert.IsNotNull(gameEvent.eventParams[EventParam.missionID]);

                // score
                Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.userScore));
                Assert.IsNotNull(gameEvent.eventParams[EventParam.userScore]);

                // attempt
                Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionAttempt));
                Assert.IsNotNull(gameEvent.eventParams[EventParam.missionAttempt]);
            });


        }

        [UnityTest]
        public IEnumerator TestMissionEvents()
        {
            Dictionary<string, object> test = new Dictionary<string, object>()
            {
                {"test", 3000}
            };
            yield return ThrowEvent(() => { LionAnalytics.MissionStarted(true, "type", "name", "id", 2, test); },
                (gameEvent) =>
                {
                    Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Mission);
                    Assert.AreEqual(gameEvent.missionEventType, LionStudios.Suite.Analytics.MissionEventType.Start);
                    
                    //isTutorial
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.isTutorial));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.isTutorial]);
                    
                    //missionType
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionType));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.missionType]);
                    
                    //MissionName
                   Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionName));
                   Assert.IsNotNull(gameEvent.eventParams[EventParam.missionName]);
                   
                   //MissionID
                   Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionID));
                   Assert.IsNotNull(gameEvent.eventParams[EventParam.missionID]);
                    
                   //MissionAttempt
                   Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionAttempt));
                   Assert.IsNotNull(gameEvent.eventParams[EventParam.missionAttempt]);
                   
                   //Additional Data
                   Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.additionalData));
                   Assert.IsNotNull(gameEvent.eventParams[EventParam.additionalData]);
                });

            yield return ThrowEvent(() => { LionAnalytics.MissionCompleted(true, "type", "name", "id", 2, 3, test); },
                (gameEvent) =>
                {
                    Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Mission);
                    Assert.AreEqual(gameEvent.missionEventType, LionStudios.Suite.Analytics.MissionEventType.Completed);
                    
                    //isTutorial
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.isTutorial));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.isTutorial]);
                    
                    //missionType
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionType));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.missionType]);
                    
                    //MissionName
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionName));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.missionName]);
                   
                    //MissionID
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionID));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.missionID]);
                    
                    //MissionAttempt
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionAttempt));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.missionAttempt]);
                    
                    //UserScore
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.userScore));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.userScore]);
                    
                    //Additional Data
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.additionalData));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.additionalData]);
                    
                    //Reward
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.reward));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.reward]);
                });

            yield return ThrowEvent(() => { LionAnalytics.MissionFailed(true, "type", "name", "id", 2, 2, test); },
                (gameEvent) =>
                {
                    Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Mission);
                    Assert.AreEqual(gameEvent.missionEventType, LionStudios.Suite.Analytics.MissionEventType.Failed);
                    
                    //isTutorial
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.isTutorial));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.isTutorial]);
                    
                    //missionType
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionType));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.missionType]);
                    
                    //MissionName
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionName));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.missionName]);
                   
                    //MissionID
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionID));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.missionID]);
                    
                    //MissionAttempt
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionAttempt));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.missionAttempt]);
                    
                    //UserScore
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.userScore));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.userScore]);
                    
                    //Additional Data
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.additionalData));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.additionalData]);
                    
                    //Termination Reason
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.terminationReason));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.terminationReason]);
                });

            yield return ThrowEvent(() => { LionAnalytics.MissionStep(true, "type", "name", "id", 1, 2, test); },
                (gameEvent) =>
                {
                    Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Mission);
                    Assert.AreEqual(gameEvent.missionEventType, LionStudios.Suite.Analytics.MissionEventType.Step);
                    
                    //isTutorial
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.isTutorial));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.isTutorial]);
                    
                    //missionType
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionType));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.missionType]);
                    
                    //MissionName
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionName));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.missionName]);
                   
                    //MissionID
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionID));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.missionID]);
                    
                    //MissionAttempt
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionAttempt));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.missionAttempt]);
                    
                    //UserScore
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.userScore));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.userScore]);
                    
                    //Additional Data
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.additionalData));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.additionalData]);
                });

            yield return ThrowEvent(() => { LionAnalytics.MissionAbandoned(true, "type", "name", "id", 1, 2, test); },
                (gameEvent) =>
                {
                    Assert.AreEqual(gameEvent.eventType, LionStudios.Suite.Analytics.EventType.Mission);
                    Assert.AreEqual(gameEvent.missionEventType, MissionEventType.Abandoned);
                    
                    //isTutorial
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.isTutorial));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.isTutorial]);
                    
                    //missionType
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionType));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.missionType]);
                    
                    //MissionName
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionName));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.missionName]);
                   
                    //MissionID
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionID));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.missionID]);
                    
                    //MissionAttempt
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.missionAttempt));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.missionAttempt]);
                    
                    //UserScore
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.userScore));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.userScore]);
                    
                    //Additional Data
                    Assert.IsNotNull(gameEvent.TryGetParam<object>(EventParam.additionalData));
                    Assert.IsNotNull(gameEvent.eventParams[EventParam.additionalData]);
                });
        }

        private static LionGameEvent _eventResult;
        private static SdkId[] _exclusionResult, _UAexclusionResult;
        private static bool _eventComplete;
        private void OnEventLogged(LionGameEvent ev, bool isUAEvent, params SdkId[] exclusiveTo)
        {
            _eventResult = ev;
            _exclusionResult = exclusiveTo;
            _eventComplete = true;
        }

        public IEnumerator ThrowEvent(System.Action evAction, System.Action<LionGameEvent> finishAssertion)
        {
            // reset results
            _eventComplete = false;
            _eventResult = new LionGameEvent();

            // subscribe to events
            LionAnalytics.OnLogEvent -= OnEventLogged;
            LionAnalytics.OnLogEvent += OnEventLogged;

            // capture event name and fire event
            string eventName = evAction.Method.Name;
            Debug.Log($"Event '{eventName}'");
            evAction();

            // wait for result or timeout
            float timer = TIMEOUT;
            while (!_eventComplete)
            {
                timer -= Time.deltaTime;
                if (timer <= 0.0f)
                {
                    Assert.Fail("Event Timeout!");
                    yield break;
                }

                yield return null;
            }

            // compare results
            finishAssertion.Invoke(_eventResult);
        }
    }
}
