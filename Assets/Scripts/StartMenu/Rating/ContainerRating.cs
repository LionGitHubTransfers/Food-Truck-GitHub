using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ContainerRating : MonoBehaviour
{
    [SerializeField] private Image Bar;
    [SerializeField] private float CountBar;
    [SerializeField] private Image Ground;
    [SerializeField] private Text CountText;
    [SerializeField] private int Index;
    [SerializeField] private Sprite ImagePlayer;
    [SerializeField] private Text Name;
    [SerializeField] private Text TextXp;
    public float GetCountBar => CountBar;
    public int GetIndex => Index;
    public void SetFillAmountBar(float _count)
    {
        CountBar = _count;
        Bar.fillAmount = _count;

    }
    public void SetIndex(int _index)
    {
       
        Index = _index;
        CountText.text = Index.ToString();
       
        if (Index == 49)
        {
            TextXp.text = 0.ToString() + " XP";

        }
        else
        {
            TextXp.text = (10000 - (Index - 1) * 203).ToString() + " XP";
        }

    }
    public void SetName(string _name)
    {
        Name.text = _name;
    }
    public void SetImagePlayer()
    {
        GetComponent<Image>().sprite = ImagePlayer;
        Name.text = "YOU";
        Name.color = new Color32(0 , 201, 121, 255);
    }
}
