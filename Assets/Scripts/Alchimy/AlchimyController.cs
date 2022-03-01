using DG.Tweening;
using System;
using System.Collections;
using System.Collections.Generic;
using UIAnimatorCore;
using UnityEngine;
using UnityEngine.UI;

public class AlchimyController : Singleton<AlchimyController>
{
    [SerializeField] private ScriptebleObjectAlchimyLevel[] AllLevelAlchimy;
    [SerializeField] private GameObject GridStart;
    [SerializeField] private GameObject CellAlchimy;
    [SerializeField] private Button StartMiniGameButton, FinishNextButton;
    [SerializeField] private CanvasGroup StartContainer, TimerContainer, FinishContainer;
    [SerializeField] private GameObject SceneObject, Cap;
    [SerializeField] private GameObject DishPrefabs, CurrentDishObject;
    [SerializeField] private GameObject LastEffect;
    [SerializeField] private GameObject Bubble;
    [SerializeField] private ParticleSystem EffectButton;
    [SerializeField] private GameObject Bliks;
    private CanvasGroup CurrentOpenContainer;
    private int CurrentLevelAchimy;
    private int CurrentOpenIngredient;
    private List<GameObject> StartCellItem = new List<GameObject>();
    private Animator AnimSwipeFinger;
    [Header("Timer")]
    [SerializeField] private Text TimerText;
    [SerializeField] private Button OpenNowButton, OpenDiamondButton;
    [SerializeField] private CanvasGroup Vinirka;
    [SerializeField] private GameObject CenterSpawnDish;
    [SerializeField] private GameObject[] TutorialText;
    private bool SwipeActive = false;
    Vector2 StartPosFinger;
    Vector3 StartPosSceneObject;
    Vector3 StartRotateSceneObject;
    Sequence SequenceButtonAnim;
    private int ActiveDish;
    private float CurrentSeconds;

    public GameObject GetCap => Cap;

    public GameObject GetTutorialButton => StartMiniGameButton.gameObject;
    private void OnEnable()
    {
        OpenNowButton.onClick.AddListener(ActiveRewardDish);
        OpenDiamondButton.onClick.AddListener(OpenDishForDiamond);
        FinishNextButton.onClick.AddListener(OpenDish);
        StartMiniGameButton.onClick.AddListener(StartMiniGame);
        AnimSwipeFinger = GetComponent<Animator>();

    }
    private void OnDisable()
    {
        SaveTimer();
    }
    public void Start()
    {
        StartRotateSceneObject = SceneObject.transform.localEulerAngles;
        StartPosSceneObject = SceneObject.transform.localPosition;
        if (AllLevelAlchimy.Length <= 0)
        {
            AllLevelAlchimy = DataController.Instance.GetAlchimyLevels;
        }



        Cap = CurrentDishObject.transform.GetChild(0).gameObject;
        LastEffect = CurrentDishObject.transform.GetChild(1).gameObject;

        ActiveDish = PlayerPrefs.GetInt("ActiveDish" + CurrentLocation.Instance.GetIndex, 0);   //готова к открытию кнопкой или по времени 
        CurrentLevelAchimy = PlayerPrefs.GetInt(StaticInfo.AlchimyOpen + CurrentLocation.Instance.GetIndex, 0);

        if (CurrentLevelAchimy > AllLevelAlchimy.Length - 1)
        {
            StartMiniGameButton.gameObject.SetActive(false);
            StartContainer.DOFade(0, 0);
            StartContainer.blocksRaycasts = false;
            return;
        }


        if (ActiveDish == 0)
        {
            CurrentOpenIngredient = 0;
            GridStart.GetComponent<CanvasGroup>().alpha = 1;
            SpawnCellAlchimy();
            ActiveContainer(StartContainer);

            StartMiniGameButton.gameObject.SetActive(true);
            CurrentSeconds = 28800;
            PlayerPrefs.SetFloat("CurrentSecondsAlchimy" + CurrentLocation.Instance.GetIndex, CurrentSeconds);


        }
        else
        {
            CurrentOpenContainer = StartContainer;
            ActiveContainer(TimerContainer);
            TimerAlchimy();
            SceneObject.transform.DOLocalMove(new Vector3(SceneObject.transform.localPosition.x, -7236, 9667), 1);
            SceneObject.transform.DOLocalRotate(new Vector3(25, 180, 0), 1);
            int currentLevel = PlayerPrefs.GetInt("CurrentLevelMax_" + 0, 0);
            if (currentLevel == 14)
            {
                TutorialController.Instance.ActiveTutorialInStartMenu(3);
            }
        }

    }

