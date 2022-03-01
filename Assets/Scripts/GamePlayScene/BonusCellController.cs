using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class BonusCellController : Singleton<BonusCellController>
{   ///  info Bonus
    [SerializeField] private BonusCell[] BonusCells;
    private GameObject ModelBonus;
    private int CurrentIndexBonusCell;
    private int WinCount = 0;
    public bool BonusActive = false;
    private float StartPosY;
    ///  info salt 
    private TypeSell TypeSaltObject;
    private int IndexSaltFirstObject;
    private int IndexSalt;
    public bool SaltActive = false;
  
    public int GetCurrentIndexBonus => CurrentIndexBonusCell;
    public int GetIndexSalt => IndexSalt;
    public int GetIndexSeltObject => IndexSaltFirstObject;
    public TypeSell GetTypeSaltObject => TypeSaltObject;

    public BonusCell[] GetAllBonusCells => BonusCells;
    public void OpenContainer()
    {
      if(StartPosY == 0)
       {
           StartPosY = transform.position.y;
       }
        transform.DOMoveY(StartPosY, 0.3f).OnComplete(()=> {

            GetComponent<CanvasGroup>().DOFade(1, 0.3f);
        });
       
    }
    private void Start()
    {
        StartPosY = transform.position.y;
       transform.DOMoveY(transform.position.y - 5, 0);
    }
    public void CloseContainer()
    {
        SaltActive = false;
        BonusActive = false;
        WinCount = 0;
        for (int i = 0; i < BonusCells.Length; i++)
        {
            BonusCells[i].GetComponent<Collider>().enabled = true;
            BonusCells[i].GetComponent<Image>().enabled = true;
        }
        

            GetComponent<CanvasGroup>().DOFade(0, 0.3f).OnComplete(() => {
                transform.DOMoveY(StartPosY - 5, 0.1f);
                for (int i = 0; i < BonusCells.Length; i++)
                {
                    BonusCells[i].GetComponent<Image>().sprite = null;
                    if (BonusCells[i].GetComponentInChildren<CellScript>())
                    {
                        Destroy(BonusCells[i].GetComponentInChildren<CellScript>().gameObject);
                    }
                    //  BonusCells[i].GetComponent<Collider>().enabled = true;
                }
            });

       

       
    }
    public void SetInfoCell(int _indexBonux)
    {
      
        BonusActive = true;
        SaltActive = false;
        CurrentIndexBonusCell = _indexBonux;
        for (int i = 0; i < BonusCells.Length; i++)
        {
            BonusCells[i].SetInfoCell(DataController.Instance.GetAlchimyLevels[_indexBonux].GetLevel[i].Index, DataController.Instance.GetAlchimyLevels[_indexBonux].GetLevel[i].TypeCellAlchimy);
        }
    }
    public void SetInfoSeltCell(TypeSell _TypeFirstCell, int _IndexFirstCell, int _IndexSelt)
    {
        BonusActive = false;
        SaltActive = true;
    
        TypeSaltObject = _TypeFirstCell;
        IndexSaltFirstObject = _IndexFirstCell;
        IndexSalt = _IndexSelt;
        BonusCells[0].GetComponent<Collider>().enabled = false;
        BonusCells[3].GetComponent<Collider>().enabled = false;
        BonusCells[0].GetComponent<Image>().enabled = false;
        BonusCells[3].GetComponent<Image>().enabled = false;

        BonusCells[1].GetComponent<Collider>().enabled = true;
        BonusCells[2].GetComponent<Collider>().enabled = true;
        BonusCells[1].SetInfoCell(_IndexFirstCell, _TypeFirstCell);
        BonusCells[2].SetInfoCell(_IndexSelt, TypeSell.Salt);
    }
    
    public bool CheckWinBonus()
    {
        WinCount++;
        if(WinCount == 4)
        {
            Debug.Log("WinBonus");
            return true;
        }
        else
        {
            return false;
        }
    }
    public bool CheckWinSalt()
    {
        WinCount++;
        if (WinCount == 2)
        {
            Debug.Log("WinSalt");
            return true;
        }
        else
        {
            return false;
        }
    }
}
