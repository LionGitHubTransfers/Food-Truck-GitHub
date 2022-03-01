using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ReceptCell : MonoBehaviour
{
    [SerializeField] private Image[] IconOpenCell;
    [SerializeField] private TypeSell Types;

    private void Start()
    {
        for (int i = 0; i < IconOpenCell.Length; i++)
        {
            IconOpenCell[i].gameObject.SetActive(false);
        }

        OpenCell();
    }
    public void OpenCell()
    {
        for (int i = 0; i < 5; i++)
        {
            if (OpenCellController.Instance.OpenOrNoCell(Types, i))
            {
                IconOpenCell[i].gameObject.SetActive(true);
            }
            else
            {
                break;
            }
        }
    }
}