    public GameObject ActiveSceneObject()
    {
        ActiveVinirky();
        return SceneObject;
    }
    private void ActiveRewardDish()
    {
        EventManager.Instance.SendEventToSDk(GameAnalyticsSDK.GAAdAction.Clicked, GameAnalyticsSDK.GAAdType.RewardedVideo, "GA", EventManager.EventEnum.reward_lab_dish);

        if (Admob.Instance.IsRewardVideoReady)
        {
            Admob.Instance.Action_RewardPlayer += RewardPlayer;
            Admob.Instance.ShowRewardedAd(EventManager.EventEnum.reward_lab_dish.ToString());
        }


    }
    private void RewardPlayer(bool _isReward)
    {
        Admob.Instance.Action_RewardPlayer -= RewardPlayer;
        if (_isReward)
        {
            CurrentSeconds -= 7200;

            if (CurrentSeconds <= 0)
            {
                ActiveSwipe();
                ActiveVinirky();
            }
        }
    }
    private void ActiveSwipe()
    {
        CurrentOpenContainer.blocksRaycasts = false;
        CurrentOpenContainer.DOFade(0, 0.3f);
        SwipeActive = true;
        AnimSwipeFinger.SetBool("ActiveSwipe", true);

    }
    private void ActiveVinirky()
    {
        if (SwipeActive)
        {
            Vinirka.gameObject.SetActive(true);
            Vinirka.DOFade(1, 0.3f);
            Vinirka.blocksRaycasts = true;
        }

    }
    private void OpenDish()
    {
        Vinirka.gameObject.SetActive(false);
        FinishContainer.blocksRaycasts = false;
        CurrentLevelAchimy += 1;
        PlayerPrefs.SetInt(StaticInfo.AlchimyOpen + CurrentLocation.Instance.GetIndex, CurrentLevelAchimy);
        CurrentDishObject.transform.DOLocalMoveX(3, 0.5f);
        CurrentDishObject = Instantiate(DishPrefabs, SceneObject.transform);

        CurrentDishObject.transform.DOLocalMoveX(0, 0.5f).OnComplete(() =>
        {
            SceneObject.transform.DOLocalMove(StartPosSceneObject, 0.3f);
            SceneObject.transform.DOLocalRotate(StartRotateSceneObject, 1);
            PlayerPrefs.SetInt("ActiveDish" + CurrentLocation.Instance.GetIndex, 0);
            Start();
        });
    }
    private void AminationCap()
    {

        Cap.transform.DOLocalMoveY(5, 2);
        ActiveContainer(FinishContainer);
        LastEffect.SetActive(true);


    }
    private void SpawnDishFinish()
    {
        Vinirka.gameObject.SetActive(false);
        Instantiate(DataController.Instance.GetData.GetCellModel(TypeSell.Bonus, CurrentLevelAchimy), CenterSpawnDish.transform);
        EventManager.Instance.SendEventCloseMiniGame();
    }
    private void OpenDishForDiamond()
    {
        int currentLevel = PlayerPrefs.GetInt("CurrentLevelMax_" + 0, 0);
        if (currentLevel == 14)
        {
            EventManager.Instance.SendEventDesignClick(EventManager.EventEnum.buy_lab_dish.ToString());

            ActiveSwipe();
            ActiveVinirky();
            TutorialGenerator.Instance.CloseAllTutorial();

        }
        else if (PlayerPrefs.GetInt(StaticInfo.Diamon, 0) >= 10)
        {
            EventManager.Instance.SendEventDesignClick(EventManager.EventEnum.buy_lab_dish.ToString());

            ActiveSwipe();
            ActiveVinirky();
            MoneyController.Instance.SetDiamond = -10;
        }
    }
    public void ActiveContainer(CanvasGroup _openContainer)
    {
        if (CurrentOpenContainer)
        {
            CurrentOpenContainer.blocksRaycasts = false;
            CurrentOpenContainer.DOFade(0, 0.3f);
        }

        _openContainer.DOFade(1, 0.3f).OnComplete(() =>
        {
            _openContainer.blocksRaycasts = true;
            CurrentOpenContainer = _openContainer;

        });

    }
    private void Update()
    {
        if (ActiveDish == 1)
        {
            CurrentSeconds = Mathf.Max(0, CurrentSeconds - Time.deltaTime);
            var timeSpan = System.TimeSpan.FromSeconds(CurrentSeconds);
            TimerText.text = timeSpan.Hours.ToString("00") + ":" +
                            timeSpan.Minutes.ToString("00") + ":" +
                            timeSpan.Seconds.ToString("00");
            if (CurrentSeconds <= 0)
            {
                ActiveDish = 0;
                ActiveSwipe();
            }
        }
        if (SwipeActive)
        {

            if (Input.GetMouseButtonDown(0))
            {
                StartPosFinger = Input.mousePosition;
            }
            if (Input.GetMouseButton(0))
            {
                if (Vector2.Distance(new Vector2(0, Input.mousePosition.y), new Vector2(0, StartPosFinger.y)) > 500)
                {
                    Debug.Log("swipe");
                    AnimSwipeFinger.SetBool("ActiveSwipe", false);
                    SwipeActive = false;
                    AminationCap();
                    SpawnDishFinish();
                }
            }
        }
    }
    private void TimerAlchimy()
    {
        float CurrentSecondsNoGames = 0;
        if (PlayerPrefs.HasKey("LastSession" + CurrentLocation.Instance.GetIndex))
        {
            TimeSpan ts = DateTime.Now - DateTime.Parse(PlayerPrefs.GetString("LastSession" + CurrentLocation.Instance.GetIndex));
            CurrentSecondsNoGames = (ts.Days * 86400) + (ts.Hours * 3600) + (ts.Minutes * 60) + ts.Seconds;
        }
        CurrentSeconds = PlayerPrefs.GetFloat("CurrentSecondsAlchimy" + CurrentLocation.Instance.GetIndex, 28800);
        if (CurrentSeconds < 28700)
        {
            CurrentSeconds = PlayerPrefs.GetFloat("CurrentSecondsAlchimy" + CurrentLocation.Instance.GetIndex, 28800) - CurrentSecondsNoGames;
        }
    }
    private void SaveTimer()
    {
        PlayerPrefs.SetFloat("CurrentSecondsAlchimy" + CurrentLocation.Instance.GetIndex, CurrentSeconds);
        PlayerPrefs.SetString("LastSession" + CurrentLocation.Instance.GetIndex, DateTime.Now.ToString());
        SequenceButtonAnim.Kill();
    }
    private void OnApplicationQuit()
    {
        SaveTimer();
    }

