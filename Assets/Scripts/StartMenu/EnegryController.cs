using DG.Tweening;
using System;
using System.Collections;
using System.Collections.Generic;
using UIAnimatorCore;
using UnityEngine;
using UnityEngine.UI;

public class EnegryController : Singleton<EnegryController>
{
    [SerializeField] private Text EnergyText;
    [SerializeField] private Text TimerText;
    [SerializeField] private float MaxMinutes = 1;
    [SerializeField] private GameObject TimerObject;
    [SerializeField] private CanvasGroup BigContainer;
    [SerializeField] private Button RewardButton,DiamondButton;
    [SerializeField] private Transform PosTarget;
    [SerializeField] private UIAnimator UiAnim;
    public Transform GetPosTarget => PosTarget;
    private float Minutes, Seconds;
    private int CurrentEnergy;

    private TimeSpan ts;


    private void Start()
    {

        RewardButton.onClick.AddListener(ClickRewardButton);
        DiamondButton.onClick.AddListener(ClickDiamondButton);
        Seconds = 30;
        CurrentEnergy = PlayerPrefs.GetInt(StaticInfo.Energy, 100);
        if(CurrentEnergy > 100)
        {
            CurrentEnergy = 100;
        }
        SetEnergyInText(CurrentEnergy);
        CheckOffline();
    }
    public void ActiveContainer()
    {
        CheckInteractableButton();
        UiAnim.PlayAnimation(AnimSetupType.Intro);
        BigContainer.DOFade(1, 0).OnComplete(() =>
        {
            BigContainer.blocksRaycasts = true;

        });
        if(UiController.Instance != null)
        {
            UiController.Instance.CloseGridUp();
        }
        //CurrentEnergy = 100;
        //PlayerPrefs.SetInt(StaticInfo.Energy, 100);
        //SetEnergyInText(CurrentEnergy);
    }
    private void ClickRewardButton()
    {
        if(CurrentEnergy < 100)
        {
           
            EventManager.Instance.SendEventToSDk(GameAnalyticsSDK.GAAdAction.Clicked, GameAnalyticsSDK.GAAdType.RewardedVideo, "GA", EventManager.EventEnum.reward_energy);

            if (Admob.Instance.IsRewardVideoReady)
            {
                Admob.Instance.Action_RewardPlayer += RewardPlayer;
                Admob.Instance.ShowRewardedAd(EventManager.EventEnum.reward_energy.ToString());
            }

        }
        
    }

    private void RewardPlayer(bool _isReward)
    {
        Admob.Instance.Action_RewardPlayer -= RewardPlayer;
        if (_isReward)
        {
            MoveMoneyController.Instance.SpawnEnergy(RewardButton.transform);
            CurrentEnergy += 25;
            if (CurrentEnergy > 100)
            {
                CurrentEnergy = 100;
            }
            PlayerPrefs.SetInt(StaticInfo.Energy, CurrentEnergy);
            SetEnergyInText(CurrentEnergy);
        }
    }
    private void ClickDiamondButton()
    {
        if(PlayerPrefs.GetInt(StaticInfo.Diamon,0) >= 20 && CurrentEnergy < 100)
        {
            EventManager.Instance.SendEventDesignClick(EventManager.EventEnum.buy_energy.ToString());

            CurrentEnergy = 100;
            MoveMoneyController.Instance.SpawnEnergy(DiamondButton.transform);
            PlayerPrefs.SetInt(StaticInfo.Energy, 100);
            SetEnergyInText(CurrentEnergy);
            MoneyController.Instance.SetDiamond = -20;
        }
    }
    public void ExitEnegryContainer()
    {
        UiAnim.PlayAnimation(AnimSetupType.Outro);
        BigContainer.blocksRaycasts = false;
        if (UiController.Instance != null)
        {
            UiController.Instance.OpenGridUp();
        }
        //BigContainer.DOFade(0, 0.3f).OnComplete(() =>
        //{


        //});
    }
    private void Update()
    {

        if (CurrentEnergy < 100)
        {
            if (!TimerObject.activeSelf)
            {
                TimerObject.SetActive(true);
            }
        }
        if (Seconds <= 0 && CurrentEnergy < 100)
        {

            Seconds = 30;

            CurrentEnergy++;

            SetEnergyInText(CurrentEnergy);


        }
        else if (CurrentEnergy >= 100)
        {
            if (TimerObject.activeSelf)
            {
                TimerObject.SetActive(false);
            }
        }

       
        Seconds -= Time.deltaTime;
        TimerText.text = string.Format("{0:0}:{1:00}", 0, Seconds);
    }
    private void SetEnergyInText(int _Count)
    {
        EnergyText.text = _Count.ToString();
        PlayerPrefs.SetInt(StaticInfo.Energy, _Count);

        CheckInteractableButton();
    }
    private void CheckInteractableButton()
    {
        if(CurrentEnergy < 100)
        {
            RewardButton.interactable = true;
            DiamondButton.interactable = true;
        }
        else
        {
            RewardButton.interactable = false;
            DiamondButton.interactable = false;
        }
    }
    private void CheckOffline()
    {
        if (PlayerPrefs.HasKey("LastSession" + CurrentLocation.Instance.GetIndex))
        {
            ts = DateTime.Now - DateTime.Parse(PlayerPrefs.GetString("LastSession" + CurrentLocation.Instance.GetIndex));
            int AllMinutes = (ts.Days * 1440) + (ts.Hours * 60) + ts.Minutes;
            if (CurrentEnergy < 100)
            {
                Debug.Log("востановлено " + (int)(AllMinutes / MaxMinutes));
                CurrentEnergy += (int)(AllMinutes / MaxMinutes);
                if (CurrentEnergy > 100)
                {
                    CurrentEnergy = 100;
                }
                SetEnergyInText(CurrentEnergy);
            }
        }
    }
    public int SetEnergy
    {
        set
        {
            if (CurrentEnergy > 0)
            {
                CurrentEnergy -= value;
            }
            SetEnergyInText(CurrentEnergy);

        }
    }
 
}
