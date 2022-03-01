using System;
using System.Collections;
using System.Collections.Generic;
using LionStudios.Suite;
using LionStudios.Suite.Analytics;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class LionAnalyticsExampleScript : MonoBehaviour
{
    public Button defaultButton;


    //Global Params
    int globalParam;


    // Log Event Globals    
    int test_data_int = 1234;


    //Level Events Globals
    private int levelNum;
    private int attemptNum;
    int levelEventsCounter = 1;
    int levelEventsScore;
    int level_test_data_int = 1234;


    //Mission Event Globals
    int missionAttempt;
    int missionScore;
    int mission_test_data_int = 1234;


    //Ads Events Globals
    int adsLevel;


    // IAP Events Globals
    int IAP_test_data_int = 1234;
    int virtualCurrencyAmount;
    float realCurrencyAmount;


    // Other Events Globals
    int funnelStep;
    int funnelVal;
    int other_test_data_int = 1234;


    private void Start()
    {
        defaultButton.gameObject.SetActive(false);


        AddEventButton("Set Globals", () =>
        {
            globalParam += 100;
            LionAnalytics.SetPlayerXP(globalParam);
            LionAnalytics.SetPlayerLevel(globalParam);
            LionAnalytics.SetHardCurrency(globalParam);
            LionAnalytics.SetSoftCurrency(globalParam);
            Debug.Log("Global Paramters Set");
        });



        AddEventButton("Test Log Events (Custom Events)", () =>
        {
            test_data_int += 100;
            Dictionary<string, object> args = new Dictionary<string, object>()
            {
                {"param_int",1234},
                {"param_string","test_string"},
                {"param_float",56.70}
            };

            Dictionary<string, object> additionalData = new Dictionary<string, object>()
            {
                {"test_data_int",test_data_int},
                {"test_data_string","test_string"},
                {"test_data_float",56.70}
            };

            //LogEvent 1 (String only)
            LionAnalytics.LogEvent("logevent_test (1)", false, args);

            //Log Event 2 (String + Dict)
            LionAnalytics.LogEvent("logevent_test (2)", args, false, additionalData);

            //Log Event 3 (object)
            LionGameEvent ev = new LionGameEvent();
            ev.AddParam(EventParam.customEventToken, "Test_ID");
            LionAnalytics.LogEvent(ev, false, additionalData);

        });


        AddEventButton("Test Level Events", () =>
        {
            if (levelEventsCounter == 1)
            {
                levelNum = 1;
            }
            else if (levelEventsCounter == 2)
            {
                levelNum = 5;
            }
            else if (levelEventsCounter == 3)
            {
                levelNum = 7;
            }
            else
            {
                levelNum++;
            }
            attemptNum++;
            levelEventsScore += 100;

            levelEventsCounter++;

            Dictionary<string, object> additionalData = new Dictionary<string, object>()
            {
                {"test_data_int",level_test_data_int},
                {"test_data_string","test_string"},
                {"test_data_float",56.70}
            };

            Reward testReward = new Reward("test_product", "test_type", 5);

            LionAnalytics.LevelStart(levelNum, attemptNum, levelEventsScore, "test_level_collection1",
            "test_level_collection2", "test_mission_type", "test_mission_name", additionalData);

            LionAnalytics.LevelComplete(levelNum, attemptNum, levelEventsScore, testReward, "test_level_collection1",
            "test_level_collection2", "test_mission_type", "test_mission_name", additionalData);

            LionAnalytics.LevelFail(levelNum, attemptNum, levelEventsScore, "test_level_collection1",
            "test_level_collection2", "test_mission_type", "test_mission_name", additionalData);

            LionAnalytics.LevelAbandoned("test_mission_id", "test_mission_name", "test_mission_type", attemptNum,
            levelEventsScore, additionalData);

            LionAnalytics.LevelRestart(levelNum, attemptNum, levelEventsScore, "test_level_collection1",
            "test_level_collection2", "test_mission_type", "test_mission_name", additionalData);


            level_test_data_int += 100;
        });



        AddEventButton("Test Mission Events", () =>
        {
            missionScore += 100;
            missionAttempt++;

            Dictionary<string, object> additionalData = new Dictionary<string, object>()
            {
                {"test_data_int",mission_test_data_int},
                {"test_data_string","test_string"},
                {"test_data_float",56.70}
            };

            Reward testReward = new Reward("test_product", "test_type", 5);

            LionAnalytics.MissionStarted(false, "test_mission_type", "test_mission_name", "test_mission_id",
                missionAttempt, additionalData);

            LionAnalytics.MissionCompleted(false, "test_mission_type", "test_mission_name", "test_mission_id",
                missionAttempt, missionScore, additionalData, testReward);

            LionAnalytics.MissionFailed(false, "test_mission_type", "test_mission_name", "test_mission_id",
                missionAttempt, missionScore, additionalData, "test_termination_reason");

            LionAnalytics.MissionStep(false, "test_mission_type", "test_mission_name", "test_mission_id",
                missionAttempt, missionScore, additionalData);

            LionAnalytics.MissionAbandoned(false, "test_mission_type", "test_mission_name", "test_mission_id",
                missionAttempt, missionScore, additionalData);


            mission_test_data_int += 100;

        });

        AddEventButton("Test Banner Events", () =>
        {
            LionAnalytics.BannerLoad("FakePlacementHere", "FakeNetworkHere");
            LionAnalytics.BannerLoadFail("FakeNetworkHere", AdErrorType.Unknown);
            LionAnalytics.BannerShow("FakePlacementHere", "FakeNetworkHere");
            LionAnalytics.BannerShowFail("FakePlacementHere", "FakeNetworkHere");
            LionAnalytics.BannerHide("FakePlacementHere");

        });


        AddEventButton("Test Inter Events", () =>
        {
            adsLevel++;
            LionAnalytics.InterstitialLoad("FakePlacementHere", "FakeNetworkHere");
            LionAnalytics.InterstitialLoadFail("FakePlacementHere", AdErrorType.Unknown);
            LionAnalytics.InterstitialShow("FakePlacementHere", "FakeNetworkHere");
            LionAnalytics.InterstitialShowFail("FakePlacementHere", "FakeNetworkHere");
            LionAnalytics.InterstitialStart("FakePlacementHere", "FakeNetworkHere", adsLevel);
            LionAnalytics.InterstitialEnd("FakePlacementHere", "FakeNetworkHere", adsLevel);
            LionAnalytics.InterstitialClick("FakePlacementHere", "FakeNetworkHere");

        });

        AddEventButton("Test Rewarded Events", () =>
        {
            adsLevel++;
            LionAnalytics.RewardVideoLoad("FakePlacementHere", "FakeNetworkHere");
            LionAnalytics.RewardVideoLoadFail("FakePlacementHere", levelNum, AdErrorType.Unknown);
            LionAnalytics.RewardVideoShow("FakePlacementHere", "FakeNetworkHere", adsLevel);
            LionAnalytics.RewardVideoShowFail("FakePlacementHere", "FakeNetworkHere", AdErrorType.Undefined, adsLevel);
            LionAnalytics.RewardVideoStart("FakePlacementHere", "FakeNetworkHere", adsLevel);
            LionAnalytics.RewardVideoEnd("FakePlacementHere", "FakeNetworkHere", adsLevel);
            LionAnalytics.RewardVideoClick("FakePlacementHere", "FakeNetworkHere");
            LionAnalytics.RewardVideoCollect("FakePlacementHere", new Reward("FakeProduct", "General", 5));
        });


        AddEventButton("Test CrossPromo Events", () =>
        {
            adsLevel++;
            LionAnalytics.CrossPromoLoad("FakePlacementHere", "FakeNetworkHere", adsLevel);
            LionAnalytics.CrossPromoLoadFail("FakeNetworkHere", adsLevel);
            LionAnalytics.CrossPromoShow("FakePlacementHere", "FakeNetworkHere", adsLevel);
            LionAnalytics.CrossPromoShowFail("FakePlacementHere", "FakeNetworkHere", AdErrorType.Undefined, adsLevel);
            LionAnalytics.CrossPromoStart("FakePlacementHere", "FakeNetworkHere", adsLevel);
            LionAnalytics.CrossPromoEnd("FakePlacementHere", "FakeNetworkHere", adsLevel);
            LionAnalytics.CrossPromoClick("FakePlacementHere", "FakeNetworkHere", adsLevel);
        });

        AddEventButton("Test IAP Events", () =>
        {
            Dictionary<string, object> additionalData = new Dictionary<string, object>()
            {
                {"test_data_int",IAP_test_data_int},
                {"test_data_string","test_string"},
                {"test_data_float",56.70}
            };

            virtualCurrencyAmount += 100;
            realCurrencyAmount += 56.70f;

            Product recieved = new Product();
            recieved.AddVirtualCurrency(new VirtualCurrency("Gold", "Premium", 500));

            Product sent = new Product();
            sent.AddRealCurrency(new RealCurrency("USD", 5));

            Transaction newTransaction = new Transaction("Gold Transaction", "Currency", recieved, sent, "ID");

            LionAnalytics.InAppPurchase(newTransaction, additionalData, "test_product_id", "test_transaction_id");

            LionAnalytics.InAppPurchase("test_purchase_name", sent, recieved, "test_purchase_location",
                "test_product_id", "test_transaction_id", additionalData);


            LionAnalytics.InAppPurchase(virtualCurrencyAmount, "test_virtual_Currency_name", "test_virtual_currency_type",
               "test_real_currency_type", realCurrencyAmount, "test_purchase_name", "test_product_ID", "test_transaction_id", additionalData);


            IAP_test_data_int += 100;

        });



        AddEventButton("Test Other Events", () =>
        {
            funnelStep++;
            funnelVal++;

            Dictionary<string, object> additionalData = new Dictionary<string, object>()
            {
                {"param_int",other_test_data_int},
                {"param_string","test_string"},
                {"param_float",56.70}
            };


            LionAnalytics.GameStart();

            LionAnalytics.FunnelEvent(funnelStep, "test_funnel_label", funnelVal, funnelStep, false, additionalData);

            LionAnalytics.DebugEvent("test_debug_event_message", additionalData);

            LionAnalytics.ErrorEvent(ErrorEventType.Warning, "test_debug_event_message",additionalData);

            LionAnalytics.PredictionResult("test_model_name", "test_model_version", "test_model_Input",
                "test_model_output", additionalData);

            Reward testReward = new Reward("test_name", "test_type", 5);

            LionAnalytics.ItemCollected(testReward, additionalData);

            LionAnalytics.ShopEntered("test_shop_name", "test_shop_ID", "test_shop_type",additionalData);

            LionAnalytics.Achievement(testReward, "test_achievement_ID", "test_Achievement_name", additionalData);
            
            LionAnalytics.SocialConnect("test_connected_user_id", "test_social_alias","test_social_platform", additionalData);

            LionAnalytics.UiInteraction("test_event_name", "test_platform", "test_uiAction", "test_uiLocation",
                "test_uiName", "test_uiType",additionalData);

            LionAnalytics.SkillUpgraded(funnelVal,funnelStep,"test_skill_ID", "test_skill_name",additionalData);

            LionAnalytics.CharacterUpdated("test_character_class", "test_character_name", additionalData);

            other_test_data_int += 100;
        });



          AddEventButton("Test Other Events 2 ", () =>
        {
            funnelStep++;
            funnelVal++;

            Dictionary<string, object> additionalData = new Dictionary<string, object>()
            {
                {"param_int",other_test_data_int},
                {"param_string","test_string"},
                {"param_float",56.70}
            };

            Reward giftReward = new Reward("test", "testType",5);     
            
            LionAnalytics.GiftSent(giftReward,"test_recipient_ID","test_tracking",additionalData);

            LionAnalytics.GiftReceived(giftReward,"test_sender_ID", false, "test_tracking", additionalData);
            
            LionAnalytics.InviteSent("test_unique_tracking", "test_invite_type", null, additionalData);

            LionAnalytics.InviteReceived("test_sender_ID", "test_unique_tracking","test_invite_type",false,
                additionalData);

            LionAnalytics.PowerUpUsed("test_mission_ID","test_mission_type",funnelVal,"test_powerUp",additionalData);

            LionAnalytics.Social("test_social_type",additionalData);

            LionAnalytics.NewPlayer();

            LionAnalytics.GameEnded();

            LionAnalytics.FeatureUnlocked("test_event_name", "test_feature_name", "test_feature_type",additionalData);

            other_test_data_int += 100;
        });
    }

    private void AddEventButton(string buttonName, UnityAction ev, bool disabled = false)
    {
        Button newButton = Button.Instantiate(defaultButton, defaultButton.transform.parent);

        newButton.gameObject.name = buttonName.ToSnakeCase();
        newButton.GetComponentInChildren<Text>().text = buttonName;

        newButton.onClick.RemoveAllListeners();
        newButton.onClick.AddListener(ev);
        newButton.interactable = !disabled;
        newButton.gameObject.SetActive(true);
    }
}