using System;
using System.Collections.Generic;
using System.Reflection;
using System.Linq;
using LionStudios.Suite.Debugging;
using UnityEngine;
using UnityEngine.Analytics;

namespace LionStudios.Suite.Analytics
{
    internal class DeltaDNA : Sdk
    {
        /// ERRORS
        const string DDNANotFoundMessage = "Lion Analytics: DeltaDNA members not found or assembly inaccesible. Check SDK Service.";

        /// Namespace
        const string DDNASingletonName = "DeltaDNA.Singleton";
        const string DDNAQualifiedName = "DeltaDNA.DDNA";
        const string GameEventQualifiedName = "DeltaDNA.GameEvent";
        const string TransactionQualifiedName = "DeltaDNA.Transaction";
        const string ProductQualifiedName = "DeltaDNA.Product";

        /// Method Names
        const string RecordEventMethodName = "RecordEvent";
        const string AddParamMethodName = "AddParam";

        private PropertyInfo ddnaTypeInst;
        
        private Type _ddnaType;
        private Type _gameEventType;
        private Type _transactionType;
        private Type _productType;

        /// event methods
        private MethodInfo _recordEventMethod;
        private MethodInfo _addParamMethod;
        private MethodInfo _product_setTransactionIdMethod;
        private MethodInfo _product_setProductIdMethod;
        private MethodInfo _product_setServerMethod;
        private MethodInfo _product_setRecieptMethod;
        private MethodInfo _product_addItemMethod;
        private MethodInfo _product_addVirtualCurrencyMethod;
        private MethodInfo _product_setRealCurrencyMethod;

        internal bool IsInitialized { get; private set; }

        public DeltaDNA()
        {
            try
            {
                var sdkType = AnalyticsSdkBridge.GetType(DDNAQualifiedName);
                var gameEventType = AnalyticsSdkBridge.GetType(GameEventQualifiedName);
                var transactionType = AnalyticsSdkBridge.GetType(TransactionQualifiedName);
                var productType = AnalyticsSdkBridge.GetType(ProductQualifiedName);
                
                // check for core ddna types
                if(sdkType == null || gameEventType == null 
                || transactionType == null || productType == null)
                {
                    Debug.LogWarning(DDNANotFoundMessage);
                    return;
                }

                _ddnaType           = sdkType;
                _gameEventType      = gameEventType;
                _transactionType    = transactionType;
                _productType        = productType;
                
                ddnaTypeInst        = _ddnaType.BaseType.GetProperty("Instance", BindingFlags.Public | BindingFlags.Static);
                _recordEventMethod  = _ddnaType.GetMethods().Single(m => m.Name == RecordEventMethodName && m.GetParameters().Length == 2);
                _addParamMethod     = _gameEventType.GetMethods().Single(m => m.Name == AddParamMethodName);

                _product_addItemMethod = _productType.GetMethods().Single(m => m.Name == "AddItem" && m.GetParameters().Length == 3);
                _product_setRealCurrencyMethod = _productType.GetMethods().Single(m => m.Name == "SetRealCurrency" && m.GetParameters().Length == 2);
                _product_addVirtualCurrencyMethod = _productType.GetMethods().Single(m => m.Name == "AddVirtualCurrency" && m.GetParameters().Length == 3);
                _product_setTransactionIdMethod = _productType.GetMethods().Single(m => m.Name == "SetTransactionId" && m.GetParameters().Length == 1);
                _product_setProductIdMethod = _productType.GetMethods().Single(m => m.Name == "SetProductId" && m.GetParameters().Length == 1);
                _product_setServerMethod = _productType.GetMethods().Single(m => m.Name == "SetServer" && m.GetParameters().Length == 1);
                _product_setRecieptMethod = _productType.GetMethods().Single(m => m.Name == "SetReceipt" && m.GetParameters().Length == 1);
                
                IsInitialized       = true;
            }
            catch(Exception e)
            {
                LionStudios.Suite.Analytics.Debugging.LogWarning(e.Message);
            }
        }

        public override void TryFireEvent(LionGameEvent gameEvent)
        {
            string evName = string.Empty;
            switch (gameEvent.eventType)
            {
                // don't throw game events, ddna does this internally
                case EventType.Game:
                    return;
                    
                case EventType.Level:
                    FireMissionEvent(gameEvent);
                    break;
                    
                case EventType.Ad:
                    switch (gameEvent.adEventType)
                    {
                        case AdEventType.Loaded:
                        case AdEventType.LoadFail:
                        case AdEventType.Show:
                        case AdEventType.ShowFail:
                        case AdEventType.Clicked:
                            FireAdRequestEvent(gameEvent);
                            break;

                        case AdEventType.RewardRecieved:
                            FireTransactionEvent(gameEvent);
                            break;
                    }

                    break;
                case EventType.IAP:
                    FireTransactionEvent(gameEvent);
                    break;
                case EventType.ML:
                    FireMLEvent(gameEvent);
                    break;
                case EventType.ABTest:
                    FireAbTestEvent(gameEvent);
                    break;
                case EventType.Debug:
                    FireDebugEvent(gameEvent);
                    break;
                case EventType.Error:
                    // todo:
                    break;
            }
            
            try
            {

            }
            catch(Exception e)
            {
                LionDebug.LogWarning(e.Message + "\nMake sure SDK is properly installed and initialized!");
            }
        }
        
