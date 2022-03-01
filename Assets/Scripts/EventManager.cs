using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Facebook.Unity;
using System;
using System.Linq;
using LionStudios.Suite.Analytics;
using GameAnalyticsSDK;

public class EventManager : Singleton<EventManager>
{

    public enum EventEnum
    {
        reward_offline_coins,
        cancel_offline_coins,
        reward_lc_coins,
        cancel_lc_coins,
        reward_tip_coins,
        cancel_tip_coins,
        reward_lab_dish,
        buy_lab_dish,
        reward_energy,
        buy_energy,
        open_recipe,
        open_leaderboard,
        open_tips,
        open_shop,
        Create_dish_button,
        Labdish_open,
        play_click


    }
    private void Start()
    {
        DontDestroyOnLoad(this);
    }
    public void SendEventToSDk(GAAdAction _GAAdAction, GAAdType _GAAdType, string _rewardName, EventEnum _Placement)
    {
        GameAnalytics.NewAdEvent(_GAAdAction, _GAAdType, _rewardName, _Placement.ToString());
    }
    public void SendEventDesignClick(string _name)
    {
        _name.Replace(' ', '_');

        GameAnalytics.NewDesignEvent(_name);
    }
    public void SendEventTutorial(int IndexTutorial)
    {
        GameAnalytics.NewDesignEvent("tutorial_complete", IndexTutorial);
    }
    public void SendEventCreateDish()
    {
        GameAnalytics.NewDesignEvent("create_dish_button", (PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0) + 1));
    }
    public void SendEventCloseMiniGame()
    {
        GameAnalytics.NewDesignEvent("labdish_open", (PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0) + 1));
    }
    public void SendEventUpgradeStreet(string _name,int _currentLevel)
    {
        _name.Replace(' ', '_');
        Dictionary<string, object> StreetName = new Dictionary<string, object>();
        StreetName.Add(_name, _currentLevel);
        GameAnalytics.NewDesignEvent("upgrade_street", StreetName);

    }
    public void SendEventBuyShop(string _name,int Index)
    {
        Dictionary<string, object> StreetName = new Dictionary<string, object>();
        StreetName.Add(_name, Index);
        GameAnalytics.NewDesignEvent("buy_shop", StreetName);
    }

    public void SendEventMasteriUpdate(string _name, int Level)
    {

        _name.Replace(' ', '_');
        GameAnalytics.NewDesignEvent("Mastery_upgrade_" + _name, Level);
    }
}
