using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using LionStudios.Suite.Utility.Json;
using LionStudios.Suite.Debugging;
using UnityEngine;

namespace LionStudios.Suite.Analytics
{
    public enum EventType
    {
        Undefined = 0,
        Game = 1,
        Ad = 2,
        Level = 3,
        IAP = 4,
        Debug = 5,
        ML = 6,
        ABTest = 7,
        Heartbeat = 8,
        Funnel = 9,
        Error = 10,
        Social = 12,
        InGame = 15,
        Mission = 16,
    }

    public enum SocialEventType
    {
        Undefined = 0,
        InviteSent = 1,
        InviteReceived = 2,
        Connection = 3
    }

    public enum InGameEventType
    {
        Undefined = 0,
        ItemCollected = 1,
        ShopEntered = 2,
        SkillUpgraded = 3,
        CharacterUpdated = 4,
        PowerUp = 5,
        FeatureUnlocked = 6,
        GiftSent = 7,
        Achievement = 8,
        UIInteraction = 9,
        GiftReceived = 10
    }

    public enum GameEventType
    {
        Undefined = 0,
        Started   = 1,
        Ended     = 2,
        Abandoned = 3
    }

    public enum AdType
    {
        Undefined = 0,
        Video = 1,
        RV = 2,
        Playable = 3,
        Interstitial = 4,
        OfferWall = 5,
        Banner = 6,
        CrossPromo = 7
    }

    public enum AdEventType
    {
        Undefined = 0,
        Clicked = 1,
        Show = 2,
        ShowFail = 3,
        RewardRecieved = 4,
        Loaded = 5,
        LoadFail = 6,
        Hide = 7
    }

    public enum AdErrorType
    {
        Undefined = 0,
        Unknown = 1,
        Offline = 2,
        NoFill = 3,
        InternalError = 4,
        InvalidRequest = 5,
        UnableToPrecache = 6
    }

    public enum LevelEventType
    {
        Undefined = 0,
        Start = 1,
        Complete = 2,
        Fail = 3,
        Restart = 4,
        Abandon = 5
    }

    public enum ErrorEventType
    {
        Undefined = 0,
        Debug = 1,
        Info = 2,
        Warning = 3,
        Error = 4,
        Critical = 5
    }

    public enum IAPEventStore
    {
        Undefined = 0,
        GooglePlay = 1,
        AppleAppStore = 2,
        Other = 3
    }

    public enum IAPEventType
    {
        Undefined = 0,
        Purchase = 1,
        Trade = 2,
        Sell = 3,
        Return = 4
    }

    public enum MissionEventType
    {
        Undefined = 0,
        Start = 1,
        Completed = 2,
        Failed = 3,
        Step = 4,
        Restart = 5,
        Abandoned = 6
    }

    [Serializable]
    public class RealCurrency
    {
        [SerializeField] public int realCurrencyAmount;
        [SerializeField] public string realCurrencyType;

        public RealCurrency(string type, float amount)
        {
            realCurrencyType = type;
            realCurrencyAmount = ConvertCurrency(type, amount);
        }

        private static readonly Dictionary<string, int> Iso4217CurrencyCodes= new Dictionary<string, int>
        {
            {"BHD", 3},
            {"XOF", 0},
            {"BIF", 0},
            {"XAF", 0},
            {"CLP", 0},
            {"CLF", 4},
            {"KMF", 0},
            {"DJF", 0},
            {"XPF", 0},
            {"GNF", 0},
            {"ISK", 0},
            {"IQD", 3},
            {"JPY", 0},
            {"JOD", 3},
            {"KRW", 0},
            {"KWD", 3},
            {"LYD", 3},
            {"OMR", 3},
            {"PYG", 0},
            {"RWF", 0},
            {"TND", 3},
            {"UGX", 0},
            {"UYI", 0},
            {"UYW", 4},
            {"VUV", 0},
            {"VND", 0},
            {"USD", 2}
        }; 
        public static int ConvertCurrency(string code, float value)
        {
            if(Iso4217CurrencyCodes.ContainsKey(code))
            {
                return (int)(value * (int)Mathf.Pow(10, Iso4217CurrencyCodes[code]));
            }
            else
            {
                LionDebug.Log("Potentially malformed currency code. Please check `RealCurrency` object");
                return (int)(value * (int)Mathf.Pow(10, 2));
            }
        }
    }

    [Serializable]
    public class VirtualCurrency
    {
        [SerializeField] public int virtualCurrencyAmount;
        [SerializeField] public string virtualCurrencyName;
        [SerializeField] public string virtualCurrencyType;

        public VirtualCurrency(string name, string type, int amount)
        {
            virtualCurrencyName = name;
            virtualCurrencyType = type;
            virtualCurrencyAmount = amount;
        }
    }

    [Serializable]
    public class Item
    {
        [SerializeField] public int itemAmount;
        [SerializeField] public string itemName;
        [SerializeField] public string itemType;

        public Item(string name, int amount)
        {
            itemName = name;
            itemType = "";
            itemAmount = amount;
        }