    private void OnApplicationPause(bool pause)
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        SaveTimer();
#endif
    }
    private void SpawnCellAlchimy()
    {
        for (int i = 0; i < StartCellItem.Count; i++)
        {
            Destroy(StartCellItem[i].gameObject);
        }
        StartCellItem.Clear();

        for (int i = 0; i < AllLevelAlchimy[CurrentLevelAchimy].GetLevel.Length; i++)
        {
            var cellAlchimy = Instantiate(CellAlchimy, GridStart.transform);

            cellAlchimy.GetComponent<CellAlchimy>().SetInfo(AllLevelAlchimy[CurrentLevelAchimy].GetLevel[i]);
            Debug.Log("STEP 1");
            StartCellItem.Add(cellAlchimy);
        }
    }
    public void ActiveEffectButton()
    {
        if (CurrentOpenIngredient == AllLevelAlchimy[CurrentLevelAchimy].GetLevel.Length)
        {
            EffectButton.gameObject.SetActive(true);
            EffectButton.Play();
        }
        else
        {
            EffectButton.gameObject.SetActive(false);
            EffectButton.Stop();
        }
    }
    public void CloseAnim()
    {
        EffectButton.gameObject.SetActive(false);
        EffectButton.Stop();
    }
    public void SetIngredient(int _count)
    {
        CurrentOpenIngredient += _count;
        int currentLevel = PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0);
        if (CurrentOpenIngredient == AllLevelAlchimy[CurrentLevelAchimy].GetLevel.Length)
        {
            StartMiniGameButton.interactable = true;
            if(PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0) > 15)
            {
                Bubble.gameObject.SetActive(true);
            }
            StartMiniGameButton.GetComponentInChildren<Text>().text = "Create Dish";

            if (CurrentOpenIngredient == AllLevelAlchimy[CurrentLevelAchimy].GetLevel.Length && currentLevel == 14) //PlayerPrefs.GetInt("TutorialStartMenuIndex", 0) == 2 &&
            {
                TutorialController.Instance.ActiveTutorialInStartMenu(2);
                TutorialText[0].SetActive(false);
                TutorialText[1].SetActive(true);
            }

            Bliks.SetActive(true);
            SequenceButtonAnim = DOTween.Sequence()
                .Append(StartMiniGameButton.transform.DOScale(new Vector3(0.9f, 0.9f, 0.9f), 0.5f).SetEase(Ease.Linear)).SetLoops(-1, LoopType.Yoyo);

        }
        else
        {
            Bliks.SetActive(false);
            Bubble.gameObject.SetActive(false);
            StartMiniGameButton.interactable = false;
            StartMiniGameButton.GetComponentInChildren<Text>().text = "Increase the level of the ingredients in the Mastery Menu";
        }
    }

    private void StartMiniGame()
    {

        EventManager.Instance.SendEventCreateDish();
        EffectButton.gameObject.SetActive(false);
        EffectButton.Stop();

        if (TutorialGenerator.Instance != null)
        {
            TutorialGenerator.Instance.CloseAllTutorial();
        }

        GridStart.GetComponent<CanvasGroup>().alpha = 0;
        StartMiniGameButton.gameObject.SetActive(false);
        MiniGameController.Instance.ActiveMiniGame(AllLevelAlchimy[CurrentLevelAchimy]);


    }
}
