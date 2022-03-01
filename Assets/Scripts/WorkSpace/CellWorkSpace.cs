using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using static JsonController;

public class CellWorkSpace : MonoBehaviour
{
    [SerializeField] private Image Icon;
    [SerializeField] private Text CountText,LevelText,MoneyText,DiamondText;
    [SerializeField] private Button NextLevelButton;
    [SerializeField] private GameObject MaxButton;
    [SerializeField] private Image ProggresBar,BackGroundBar;
    [SerializeField] private int[] NextMoney;
    [SerializeField] private int[] NextDiamond;
    [SerializeField] private GameObject TargetTutorial;
    private CellItemWorkSpace CurrentInfo;
    private bool ActiveButton = false;
    public bool GetActiveButton => ActiveButton;
    public CellItemWorkSpace GetInfo => CurrentInfo;
    public GameObject GetTutorialButton => TargetTutorial;
    private void Start()
    {
      //  NextLevelButton.gameObject.SetActive(false);
        NextLevelButton.onClick.AddListener(NextLevelCell);
    }
    public void SetInfo(CellItemWorkSpace _info)
    {


        CurrentInfo = _info;

        if (!OpenCellController.Instance.OpenOrNoCell(CurrentInfo.Types, CurrentInfo.Index))
        {
            gameObject.SetActive(false);
            return;
        }

        int formula = 5;

        Icon.sprite = DataController.Instance.GetData.GetAllInfo.First(a => a.GetTypeCell == CurrentInfo.Types).GetIcons[CurrentInfo.Index];
        CountText.text = CurrentInfo.CurrentCount.ToString() + "/" + formula.ToString();
        ProggresBar.fillAmount = (float)CurrentInfo.CurrentCount / (float)formula;
        LevelText.text = (CurrentInfo.Level).ToString();

        if(CurrentInfo.CurrentCount >= formula)
        {
            CurrentInfo.CurrentCount = formula;
            CountText.text = CurrentInfo.CurrentCount.ToString() + "/" + formula.ToString();
            NextLevelButton.GetComponent<CanvasGroup>().alpha = 1;
            NextLevelButton.GetComponent<CanvasGroup>().blocksRaycasts = true;
            ActiveButton = true;
        }
        
        if(CurrentInfo.Level >= 5)
        {
            MaxUpdate();
        }
        else
        {
            MoneyText.text = NextMoney[CurrentInfo.Level].ToString();
            DiamondText.text = NextDiamond[CurrentInfo.Level].ToString();
        }
        
    }
    public void NextLevelCell()
    {

        if(TutorialGenerator.Instance != null)
        {
            TutorialGenerator.Instance.CloseAllTutorial();
        }
        MoveMoneyController.Instance.SpawnMoney(NextLevelButton.transform);
        MoveMoneyController.Instance.SpawnDiamond(NextLevelButton.transform);
        MoneyController.Instance.SetMoney = NextMoney[CurrentInfo.Level];
        MoneyController.Instance.SetDiamond = NextDiamond[CurrentInfo.Level];
        ActiveButton = false;
        NextLevelButton.GetComponent<CanvasGroup>().alpha = 0.3f;
        NextLevelButton.GetComponent<CanvasGroup>().blocksRaycasts = false;
        CurrentInfo.Level += 1;
        CurrentInfo.CurrentCount = 0;
        SetInfo(CurrentInfo);
        EventManager.Instance.SendEventMasteriUpdate(Icon.sprite.name, CurrentInfo.Level);
        JsonController.Instance.SaveField();
        // SpawnCellWorkSpace.Instance.
        SpawnCellWorkSpace.Instance.CheckBubbleButton();
        AlchimyController.Instance.Start();
        StartMenuButtonController.Instance.CheckStars();
        StartCoroutine(Vibro());
        if (CurrentInfo.Level >= 5)
        {
            MaxUpdate();
        }
    }

    private void MaxUpdate()
    {
        CountText.gameObject.SetActive(false);
        NextLevelButton.gameObject.SetActive(false);
        MaxButton.SetActive(true);
        BackGroundBar.gameObject.SetActive(false);
    }
    private IEnumerator Vibro()
    {
        for (int i = 0; i < 5; i++)
        {
            yield return new WaitForSeconds(0.05f);
            VibrationController.Instance.VibrateWithTypeSelection();
        }
       
    }
    
}
