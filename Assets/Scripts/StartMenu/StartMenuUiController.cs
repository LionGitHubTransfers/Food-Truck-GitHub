using DG.Tweening;
using System;
using System.Collections;
using System.Collections.Generic;
using UIAnimatorCore;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class StartMenuUiController : MonoBehaviour
{
    [SerializeField] private CanvasGroup ShopContainer, WorkSpaceContainer, StartMenuContainer, RatingContainer, LabContainer,SettingContainer;
    [SerializeField] private Button ShopButton, WorkSpaceButton, ExitButton, RatingButton, StartGameButton, LabButton,SettingButton;
    [SerializeField] private Image Fade;
    [SerializeField] private Sprite SpriteCloseButton;
    [SerializeField] private Text CurrentLevelText;
    [SerializeField] private Sprite[] SpriteFade;
    [SerializeField] private GameObject[] Location;
    private CanvasGroup CurrenOpenContainer;
    private GameObject CurrentObjectActive;

    private void Awake()
    {
        Fade.gameObject.SetActive(true);
    }
    private void Start()
    {
        Location[CurrentLocation.Instance.GetIndex].gameObject.SetActive(true);
        Fade.gameObject.transform.DOScale(1.2f, 0.5f).OnComplete(() =>
        {
            // Fade.gameObject.transform.DOScale(1, 0);
        });
        Fade.DOFade(0, 0.5f);
        ShopButton.onClick.AddListener(OpenShop);
        WorkSpaceButton.onClick.AddListener(OpenWorkSpace);
        ExitButton.onClick.AddListener(OpenStartMenu);
        RatingButton.onClick.AddListener(OpenRating);
        StartGameButton.onClick.AddListener(PlayGame);
        LabButton.onClick.AddListener(OpenLab);
        SettingButton.onClick.AddListener(OpenSetting);
        CheckCloseButton();

    }
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.A))
        {
            StartMenuContainer.GetComponent<UIAnimator>().PlayAnimation(AnimSetupType.Intro);
        }
    }
    private void CheckCloseButton()
    {

        int currentLevel = PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0) + 1;
        CurrentLevelText.text = "DAY " + currentLevel.ToString();
        if (currentLevel < 11)
        {
            WorkSpaceButton.image.sprite = SpriteCloseButton;
            WorkSpaceButton.transform.GetChild(0).GetComponent<Text>().text = "complete day 10";
            WorkSpaceButton.transform.GetChild(0).GetComponent<Text>().color = new Color32(201, 143, 93, 255);
            WorkSpaceButton.interactable = false;

        }
        if (currentLevel < 15)
        {
            LabButton.image.sprite = SpriteCloseButton;
            LabButton.transform.GetChild(0).GetComponent<Text>().text = "complete day 14";
            LabButton.transform.GetChild(0).GetComponent<Text>().color = new Color32(201, 143, 93, 255);
            LabButton.interactable = false;
        }
        if(currentLevel < 5)
        {
               ShopButton.image.sprite = SpriteCloseButton;
               ShopButton.interactable = false;
            ShopButton.transform.GetChild(0).GetComponent<Text>().text = "complete day 4";
            ShopButton.transform.GetChild(0).GetComponent<Text>().color = new Color32(201, 143, 93, 255);
        }
        if (currentLevel == 11 && PlayerPrefs.GetInt("TutorialStartMenuIndex", 0) == 1 )
        {
            TutorialController.Instance.ActiveTutorialInStartMenu(1);
        }
    }

    private void OpenShop()
    {
        CloseStartMenu();
        CameraAnim.Instance.MoveForward();
        Fade.sprite = SpriteFade[0];
        Fade.gameObject.transform.DOScale(3, 0.3f);
        Fade.DOFade(1, 0.3f).OnComplete(() =>
        {

            Fade.DOFade(0, 0.3f);
            Fade.gameObject.transform.DOScale(1, 0.3f);
            CurrenOpenContainer = ShopContainer;
            OpenExitButton();

            CurrentObjectActive = ShopContainer.GetComponent<ShopController>().GetSceneObject;
            CurrentObjectActive.SetActive(true);

            ShopContainer.DOFade(1, 0).OnComplete(() =>
            {
                ShopContainer.blocksRaycasts = true;

            });
        });
    }
    private void OpenLab()
    {
        if (TutorialGenerator.Instance != null)
        {
            TutorialGenerator.Instance.NextClick(AlchimyController.Instance.GetTutorialButton, 0);
        }

        CameraAnim.Instance.MoveForward();
        Fade.sprite = SpriteFade[0];
        CloseStartMenu();


            Fade.DOFade(1, 0.3f).OnComplete(() =>
            {

                Fade.DOFade(0, 0.3f);
                Fade.gameObject.transform.DOScale(1, 0);
                CurrenOpenContainer = LabContainer;
                OpenExitButton();

                CurrentObjectActive = LabContainer.GetComponent<AlchimyController>().ActiveSceneObject();
                CurrentObjectActive.SetActive(true);
                LabContainer.GetComponent<AlchimyController>().ActiveEffectButton();
                LabContainer.DOFade(1, 0).OnComplete(() =>
                {
                    LabContainer.blocksRaycasts = true;

                });
            });


    }

    private void OpenSetting()
    {

        SettingContainer.DOFade(1, 0.3f).OnComplete(() =>
        {
            SettingContainer.blocksRaycasts = true;
            CurrenOpenContainer = SettingContainer;
            OpenExitButton();
            CloseStartMenu();
        });

    }
    private void PlayGame()
    {
      EventManager.Instance.SendEventDesignClick(EventManager.EventEnum.play_click.ToString());


        Fade.sprite = SpriteFade[1];
        Fade.gameObject.transform.DOScale(1, 0.5f);
        Fade.DOFade(1, 0.5f).OnComplete(() =>
        {
            StartCoroutine(TimerDeleteDotween(2));
        });
    }
    private void OpenRating()
    {
        EventManager.Instance.SendEventDesignClick(EventManager.EventEnum.open_leaderboard.ToString());

        RatingContainer.GetComponent<UIAnimator>().PlayAnimation(AnimSetupType.Intro);
      //  CameraAnim.Instance.MoveForward();
        RatingContainer.GetComponent<RatingController>().MoveInPlayerPos();
        RatingContainer.DOFade(1, 0).OnComplete(() =>
        {
            RatingContainer.blocksRaycasts = true;
            CurrenOpenContainer = RatingContainer;
            OpenExitButton();
            CloseStartMenu();
        });

    }
    private void OpenWorkSpace()
    {


        if (TutorialGenerator.Instance != null)
        {
            TutorialGenerator.Instance.NextClick(SpawnCellWorkSpace.Instance.GetCellTutorial.GetTutorialButton, 0);
        }
        CameraAnim.Instance.MoveForward();
        Fade.sprite = SpriteFade[0];
        //Fade.gameObject.transform.DOScale(3, 0.3f);
        //Fade.DOFade(1, 0.3f).OnComplete(() =>
        //{

        //    Fade.DOFade(0, 0.3f);
        //    Fade.gameObject.transform.DOScale(1, 0.3f);
        WorkSpaceContainer.GetComponent<UIAnimator>().PlayAnimation(AnimSetupType.Intro);
        CurrenOpenContainer = WorkSpaceContainer;
            OpenExitButton();
            CloseStartMenu();
            WorkSpaceContainer.DOFade(1, 0).OnComplete(() =>
            {
                WorkSpaceContainer.blocksRaycasts = true;

            });
        //});
        SpawnCellWorkSpace.Instance.CheckBubbleButton();
    }
    private void OpenStartMenu()
    {

        if(TutorialGenerator.Instance!=null && TutorialGenerator.Instance.IndexTutorial == 1)
        {
            TutorialGenerator.Instance.NextClick(null, 0);
        }
        CameraAnim.Instance.MoveStartPos();
        Fade.sprite = SpriteFade[0];
        //Fade.gameObject.transform.DOScale(3, 0.3f);
        StartMenuContainer.GetComponent<UIAnimator>().PlayAnimation(AnimSetupType.Intro);
        //Fade.DOFade(1, 0.3f).OnComplete(() =>
        //{

        //    Fade.DOFade(0, 0.3f);
        //    Fade.gameObject.transform.DOScale(1, 0.3f);
        ExitButton.GetComponent<CanvasGroup>().blocksRaycasts = false;
        ExitButton.GetComponent<CanvasGroup>().DOFade(0, 0.3f);
        if (CurrentObjectActive)
        {
            Fade.DOFade(1, 0.3f).OnComplete(() =>
            {
                CurrentObjectActive.SetActive(false);
                CurrentObjectActive = null;
                if (CurrenOpenContainer.GetComponent<AlchimyController>())
                {
                    CurrenOpenContainer.GetComponent<AlchimyController>().CloseAnim();
                }

                Fade.DOFade(0, 0.3f);
            });
        }


        if (CurrenOpenContainer.GetComponent<UIAnimator>())
        {

            CurrenOpenContainer.GetComponent<UIAnimator>().PlayAnimation(AnimSetupType.Outro);
        }

        CurrenOpenContainer.blocksRaycasts = false;
        CurrenOpenContainer.DOFade(0, 0.3f);


        StartMenuContainer.DOFade(1, 0).OnComplete(() =>
            {
                StartMenuContainer.blocksRaycasts = true;

            });
        //});
    }
    private void OpenExitButton()
    {

        Fade.sprite = SpriteFade[0];
        ExitButton.GetComponent<CanvasGroup>().DOFade(1, 0.3f).OnComplete(() =>
        {
            ExitButton.GetComponent<CanvasGroup>().blocksRaycasts = true;

        });


    }
    private void CloseStartMenu()
    {

        StartMenuContainer.GetComponent<UIAnimator>().PlayAnimation(AnimSetupType.Outro);

        StartMenuContainer.blocksRaycasts = false;
        StartMenuContainer.DOFade(1, 0).OnComplete(() =>
        {


        });
    }
    public void TestButtonLocation()
    {
        Fade.DOFade(1, 0.5f).OnComplete(() =>
        {
            StartCoroutine(TimerDeleteDotween(1));
        });
    }
    private IEnumerator TimerDeleteDotween(int IndexLevel)
    {
        DOTween.KillAll();
        yield return new WaitForSeconds(0.1f);
        SceneManager.LoadScene(IndexLevel);
    }
}