        public Item(string name, string type, int amount)
        {
            itemName = name;
            itemType = type;
            itemAmount = amount;
        }
    }

    [Serializable]
    public class Product
    {
        [SerializeField] public List<Item> items;
        [SerializeField] public RealCurrency realCurrency;
        [SerializeField] public List<VirtualCurrency> virtualCurrencies;

        public Product()
        {
            items = new List<Item>();
            virtualCurrencies = new List<VirtualCurrency>();
        }

        public void AddItem(string itemName, string itemType, int amount)
        {
            // don't override items
            for (int i = 0; i < items.Count; i++)
                if (items[i].itemName == itemName)
                    return;

            items.Add(new Item(itemName, itemType, amount));
        }

        public void AddRealCurrency(RealCurrency currency)
        {
            realCurrency = currency;
        }

        public void AddVirtualCurrency(VirtualCurrency currency)
        {
            if (virtualCurrencies == null)
            {
                virtualCurrencies = new List<VirtualCurrency>();
            }

            virtualCurrencies.Add(currency);
        }
    }

    [Serializable]
    public class Reward
    {
        [SerializeField] public string rewardName;
        [SerializeField] public Product rewardProducts;

        public Reward(Product product)
        {
            rewardProducts = product;
        }

        public Reward(string name, string type, int amount)
        {
            rewardName = name;
            rewardProducts = new Product();
            rewardProducts.AddItem(name, type, amount);
        }
    }

    //Add Transaction and product ID to object
    [Serializable]
    public class Transaction
    {
        [SerializeField] public string type;
        [SerializeField] public string name;
        [SerializeField] public Product productRecieved;
        [SerializeField] public Product productSpent;
        [SerializeField] public string transactionID;
        [SerializeField] public string productID;

        public Transaction(string name, string type, Product productsRecieved, Product productsSpent, string transactionID = null, string productID = null)
        {
            this.name = name;
            this.type = type;
            this.productRecieved = productsRecieved;
            this.productSpent = productsSpent;
            this.transactionID = transactionID;
            this.productID = productID;
        }

        public void AddRecievedItem(string itemName, string itemType, int amount)
        {
            productRecieved.AddItem(itemName, itemType, amount);
        }

        public void AddSpentItem(string itemName, string itemType, int amount)
        {
            productSpent.AddItem(itemName, itemType, amount);
        }
    }

    [Serializable]
    public struct LionGameEvent
    {
        // human-readable name for this event
        public string eventName;
        
        // main event type
        public EventType eventType;

        public GameEventType gameEventType;
        public LevelEventType levelEventType;
        public IAPEventType iapEventType;
        public IAPEventStore iapStore;
        public AdType adType;
        public AdEventType adEventType;
        public MissionEventType missionEventType;
        public InGameEventType inGameEventType;
        public SocialEventType socialEventType;

        [SerializeField] public Dictionary<string, object> eventParams;

        public LionGameEvent(LionGameEvent e)
        {
            if (e.eventParams == null)
            {
                e.eventParams = new Dictionary<string, object>();
            }

            eventName = e.eventName;
            eventType = e.eventType;
            gameEventType = e.gameEventType;
            levelEventType = e.levelEventType;
            iapStore = e.iapStore;
            iapEventType = e.iapEventType;
            adType = e.adType;
            adEventType = e.adEventType;
            eventParams = e.eventParams;
            missionEventType = e.missionEventType;
            inGameEventType = e.inGameEventType;
            socialEventType = e.socialEventType;
        }

        public bool HasParam(string p)
        {
            return eventParams.ContainsKey(p);
        }

        public void AddParam(string name, object value, bool overrideExisting = false)
        {
            if (eventParams == null)
            {
                eventParams = new Dictionary<string, object>();
            }

            if (value != null)
            {
                if (this.eventParams.ContainsKey(name))
                {
                    if (overrideExisting)
                    {
                        this.eventParams[name] = value;
                    }
                }
                else
                {
                    this.eventParams.Add(name, value);
                }
            }
        }

        public void AddParams(Dictionary<string, object> parameters)
        {
            if (eventParams == null)
            {
                eventParams = new Dictionary<string, object>();
            }

            if (parameters == null) return;

            var e = parameters.GetEnumerator();
            while (e.MoveNext())
            {
                var kvp = e.Current;
                if (kvp.Value != null)
                {
                    eventParams.Add(kvp.Key, kvp.Value);
                }
            }
        }

        public T TryGetParam<T>(string p)
        {
            if (eventParams.ContainsKey(p))
            {
                return (T)eventParams[p];
            }
            else
            {
                return default(T);
            }
        }

        public override string ToString()
        {
            string str = string.Empty;

            foreach (var kvp in this.eventParams)
            {
                if (kvp.Key == EventParam.transaction || kvp.Key == EventParam.reward)
                {
                    str += $"\n\"{kvp.Key}\": {JsonUtility.ToJson(kvp.Value, true)}";
                }
                else
                {
                    str += $"\n\"{kvp.Key}\": {kvp.Value}";
                }
            }

            return str;
        }
    }
}