        private void FireMissionEvent(LionGameEvent gameEvent)
        {
            string evName = string.Empty;
            
            switch (gameEvent.levelEventType)
            {
                case LevelEventType.Start:
                    evName = DDNAEventType.missionStarted.ToString();
                    break;
                case LevelEventType.Complete:
                    evName = DDNAEventType.missionCompleted.ToString();
                    break;
                case LevelEventType.Fail:
                    evName = DDNAEventType.missionFailed.ToString();
                    break;
                case LevelEventType.Restart:
                    evName = DDNAEventType.missionAbandoned.ToString();
                    break;
            }

            Dictionary<string, object> args = new Dictionary<string, object>();
            foreach (var kvp in gameEvent.eventParams)
            {
                if (kvp.Key == EventParam.reward)
                {
                    Reward reward = (Reward) kvp.Value;
                    
                    args.Add(EventParam.rewardName, reward.rewardName);
                    args.Add(EventParam.rewardProducts, BuildDDNAProduct(reward.rewardProducts));
                }
                else
                {
                    args.Add(kvp.Key, kvp.Value);
                }
            }
            
            _recordEventMethod.Invoke(ddnaTypeInst.GetValue(null), new object[] { evName, args });
            LionStudios.Suite.Analytics.Debugging.LogEvent("Lion Analytics: Fire DeltaDNA Mission Event!");
        }
        
        private void FireMLEvent(LionGameEvent gameEvent)
        {
            string evName = DDNAEventType.prediction.ToString();
            _recordEventMethod.Invoke(ddnaTypeInst.GetValue(null), new object[] { evName, gameEvent.eventParams });
            LionStudios.Suite.Analytics.Debugging.LogEvent("Lion Analytics: Fire DeltaDNA Prediction Event!");
        }
        
        private void FireAbTestEvent(LionGameEvent gameEvent)
        {
            string evName = DDNAEventType.debug.ToString();
            _recordEventMethod.Invoke(ddnaTypeInst.GetValue(null), new object[] { evName, gameEvent.eventParams });
            LionStudios.Suite.Analytics.Debugging.LogEvent("Lion Analytics: Fire DeltaDNA AB Test Event!");
        }

        private void FireDebugEvent(LionGameEvent gameEvent)
        {
            string evName = DDNAEventType.transaction.ToString();
            _recordEventMethod.Invoke(ddnaTypeInst.GetValue(null), new object[] { evName, gameEvent.eventParams });
            LionStudios.Suite.Analytics.Debugging.LogEvent("Lion Analytics: Fire DeltaDNA Debug Event!");
        }

        private void FireTransactionEvent(LionGameEvent gameEvent)
        {
            string evName = DDNAEventType.transaction.ToString();
            
            Transaction transaction = gameEvent.TryGetParam<Transaction>(EventParam.transaction);
            if (transaction == null)
            {
                LionDebug.Log("No transaction. Aborting DDNA Transaction Event");
                return;
            }
            
            object ddnaTransaction = Activator.CreateInstance(_transactionType, args: new object[]
            {
                transaction.name,
                transaction.type,
                BuildDDNAProduct(transaction.productRecieved),
                BuildDDNAProduct(transaction.productSpent)
            });

            var dict = ddnaTransaction.GetType().BaseType.GetMethod("AsDictionary")
                .Invoke(ddnaTransaction, new object[] { });
            _recordEventMethod.Invoke(ddnaTypeInst.GetValue(null), new object[] { evName, dict });
            LionStudios.Suite.Analytics.Debugging.LogEvent("Lion Analytics: Fire DeltaDNA Transaction Event!");
            LionDebug.Log("Fired event to DeltaDNA", LionDebug.DebugLogLevel.Event);

        }

        private void FireAdRequestEvent(LionGameEvent gameEvent)
        {
            string evName = DDNAEventType.transaction.ToString();
            
            gameEvent.AddParam(EventParam.adProviderVersion, "0.0.0", overrideExisting: false);
            gameEvent.AddParam(EventParam.adRequestTimeMs, 0);

            _recordEventMethod.Invoke(ddnaTypeInst.GetValue(null), new object[] { evName, gameEvent.eventParams });
            LionStudios.Suite.Analytics.Debugging.LogEvent("Lion Analytics: Fire DeltaDNA Ad Request Event!");
        }

        private object BuildDDNAProduct(Product product)
        {
            object ddnaProduct = Activator.CreateInstance(_productType);
                    
            // add product real currency
            var realCurrency = product.realCurrency;
            if (realCurrency != null)
            {
                _product_setRealCurrencyMethod.Invoke(ddnaProduct,
                    new object[] {realCurrency.realCurrencyType, realCurrency.realCurrencyAmount});                
            }
                    
            // add product virtual currency
            var virtualCurrency = product.virtualCurrencies;
            if (virtualCurrency != null)
            {
                foreach (var currency in virtualCurrency)
                {
                    _product_addVirtualCurrencyMethod.Invoke(ddnaProduct,
                        new object[]
                        {
                            currency.virtualCurrencyName,
                            currency.virtualCurrencyType,
                            currency.virtualCurrencyAmount
                        });
                }    
            }

            // add product items
            var items = product.items;
            if (items != null)
            {
                foreach (var item in items)
                {
                    _product_addItemMethod.Invoke(ddnaProduct,
                        new object[] {item.itemName, item.itemType, item.itemAmount});
                }    
            }

            return ddnaProduct;
        }
    }
}
