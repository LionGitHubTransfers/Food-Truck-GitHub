using DG.Tweening;
using GameAnalyticsSDK;
using System.Collections;
using System.Collections.Generic;
using UIAnimatorCore;
using UnityEngine;
using UnityEngine.UI;

public class MoneyBonusScripts : Singleton<MoneyBonusScripts>
{
    [SerializeField] private CanvasGroup CurrentContainer;
    [SerializeField] private Image Bar;
    [SerializeField] private Text CountProssentText;
    [SerializeField] private Button OpenMoneyButton, LooseButton;
    [SerializeField] private Text CountMoneyText;
    [SerializeField] private Sprite[] ButtonSprites;
    [SerializeField] private ParticleSystem EffectTips, EffectGold;
    [SerializeField] private TextMesh TextTipsProssent;
    [SerializeField] private Sun ActiveSun;
    [SerializeField] private Transform StartPosMoney;
    [SerializeField] private GameObject Bank;
    [SerializeField] private GameObject Blinks;
    private int CountMoney;
    private bool FreeReward = false;
    private float CountProssent;
    private int Active = 0;

    private void Start()
    {

        Active = PlayerPrefs.GetInt("MoneyBonusGames", 0);
        CountProssent = PlayerPrefs.GetFloat("CountProssentMoneyBonus", 0);
        OpenMoneyButton.onClick.AddListener(ClickGetMoney);
        LooseButton.onClick.AddListener(CloseContainer);
        Bar.fillAmount = CountProssent;
        CountProssentText.text = (100 * CountProssent).ToString() + "%";


        SaveActive();



        CheckBonusMoney(0);
    }
    private void SaveActive()
    {
        if (Active == 1)
        {
            CountProssent = 0;
            Active = 0;
            PlayerPrefs.SetInt("MoneyBonusGames", 0);
        }
        else if (CountProssent >= 1)
        {
            Active = 1;
            PlayerPrefs.SetInt("MoneyBonusGames", Active);
        }
    }

    public void CheckBonusMoney(float _setCount = 0.20f)
    {
        if (_setCount > 0)
        {
            EffectGold.Play();
        }
        CountProssent += _setCount;
        CountProssent = Mathf.Clamp(CountProssent, 0, 1);
        Bar.fillAmount = CountProssent;
        int Prossent = ((int)(100 * CountProssent));
        CountProssentText.text = Prossent.ToString() + "%";

        TextTipsProssent.text = Prossent.ToString() + "%";
        if (CountProssent >= 1)
        {
            LooseButton.GetComponentInChildren<Text>().text = "Loose it";
            OpenMoneyButton.GetComponent<Image>().sprite = ButtonSprites[1];
            OpenMoneyButton.interactable = true;
            CountMoney = 100 + (10 * PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0));
            CountMoneyText.gameObject.SetActive(true);
            CountMoneyText.text = "+" + CountMoney.ToString();
            Blinks.SetActive(true);
            if (EffectTips.isStopped)
            {
                EffectTips.Play();
            }
            Bank.GetComponent<Animator>().SetInteger("Active", 1);

            if (PlayerPrefs.GetInt("TutorialGameIndex", 0) <= 3)
            {
                TutorialController.Instance.ActiveTutorial(3);
                OpenMoneyButton.GetComponent<Image>().sprite = ButtonSprites[2];
                FreeReward = true;
            }




        }
        else
        {
            Blinks.SetActive(false);
            LooseButton.GetComponentInChildren<Text>().text = "Close";
            OpenMoneyButton.interactable = false;
            OpenMoneyButton.GetComponent<Image>().sprite = ButtonSprites[0];
            CountMoneyText.gameObject.SetActive(false);
            Bank.GetComponent<Animator>().SetInteger("Active", 0);
            if (EffectTips.isPlaying)
            {
                EffectTips.Stop();
            }
        }

    }
    public void SaveTips()
    {
        PlayerPrefs.SetFloat("CountProssentMoneyBonus", CountProssent);
    }

    public void OpenContainer()
    {
        if(LevelController.Instance.GetCountPlayer < 1)
        {
            return;
        }

        EventManager.Instance.SendEventDesignClick(EventManager.EventEnum.open_tips.ToString());
        if (UiController.Instance != null)
        {
            UiController.Instance.CloseGridUp();
        }

        if (TutorialGenerator.Instance != null)
        {
            if (TutorialGenerator.Instance.IndexTutorial == 4)
            {
                TutorialGenerator.Instance.CloseAllTutorial();
                TutorialController.Instance.ActiveAllButton();
            }
        }

        if (CountProssent >= 1)
        {
            ActiveSun.Active();
        }
        else
        {
            ActiveSun.Active(false);

        }
        CurrentContainer.GetComponent<UIAnimator>().PlayAnimation(AnimSetupType.Intro);
        CurrentContainer.blocksRaycasts = true;

    }
    private void CloseContainer()
    {
        if (UiController.Instance != null)
        {
            UiController.Instance.OpenGridUp();
        }
        ActiveSun.Diactive();
        CurrentContainer.GetComponent<UIAnimator>().PlayAnimation(AnimSetupType.Outro);
        CurrentContainer.blocksRaycasts = false;
        if (CountProssent >= 1)
        {
            EventManager.Instance.SendEventDesignClick(EventManager.EventEnum.cancel_tip_coins.ToString());

            CountProssent = 0;
            Active = 0;
            PlayerPrefs.SetInt("MoneyBonusGames", 0);
            CheckBonusMoney(0);
        }


    }
    private void ClickGetMoney()
    {
        EventManager.Instance.SendEventToSDk(GAAdAction.Clicked, GAAdType.RewardedVideo, "GA", EventManager.EventEnum.reward_tip_coins);

        if (FreeReward)
        {
            SetMoneyBonus();
            FreeReward = false;
        }
        else
        {
            if (Admob.Instance.IsRewardVideoReady)
            {
                Admob.Instance.Action_RewardPlayer += RewardPlayer;
                Admob.Instance.ShowRewardedAd(EventManager.EventEnum.reward_tip_coins.ToString());
            }
        }
      



    }
    private void RewardPlayer(bool _isReward)
    {
        Admob.Instance.Action_RewardPlayer -= RewardPlayer;
        if (_isReward)
        {
            SetMoneyBonus();
        }
    }
    private void SetMoneyBonus()
    {
        MoneyController.Instance.SetMoney = CountMoney;
        CountProssent = 0;
        CheckBonusMoney(0);
        CloseContainer();
        Active = 0;
        MoveMoneyController.Instance.SpawnMoney(StartPosMoney);
        PlayerPrefs.SetInt("MoneyBonusGames", 0);
    }
}
