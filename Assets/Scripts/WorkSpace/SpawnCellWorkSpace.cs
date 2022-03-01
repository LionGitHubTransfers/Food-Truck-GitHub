using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
//using static JsonController;

public class SpawnCellWorkSpace : Singleton<SpawnCellWorkSpace>
{
    [SerializeField] private CellWorkSpace Cell;
    [SerializeField] private GameObject[] GridScrolle;
    [SerializeField] private Image[] UpButton;
    [SerializeField] private BarUpImageLocation[] IconUpButton;
    [SerializeField] private Sprite[] SpriteUpButton;
    [SerializeField] private GameObject[] BubbleButtonObject;
    [SerializeField] private GameObject StartMenuBubble;
    [SerializeField] private Sprite SpriteCloseButton;
    private int[] IndexBubbleButton;
    private GameObject CurrentOpenContainer;
    private List<CellWorkSpace> CellAll = new List<CellWorkSpace>();


    public CellWorkSpace GetCellTutorial => CellAll[0];
    JsonController InfoJson;
    private void Start()
    {
        for (int i = 0; i < UpButton.Length; i++)
        {
            UpButton[i].transform.GetChild(0).GetComponent<Image>().sprite = IconUpButton[CurrentLocation.Instance.GetIndex].IconUpButton[i];
        }
        CurrentOpenContainer = GridScrolle[0];
        InfoJson = JsonController.Instance;
        ClickButton(0);
        int IndexGrid = -1;
        for (int i = 0; i < InfoJson.InfoWorkSpace.Count; i++)
        {
            if (i % 5 == 0 )
            {
                IndexGrid++;
            }
            CellWorkSpace CellNew = Instantiate(Cell, GridScrolle[IndexGrid].transform);
            CellNew.SetInfo(InfoJson.InfoWorkSpace[i]);
            CellAll.Add(CellNew);
            
        }
        CheckBubbleButton();

       
    }
   
    public void ClickButton(int _openIndexContaienr) //через инспектор вызов
    {
        for (int i = 0; i < UpButton.Length; i++)
        {
            UpButton[i].sprite = SpriteUpButton[0];
        }
        UpButton[_openIndexContaienr].sprite = SpriteUpButton[1];
        CurrentOpenContainer.SetActive(false);
        GridScrolle[_openIndexContaienr].SetActive(true);
        CurrentOpenContainer = GridScrolle[_openIndexContaienr];
    }
  
    public void CheckBubbleButton()
    {
        bool ActiveStartBubble = false;
        IndexBubbleButton = new int[BubbleButtonObject.Length];
        for (int i = 0; i < CellAll.Count; i++)
        {
            if (CellAll[i].GetActiveButton)
            {
                IndexBubbleButton[(int)CellAll[i].GetInfo.Types] += 1;
            }
        }
        for (int i = 0; i < BubbleButtonObject.Length; i++)
        {
            if (IndexBubbleButton[i] > 0)
            {
                BubbleButtonObject[i].GetComponentInChildren<Text>().text = IndexBubbleButton[i].ToString();
                ActiveStartBubble = true;
            }
            else
            {
                BubbleButtonObject[i].SetActive(false);
            }
        }

        int OpenDopButton = PlayerPrefs.GetInt("DopButton" + CurrentLocation.Instance.GetIndex, 0);
        for (int i = OpenDopButton; i < UpButton.Length; i++)
        {
            UpButton[i].GetComponent<Button>().interactable = false;
            UpButton[i].transform.GetChild(0).GetComponent<Image>().sprite = SpriteCloseButton;
        }

        int currentLevel = PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0) + 1;
        if (currentLevel > 11)
        {
            StartMenuBubble.SetActive(ActiveStartBubble);
        }
        else
        {
            StartMenuBubble.SetActive(false);
        }

    }




}
[System.Serializable]
public class BarUpImageLocation
{
   public Sprite[] IconUpButton;
}
