using DG.Tweening;

using System.Collections;
using System.Collections.Generic;
using UIAnimatorCore;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UiController : Singleton<UiController>
{
 
    [SerializeField] private Button StartButton;
    [SerializeField] private CanvasGroup WinContainer, ContainerGetInstrument, ContainerGetIngridient, GridDownContainer, StartContainer;
    [SerializeField] private Button RewardButtonClaim, NoThanksButton, GotItButton, GotItIngridientButton;
    [SerializeField] private Image Fade;
    [SerializeField] private Image  FinishIcon;
    [SerializeField] private Text[] DayText;
    [SerializeField] private Text TextBar;
    [SerializeField] private Slider SliderFinish;
    [SerializeField] private Text FinishCountMoneyText;
    [SerializeField] private Sun EffectSun, EffectSunInstrument;
    [SerializeField] private GameObject FreeText;
    [SerializeField] private Sprite FreeSprite;
    private int Mnogetel;
    private int FinishCountMoney;
    Sequence SliderSequens;
    int XMnogetel;
    public int SetMoneyFinish
    {
        set
        {
            FinishCountMoney += value;
            FinishCountMoneyText.text = FinishCountMoney.ToString();
        }
    }

    private Sequence SequenceButtonAnim;

    private void Start()
    {
        FinishIcon.gameObject.SetActive(false);
        Fade.gameObject.SetActive(true);
        Fade.gameObject.transform.DOScale(2, 0.5f);
        Fade.DOFade(0, 0.5f);

     

        for (int i = 0; i < DayText.Length; i++)
        {
            DayText[i].text = "DAY " + (PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0) + 1).ToString();
        }
        if (PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0) + 1 == 1)
        {
            RewardButtonClaim.GetComponentInChildren<Text>().gameObject.SetActive(false);
            FreeText.gameObject.SetActive(true);
            RewardButtonClaim.GetComponent<Image>().sprite = FreeSprite;
        }
        //   StartButton.onClick.AddListener(ClickTapToPlay);
        RewardButtonClaim.onClick.AddListener(NextLevelClick);
        NoThanksButton.onClick.AddListener(ClickNoThanksButton);
        GotItButton.onClick.AddListener(GetItClick);
        GotItIngridientButton.onClick.AddListener(GetItInstrumentClick);
        ClickTapToPlay();
        
    }
    private void GetItInstrumentClick()
    {
        ContainerGetIngridient.GetComponent<UIAnimator>().PlayAnimation(AnimSetupType.Outro);
        ContainerGetIngridient.blocksRaycasts = false;

        EffectSunInstrument.Diactive();
    }
    private void GetItClick()
    {
        ContainerGetInstrument.GetComponent<UIAnimator>().PlayAnimation(AnimSetupType.Outro);
        ContainerGetInstrument.blocksRaycasts = false;
      
        EffectSun.Diactive();
    }
   private void ClickNoThanksButton()
    {
        EventManager.Instance.SendEventDesignClick(EventManager.EventEnum.cancel_lc_coins.ToString());
        Admob.Instance.ShowInterstitialVideo();
        StartCoroutine(TimerNextLevel(0));
    }
    private void NextLevel()
    {
        

        SliderSequens.Kill();
        SequenceButtonAnim.Kill();
        LevelController.Instance.NextLevel();
        MoneyBonusScripts.Instance.SaveTips();
        Fade.gameObject.transform.DOScale(1, 0.5f);
        Fade.DOFade(1, 0.5f).OnComplete(() =>
        {
            if(PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0) < 3)
            {
                StartCoroutine(TimerDeleteDotween(2));
            }
            else
            {
                StartCoroutine(TimerDeleteDotween(1));
            }
            
        });
    }
    public void NextLevelClick()
    {
        SliderSequens.Kill();
        ShowReward();
    }
    private void ShowReward()
    {
        EventManager.Instance.SendEventToSDk(GameAnalyticsSDK.GAAdAction.Clicked, GameAnalyticsSDK.GAAdType.RewardedVideo, "GA", EventManager.EventEnum.reward_lc_coins);

        if (PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0) + 1 == 1)
        {
            SetXMoney();
            MoveMoneyController.Instance.SpawnMoney(RewardButtonClaim.transform);
        }
        else
        {
            if (Admob.Instance.IsRewardVideoReady)
            {
                Admob.Instance.Action_RewardPlayer += RewardPlayer;
                Admob.Instance.ShowRewardedAd(EventManager.EventEnum.reward_lc_coins.ToString());
            }
        }
            

     
    }
    private void RewardPlayer(bool _isReward)
    {
        Admob.Instance.Action_RewardPlayer -= RewardPlayer;
        if (_isReward)
        {
            SetXMoney();
            MoveMoneyController.Instance.SpawnMoney(RewardButtonClaim.transform);
        }
        else
        {
          // закрыл или не досмотрел 
        }
     
    }
    private void SetXMoney()
    {
        WinContainer.blocksRaycasts = false;
        Debug.Log("множетель " + XMnogetel);
        FinishCountMoney = FinishCountMoney * XMnogetel;
        FinishCountMoneyText.DOText(FinishCountMoney.ToString(), 0, true, ScrambleMode.Numerals).OnComplete(() => {

            StartCoroutine(TimerNextLevel(2));
        });
    }
    private IEnumerator TimerNextLevel(float Timer)
    {
        WinContainer.blocksRaycasts = false;
        MoneyController.Instance.SetMoney = FinishCountMoney;
        yield return new WaitForSeconds(Timer);
        NextLevel();
    }
    public void RetryLevelClick()
    {
        Fade.DOFade(0, 0.5f).OnComplete(() =>
        {
            StartCoroutine(TimerDeleteDotween(1));
        });
    }

    

    private void ClickTapToPlay()
    {
        StartContainer.DOFade(0, 0.3f);
        StartContainer.blocksRaycasts = false;
        LevelController.Instance.StartGame();
        GameController.Instance.State = GameController.GameState.Game;
        GridDownContainer.DOFade(1, 0.3f).OnComplete(() =>
        {
            GridDownContainer.blocksRaycasts = true;
        });
       
    }
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.K))
        {
            OpenWinContainer();
        }
    }
    public void CloseGridUp()
    {
        GridDownContainer.DOFade(0, 0.3f);
        GridDownContainer.blocksRaycasts = false;
    }
    public void OpenGridUp()
    {
        GridDownContainer.DOFade(1, 0.3f);
        GridDownContainer.blocksRaycasts = true;
    }
    public void OpenWinContainer()
    {
        TutorialController.Instance.ActiveAllButton();
        //if (PlayerPrefs.GetInt("DopButton", 0) + 1 >= DopButtonController.Instance.GetCountDopButton)
        //{
        //    BackGroundBarDopButton.gameObject.SetActive(false);
        //}

        CloseGridUp();

        float CurrentProgress = PlayerPrefs.GetFloat("BarProgress", 0);
        TextBar.text = ((int)(CurrentProgress * 100)).ToString();
        WinContainer.DOFade(1, 0);
        WinContainer.GetComponent<UIAnimator>().PlayAnimation(AnimSetupType.Intro);
        WinContainer.DOFade(1, 1f).OnComplete(() =>
        {
            float NextCountBar = 0;
            //if (ProssentProgress.Length > PlayerPrefs.GetInt("DopButton", 0))
            //{
            ////    NextCountBar = CurrentProgress + ProssentProgress[PlayerPrefs.GetInt("DopButton", 0)];
            //}
        
            //if (NextCountBar > 1)
            //{
            //    NextCountBar = 1;
            //}

            TextBar.DOText(((int)(NextCountBar * 100)).ToString(), 0.5f, true, ScrambleMode.Numerals).OnComplete(() =>
            {
                if (BarFinish.Instance!=null)
                {
                    BarFinish.Instance.FillingBar();
                }
                WinContainer.blocksRaycasts = true;
                MoveSliderFinish();
                PlayerPrefs.SetFloat("BarProgress", NextCountBar);
               
            });

        });

    }
    public void OpenDopSprite(Sprite _sprite,bool _instrument)
    {
        if (_instrument)
        {
            FinishIcon.sprite = _sprite;
            OpenInstrument();
        }
        else
        {

            OpenIngridient();
        }
        VibrationController.Instance.VibrateWithTypeLIGHTIMPACT();
    }
    public void OpenInstrument()
    {
       
            FinishIcon.gameObject.SetActive(true);
            ContainerGetInstrument.GetComponent<UIAnimator>().PlayAnimation(AnimSetupType.Intro, a_onFinish: () => {

                ContainerGetInstrument.GetComponent<UIAnimator>().PlayAnimation(AnimSetupType.Loop);
            });
            ContainerGetInstrument.DOFade(1, 0.3f).OnComplete(() => {

                EffectSun.Active();
            });
            ContainerGetInstrument.blocksRaycasts = true;

    }
    public void OpenIngridient()
    {

        // FinishIcon.gameObject.SetActive(true);
        ContainerGetIngridient.GetComponent<UIAnimator>().PlayAnimation(AnimSetupType.Intro, a_onFinish: () =>
        {

            ContainerGetIngridient.GetComponent<UIAnimator>().PlayAnimation(AnimSetupType.Loop);
        });
        ContainerGetIngridient.DOFade(1, 0.3f).OnComplete(() =>
        {

            EffectSunInstrument.Active();
        });
        ContainerGetIngridient.blocksRaycasts = true;

    }
    private void MoveSliderFinish()
    {
        SliderSequens = DOTween.Sequence()
            .Append(SliderFinish.DOValue(1, 0.5f).SetEase(Ease.Linear)).SetLoops(-1, LoopType.Yoyo).OnUpdate(()=> {

                float ValueSlide = SliderFinish.value;
                float FinishMoney = 0;
               // XMnogetel = 0;
                if (ValueSlide >= 0 && ValueSlide < 0.127f || ValueSlide > 0.871f && ValueSlide <= 1)
                {
                    XMnogetel = 2;
                }
                else if (ValueSlide >= 0.127f && ValueSlide < 0.374f || ValueSlide > 0.627f && ValueSlide <= 0.871f)
                {
                    XMnogetel = 3;
                }
                else if (ValueSlide >= 0.374f && ValueSlide < 0.627f)
                {
                    XMnogetel = 4;
                }
                else
                {
                    XMnogetel = 2;
                }
                FinishMoney = FinishCountMoney * XMnogetel;

                FinishCountMoneyText.text = FinishMoney.ToString();

            });
          

    }
    private IEnumerator TimerDeleteDotween(int IndexLevel)
    {
        DOTween.KillAll();
        yield return new WaitForSeconds(0.1f);
        SceneManager.LoadScene(IndexLevel);
    }

}
