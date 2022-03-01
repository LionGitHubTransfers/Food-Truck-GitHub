using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using static JsonController;

public class CellAlchimy : MonoBehaviour
{
    [SerializeField] private Image Icon;
    [SerializeField] private Text TextCountLevel;
    [SerializeField] private CanvasGroup CanvasCell;
    [SerializeField] private GameObject ContainerDown;
    public void SetInfo(LevelAlchimy _info)
    {
        Icon.sprite = DataController.Instance.GetData.GetCellSprite(_info.TypeCellAlchimy,_info.Index);
        TextCountLevel.text = (_info.Level).ToString();
        CellItemWorkSpace CellData =  JsonController.Instance.InfoWorkSpace.FirstOrDefault(x => x.Types == _info.TypeCellAlchimy && x.Index == _info.Index);

       
        if (_info.Level <= CellData.Level)
        {
          
            CanvasCell.alpha = 1f;
            AlchimyController.Instance.SetIngredient(1);
       
        }
        else
        {
          
            AlchimyController.Instance.SetIngredient(0);
            CanvasCell.alpha = 0.4f;
        }
     
    }
    public void StartMiniGame()
    {
        ContainerDown.SetActive(false);
    }
}
