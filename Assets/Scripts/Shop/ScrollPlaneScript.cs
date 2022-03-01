using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrollPlaneScript : MonoBehaviour
{
    [SerializeField] private List<ShopButton>  AllButtonInScroll = new List<ShopButton>();
    private ShopButton CurrentButtonActive;
    private int CurrentIndexOpen;
    public ShopButton AddButton
    {
        set
        {
            AllButtonInScroll.Add(value);
            value.SetScrollParent = this;
        }
    }
    public void OpenCurrentButton(int _index , ShopButton _CurrentButton)
    {
        CurrentIndexOpen = _index;
        if (CurrentButtonActive != null)
        {
            CurrentButtonActive.ActiveBackGround(false);
            CurrentButtonActive.CloseOutline();
        }
        CurrentButtonActive = AllButtonInScroll[_index];
        AllButtonInScroll[_index].ActiveBackGround(true);
    }
    public void CheckOpen()
    {
        AllButtonInScroll[CurrentIndexOpen].ActiveBackGround(true);
    }
    

}
