using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class StartMenuButtonController : Singleton<StartMenuButtonController>
{
    [SerializeField] private BubbleButton[] AllBubble;
    [SerializeField] private Image UpBar;
    [SerializeField] private Text BarText;
    [SerializeField] private Button ButtonCloseAllBubble;
    [SerializeField] private GameObject TargetStar;
    [SerializeField] private Button OpenContainerLocation;
    public GameObject GetTargetStar => TargetStar;
    private float CurrentFillAmount;
    private BubbleButton CurrentOpenButton;

    public BubbleButton GetCurrentOpenButton => CurrentOpenButton;
    public BubbleButton SetOpenButton
    {
        set
        {
            CurrentOpenButton = value;
        }
    }

    private int MaxCountCost;
    private int CurrentCountCost;
    public int GetCurrentCountStars => CurrentCountCost;
    public float GetCurrentFillAmount => CurrentFillAmount;
    private void Start()
    {
        AllBubble = GetComponentsInChildren<BubbleButton>();
        ButtonCloseAllBubble.onClick.AddListener(CloseBubble);
        OpenContainerLocation.onClick.AddListener(OpenLocationContainer);
        StartCoroutine(TimerCheck());
    }
    private void OpenLocationContainer()
    {
        LocationUiController.Instance.OpenContainer();
    }
   private void CloseBubble()
    {
        if (CurrentOpenButton)
        {
            CurrentOpenButton.CloseBubble();
        }
    }
    private IEnumerator TimerCheck()
    {
        yield return new WaitForSeconds(0.1f);
        CheckStars();
        OfflineMoney.Instance.CheckOffline();
    }
    public void CheckStars()
    {
        CurrentCountCost = 0;
        MaxCountCost = 0;
        for (int i = 0; i < AllBubble.Length; i++)
        {
            MaxCountCost += AllBubble[i].GetCountCost();
            CurrentCountCost += AllBubble[i].GetLevel();
        }
        CurrentFillAmount = (float)CurrentCountCost / (float)MaxCountCost;
        BarText.text = CurrentCountCost.ToString() + "/" + MaxCountCost.ToString();
        UpBar.fillAmount = CurrentFillAmount;
        //UpBar.fillAmount = (CurrentFillAmount - PlayerPrefs.GetFloat("BarUp",0)) *5f;
        //if ((CurrentFillAmount - PlayerPrefs.GetFloat("BarUp", 0)) * 5f >= 1)
        //{
        //    PlayerPrefs.SetFloat("BarUp", PlayerPrefs.GetFloat("BarUp", 0) + 0.2f);
        //    UpBar.fillAmount = (CurrentFillAmount - PlayerPrefs.GetFloat("BarUp", 0)) * 5f;
        //}

      //  RatingController.Instance.SpawnContainers(CurrentFillAmount);
      //  RatingController.Instance.ActiveAnimObject();

        CheckMoneyAllButton();
        RatingController.Instance.ActiveAnimObject();
        // OpenStar();
    }
  
    public void CheckMoneyAllButton()
    {
        for (int i = 0; i < AllBubble.Length; i++)
        {
            AllBubble[i].CheckCountMoney();
        }
    }
}
