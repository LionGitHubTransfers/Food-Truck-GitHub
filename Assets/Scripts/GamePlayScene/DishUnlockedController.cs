using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DishUnlockedController : Singleton<DishUnlockedController>
{
    [SerializeField] private Image FinalIcon;
    [SerializeField] private Image[] DopIcons;


    public void SetImage(Sprite FinishSprite,Sprite DopSprite)
    {
        FinalIcon.sprite = FinishSprite;

        for (int i = 0; i < DopIcons.Length; i++)
        {
            DopIcons[i].sprite = DopSprite;
        }
    }
}
