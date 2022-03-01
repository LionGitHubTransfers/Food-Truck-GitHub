using DG.Tweening;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OfflineMoney : Singleton<OfflineMoney>
{
    [SerializeField] private int[] SetMoney;
    [SerializeField] private int[] LimitOffline;
    [SerializeField] private BubbleButton[] Tables;
    [SerializeField] private AminOfflineMoney[] Text3D;
    [SerializeField] private CanvasGroup ContainerOffline;
    [SerializeField] private Text CountMoneyOffline;
    [SerializeField] private Button RewardButtonGetMoney,NoThsnksButton;
    [SerializeField] private Sun _Sun;
    [SerializeField] private GameObject FakeFreeButton;
    private int CountMoney;
    private int CountStars;

    public int GetCurrentStarts => CountStars;
    private TimeSpan ts;
    private void Start()
    {
        RewardButtonGetMoney.onClick.AddListener(ClickRewardButton);
        NoThsnksButton.onClick.AddListener(CloseContainer);
        StartCoroutine(Timer());

        if(PlayerPrefs.GetInt("OpenOfflineMoney",0) == 0)
        {
            FakeFreeButton.SetActive(true);
        }
        
    }

    private IEnumerator Timer()
    {
        while (true)
        {

            yield return new WaitForSeconds(15);
            for (int i = 0; i < Tables.Length; i++)
            {

                CountStars = RatingController.Instance.CheckStars();

                //if(CountStars > 0)
                //{
                    Text3D[i].StartAmin(SetMoney[CountStars]);
                    MoneyController.Instance.SetMoney = SetMoney[CountStars];
                //}
               



            }
        }
    }
    public void CheckOffline()
    {
        if (PlayerPrefs.HasKey("LastSession" + CurrentLocation.Instance.GetIndex))
        {
            ts = DateTime.Now - DateTime.Parse(PlayerPrefs.GetString("LastSession" + CurrentLocation.Instance.GetIndex));
            int AllMinutes = (ts.Days * 1440) + (ts.Hours * 60) + ts.Minutes;
            CountStars = RatingController.Instance.CheckStars();
            //if (CountStars > 0)
            //{
            CountMoney = AllMinutes * (4  * SetMoney[CountStars]);

                if (CountMoney > LimitOffline[CountStars])
                {
                    CountMoney = LimitOffline[CountStars];
                }
                Debug.Log("Офлайн мони " + CountMoney +  " / Минут:" + AllMinutes);

            if (CountMoney > 100)
            {
                CountMoneyOffline.text = "+" + CountMoney.ToString();
                OpenContainer();
            }

            //}

        }
    }
    private void ClickRewardButton()
    {
        EventManager.Instance.SendEventToSDk(GameAnalyticsSDK.GAAdAction.Clicked, GameAnalyticsSDK.GAAdType.RewardedVideo, "GA", EventManager.EventEnum.reward_offline_coins);

        if (PlayerPrefs.GetInt("OpenOfflineMoney", 0) == 0)
        {
            SetOfflineMiney();
        }
        else
        {
            if (Admob.Instance.IsRewardVideoReady)
            {
                Admob.Instance.Action_RewardPlayer += RewardPlayer;
                Admob.Instance.ShowRewardedAd(EventManager.EventEnum.reward_offline_coins.ToString());
            }

        }
       
    }

    private void RewardPlayer(bool _isReward)
    {
        Admob.Instance.Action_RewardPlayer -= RewardPlayer;
        if (_isReward)
        {
            SetOfflineMiney();
        }
    }
    private void SetOfflineMiney()
    {
        MoneyController.Instance.SetMoney = CountMoney;
        Invoke("CloseContainer", 0.5f);
        MoveMoneyController.Instance.SpawnMoney(CountMoneyOffline.transform);
    }
    private void OpenContainer()
    {
       
        _Sun.Active();
        ContainerOffline.blocksRaycasts = true;
        ContainerOffline.DOFade(1, 0.3f);
    }
    private void CloseContainer()
    {
        PlayerPrefs.SetInt("OpenOfflineMoney", 1);
        EventManager.Instance.SendEventDesignClick(EventManager.EventEnum.cancel_offline_coins.ToString());

        _Sun.Diactive();
       
        ContainerOffline.blocksRaycasts = false;
        ContainerOffline.DOFade(0, 0.3f);
    }
   



}
