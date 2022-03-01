using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BarFinish : Singleton<BarFinish>
{
    [SerializeField] private Image[] AllIcon;
    [SerializeField] private Image Bar;
    [SerializeField] private SpriteBar[] AllInfoBar;
    [SerializeField] private int CountProssentInStage;
    [SerializeField] private int SubStage;
    [SerializeField] private int CurrentSubStage; // если больше 2 заполнений прибовляем по оному и берем след
    private void Start()
    {
        CurrentSubStage = PlayerPrefs.GetInt("CurrentSubStage" + CurrentLocation.Instance.GetIndex, 0);
        SubStage = PlayerPrefs.GetInt("SubStage" + CurrentLocation.Instance.GetIndex, 0); // текущий стейд в баре (сосика,ходдог ...)
        Bar.fillAmount = PlayerPrefs.GetFloat("FinishBarProgress" + CurrentLocation.Instance.GetIndex, 0);
        CountProssentInStage = AllInfoBar[SubStage].Prossent.Length; // количество на текущем стейдже в баре

    }

    public void FillingBar()
    {
        float CurrentFillAmountBar = Bar.fillAmount;
        CurrentFillAmountBar += AllInfoBar[SubStage].Prossent[CurrentSubStage];
        Bar.DOFillAmount(CurrentFillAmountBar, 0.5f).OnComplete(() =>
        {

            PlayerPrefs.SetFloat("FinishBarProgress" + CurrentLocation.Instance.GetIndex, CurrentFillAmountBar);
            CurrentSubStage++;
            if (CountProssentInStage == CurrentSubStage)
            {
            if (AllIcon[SubStage].transform.childCount>0)
                {
                    UiController.Instance.OpenDopSprite(AllIcon[SubStage].sprite, false);
                    DishUnlockedController.Instance.SetImage(AllIcon[SubStage].sprite, AllIcon[SubStage].transform.GetChild(0).GetComponent<Image>().sprite);
                   
                }
                else
                {
                    UiController.Instance.OpenDopSprite(AllIcon[SubStage].sprite,true);
                }
               
                CurrentSubStage = 0;
                SubStage++;
                PlayerPrefs.SetInt("SubStage" + CurrentLocation.Instance.GetIndex, SubStage);
                ProgressBarController.Instance.NextCellOpen();

            }
            PlayerPrefs.SetInt("CurrentSubStage" + CurrentLocation.Instance.GetIndex, CurrentSubStage);
            if (CurrentFillAmountBar >= 0.89f)
            {
                ProgressBarController.Instance.NextBarActive();
                PlayerPrefs.SetInt("SubStage" + CurrentLocation.Instance.GetIndex, 0);
                PlayerPrefs.SetFloat("FinishBarProgress" + CurrentLocation.Instance.GetIndex, 0);
            }
        });

    }

}
[System.Serializable]
public class SpriteBar
{
    public float[] Prossent;
}
