using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BubbleButton : MonoBehaviour
{
    [SerializeField] private string SaveName;
    [SerializeField] private string NameObject;
    [SerializeField] private Text NameText;
    [SerializeField] private Text CostText;
    [SerializeField] private int[] Costs;
    [SerializeField] private GameObject[] ActiveObjects;
    [SerializeField] private Button ArroyButton;
    [SerializeField] private Sprite[] IconArroy;
    [SerializeField] private ParticleSystem EffectSmokeUp;
    [SerializeField] private GameObject PrefabStar;
    [SerializeField] private int[] ArrayGetStars;
    [SerializeField] private Text StarsText;
    private CanvasGroup _CanvasGroup;
    private Button CurrentButton;
    private int CurrentLevel;

    public int GetLevel()
    {
        int CountStars = 0;
        for (int i = 0; i <= CurrentLevel; i++)
        {
            if (i > 0)
            {
                CountStars += ArrayGetStars[i - 1];
            }
        }
        return CountStars;
    }
    public int GetCountCost()
    {
        int countAllLevel = 0;
        for (int i = 0; i < ArrayGetStars.Length; i++)
        {
            countAllLevel += ArrayGetStars[i];
        }
        return countAllLevel;
    }

    private void Awake()
    {
        CurrentLevel = PlayerPrefs.GetInt(SaveName, 0);
    }
    private void Start()
    {
        // transform.parent.transform.LookAt(Camera.main.transform);


        NameText.text = NameObject;
        _CanvasGroup = GetComponent<CanvasGroup>();
        CurrentButton = GetComponent<Button>();

        CheckCountMoney();
        CurrentButton.onClick.AddListener(Buy);
        ArroyButton.onClick.AddListener(OpenBubble);
        CheckCountMoney();
        ActiveObject();

        if (Costs[0] <= MoneyController.Instance.GetCurrentMoney && PlayerPrefs.GetInt("TutorialStartMenuIndex", 0) == 0)
        {
            TutorialController.Instance.ActiveTutorialInStartMenu(0);
        }
    }
   
    public void Buy()
    {
        if (CurrentLevel < Costs.Length + 1 && PlayerPrefs.GetInt(StaticInfo.Money, 0) >= Costs[CurrentLevel])
        {
            if (TutorialGenerator.Instance != null)
            {
                TutorialGenerator.Instance.CloseAllTutorial();
            }
            EffectSmokeUp.Play();
            MoneyController.Instance.SetMoney = -Costs[CurrentLevel];
            CurrentLevel++;
            EventManager.Instance.SendEventUpgradeStreet(SaveName, CurrentLevel);
            PlayerPrefs.SetInt(SaveName, CurrentLevel);
            CheckCountMoney();
            StartMenuButtonController.Instance.CheckStars();
            ActiveObject();
            FastClose();
            var Star = Instantiate(PrefabStar, transform.position, Quaternion.identity);

            Star.transform.DOMoveY(Star.transform.position.y + 1, 0.5f).OnComplete(() =>
            {

                Star.transform.DOMove(StartMenuButtonController.Instance.GetTargetStar.transform.position, 0.5f);
            });
            LocationUiController.Instance.UpdateBar();
            VibrationController.Instance.VibrateWithTypeSelection();
        }
    }
    private void ActiveObject()
    {
        for (int i = 0; i < ActiveObjects.Length; i++)
        {
            ActiveObjects[i].SetActive(false);
        }
        ActiveObjects[CurrentLevel].SetActive(true);
    }
    public void OpenBubble()
    {
        if (StartMenuButtonController.Instance.GetCurrentOpenButton != null)
        {
            StartMenuButtonController.Instance.GetCurrentOpenButton.CloseBubble();
        }
        if (TutorialGenerator.Instance != null)
        {
            TutorialGenerator.Instance.NextClick(null, 0, 10);
        }
        StartMenuButtonController.Instance.SetOpenButton = this;


        ArroyButton.GetComponent<CanvasGroup>().DOFade(0, 0.3f).OnComplete(() =>
        {

            ArroyButton.GetComponent<CanvasGroup>().blocksRaycasts = false;
        });
        GetComponent<CanvasGroup>().DOFade(1, 0.3f).OnComplete(() =>
        {
            GetComponent<CanvasGroup>().blocksRaycasts = true;
        });
    }
    public void FastClose()
    {
        if (Costs.Length > CurrentLevel)
        {
            ArroyButton.GetComponent<CanvasGroup>().DOFade(1, 0).OnComplete(() =>
            {
                ArroyButton.GetComponent<CanvasGroup>().blocksRaycasts = true;
            });

            GetComponent<CanvasGroup>().blocksRaycasts = false;
            GetComponent<CanvasGroup>().DOFade(0, 0.3f);
        }
    }
    public void CloseBubble()
    {
        if (Costs.Length > CurrentLevel)
        {
            ArroyButton.GetComponent<CanvasGroup>().DOFade(1, 0.3f).OnComplete(() =>
            {
                ArroyButton.GetComponent<CanvasGroup>().blocksRaycasts = true;
            });
            GetComponent<CanvasGroup>().blocksRaycasts = false;
            GetComponent<CanvasGroup>().DOFade(0, 0.3f);
        }
    }
    public void CheckCountMoney()
    {
        if (Costs.Length > CurrentLevel)
        {
            if (PlayerPrefs.GetInt(StaticInfo.Money, 0) >= Costs[CurrentLevel])
            {
                ArroyButton.GetComponent<Image>().sprite = IconArroy[0];
                GetComponent<Button>().interactable = true;
            }
            else
            {
                GetComponent<Button>().interactable = false;
                ArroyButton.GetComponent<Image>().sprite = IconArroy[1];
            }
            CostText.text = Costs[CurrentLevel].ToString();
            
                StarsText.text = "+" + ArrayGetStars[CurrentLevel];
        }
        else
        {
            _CanvasGroup.alpha = 0;
            _CanvasGroup.blocksRaycasts = false;
            ArroyButton.gameObject.SetActive(false);

        }

    }


}
