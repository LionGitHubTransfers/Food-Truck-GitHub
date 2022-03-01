using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LionStudios.Suite.Analytics
{
    public class EventParam
    {
        public const string debug = "debug";
        public const string undefined = "undefined";
        public const string customEventToken = "customEventToken";

        public const string missionID = "missionID";
        public const string missionType = "missionType";
        public const string missionName = "missionName";
        public const string missionAttempt = "missionAttempt";
        public const string isTutorial = "isTutorial";
        
        public const string deviceId = "deviceID";
        public const string Store = "store";


        public const string timeInApp = "timeInApp";
        public const string timestamp = "timestamp";

        public const string funnelStep = "funnelStep";
        public const string funnelLabel = "funnelLabel";
        public const string funnelValue = "funnelValue";

        public const string platform = "platform";
        public const string sdkVersion = "sdkVersion";

        public const string userScore = "userScore";
        public const string levelCollection1 = "levelCollection1";
        public const string levelCollection2 = "levelCollection2";

        public const string userLevel = "userLevel";
        public const string userXP = "userXP";

        public const string adProvider = "adProvider";
        public const string adProviderVersion = "adProviderVersion";
        public const string adProviderError = "adProviderError";
        public const string adRequestTimeMs = "adRequestTimeMs";
        public const string adSdkVersion = "adSdkVersion";
        public const string adStatus = "adStatus";
        public const string adType = "adType";
        public const string adErrorType = "adErrorType";
        public const string adWaterfallIndex = "adWaterfallIndex";

        public const string achievementID = "achievementID";
        public const string achievementName = "achievementName";

        public const string systemName = "systemName";
        public const string systemVersion = "systemVersion";

        public const string isSuccess = "isSuccess";
        public const string additionalData = "additionalData";

        public const string message = "message";
        public const string errorType = "errorType";
        public const string placement = "placement";
        public const string elapsedTime = "elapsedTime";

        public const string cost = "cost";
        public const string purchaseLocation = "purchaseLocation";
        public const string itemType = "itemType";
        public const string itemId = "itemId";
        
        public const string reward = "reward";
        public const string rewardName = "rewardName";
        public const string rewardProducts = "rewardProducts";

        public const string transaction = "transaction";
        public const string transactionID = "transactionID";
        public const string transactionName = "transactionName";
        public const string transactionReceipt = "transactionReceipt";
        public const string transactionReceiptSignature = "transactionReceiptSignature";
        public const string transactionServer = "transactionServer";
        public const string transactionType = "transactionType";
        public const string transactorID = "transactorID";
        public const string productsReceived = "productsReceived";
        public const string productsSpent = "productsSpent";
        
        public const string sequenceId = "sequenceId";
        public const string analyticsVersion = "analyticsVersion";

        public const string modelName = "modelName";
        public const string modelVersion = "modelVersion";
        public const string modelProvider = "modelProvider";
        public const string modelStatus = "modelStatus";
        public const string modelInput = "modelInput";
        public const string modelOutput = "modelOutput";

        public const string experimentName = "experimentName";
        public const string experimentCohort = "experimentCohort";

        public const string coreContextInfo = "coreContextInfo";

        public const string connectedUserId = "connectedUserId";
        public const string socialAlias = "socialAlias";
        public const string socialPlatform = "socialPlatform";
        public const string socialType = "socialType";

        public const string uiAction = "uiAction";
        public const string uiLocation = "uiLocation";
        
        public const string uiName = "uiName";
        public const string uiType = "uiType";
        
        public const string currentSkillLevel = "currentSkillLevel";
        public const string newSkillLevel = "newSkillLevel";
        public const string skillId = "skillId";
        public const string skillName = "skillName";
        
        public const string characterClass = "characterClass";
        public const string characterName = "characterName";
        
        public const string acquisitionChannel = "acquisitionChannel";
        public const string adjAttrAdgroup = "adjAttrAdgroup";
        public const string adjAttrCampaign = "adjAttrCampaign";
        public const string adjAttrCostAmount = "adjAttrCostAmount";
        public const string adjAttrCostCurrency = "adjAttrCostCurrency";
        public const string adjAttrCostType = "adjAttrCostType";
        public const string adjAttrCreative = "adjAttrCreative";
        
        public const string powerUpName = "powerUpName";
        
        public const string featureName = "featureName";
        public const string featureType = "featureType";

        public const string shopID = "shopID";
        public const string shopName = "shopName";
        public const string shopType = "shopType";
        public const string terminationReason = "terminationReason";
        public const string currentSoftBalance = "currentSoftBalance";
        public const string currentHardBalance = "currentHardBalance";

        public const string gift = "gift";
        public const string giftAccepted = "giftAccepted";
        public const string recipientID = "recipientID";
        public const string uniqueTracking = "uniqueTracking";

        public const string inviteType = "inviteType";
        public const string recipients = "recipients";
        public const string isInviteAccepted = "isInvitedAccepted";
        public const string senderID = "senderID";

        public const string buildVersion = "buildVersion";
    }
    
    public class EngagementEvent
    {
        public const string GameStart = "GameStart";
        public const string LevelStart = "LevelStart";
        public const string LevelComplete = "LevelComplete";    
        public const string LevelFail = "LevelFail";
        public const string LevelRestart = "LevelRestart";

        public const string FunnelEvent = "FunnelEvent";
        public const string BannerLoad = "BannerLoad";
        public const string BannerLoadFail = "BannerLoadFail";
        public const string BannerShow = "BannerShow";
        public const string BannerShowFail = "BannerShowFail";
        public const string BannerHide = "BannerHide";
        public const string InterstitialLoad = "InterstitialLoad";
        public const string InterstitialLoadFail = "InterstitialLoadFail";
        public const string InterstitialShow = "InterstitialShow";
        public const string InterstitialShowFail = "InterstitialShowFail";
        public const string InterstitialStart = "InterstitialStart";
        public const string InterstitialEnd = "InterstitialEnd";
        public const string InterstitialClick = "InterstitialClick";

        public const string RewardVideoShow = "RewardVideoShow";
        public const string RewardVideoLoad = "RewardVideoLoad";
        public const string RewardVideoLoadFail = "RewardVideoLoadFail";
        public const string RewardVideoShowFail = "RewardVideoShowFail";
        public const string RewardVideoStart = "RewardVideoStart";
        public const string RewardVideoEnd = "RewardVideoEnd";
        public const string RewardVideoClick = "RewardVideoClick";
        public const string RewardVideoCollect = "RewardVideoCollect";
        
        public const string CrossPromoLoad = "CrossPromoLoad";
        public const string CrossPromoLoadFail = "CrossPromoLoadFail";
        public const string CrossPromoShow = "CrossPromoShow";
        public const string CrossPromoShowFail = "CrossPromoShowFail";
        public const string CrossPromoStart = "CrossPromoStart";
        public const string CrossPromoEnd = "CrossPromoEnd";
        public const string CrossPromoClick = "CrossPromoClick";

        public const string InAppPurchase = "InAppPurchase";

        public const string DebugEvent = "DebugEvent";
        public const string ErrorEvent = "ErrorEvent";
        public const string PredictionResult = "PredictionResult";
        public const string AbCohort = "AbCohort";

        public const string MissionStarted = "MissionStarted";
        public const string MissionCompleted = "MissionCompleted";
        public const string MissionFailed = "MissionFailed";
        public const string MissionStep = "MissionStep";
        public const string MissionAbandoned = "MissionAbandoned";

        public const string ItemCollected = "ItemCollected";
        public const string ShopEntered = "ShopEntered";
        public const string Achievement = "Achievement";
        public const string SocialConnect = "SocialConnect";
        public const string UiInteraction = "UiInteraction";
        public const string LevelAbandoned = "LevelAbandoned";
        public const string SkillUpgraded = "SkillUpgraded";
        public const string CharacterUpdated = "CharacterUpdated";
        public const string AdjustAttribution = "AdjustAttribution";
        public const string GiftSent = "GiftSent";
        public const string GiftReceived = "GiftReceived";
        public const string InviteSent = "InviteSent";
        public const string InviteReceived = "InviteReceived";
        public const string PowerUpUsed = "PowerUpUsed";
        public const string Social = "Social";
        public const string NewPlayer = "NewPlayer";
        public const string GameEnded = "GameEnded";
        public const string FeatureUnlocked = "FeatureUnlocked";

    }

}
