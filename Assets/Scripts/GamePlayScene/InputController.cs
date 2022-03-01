using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using static JsonController;

public class InputController : MonoBehaviour
{

    private GameObject GrabObject;
    private Vector3 StartPosGrabObject;
    private float DeltaX, DeltaY;
    private void Update()
    {

        if (GameController.Instance.State != GameController.GameState.Game)
            return;

        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            if (Physics.Raycast(ray, out hit))
            {
                if (hit.collider.GetComponent<CellScript>())
                {
                   hit.collider.GetComponent<CellScript>().SortOrder(1);
                    if (hit.collider.GetComponent<CellScript>().GetGrillCellActive)
                    {
                        hit.collider.GetComponent<CellScript>().SpawnGrillObject();
                    }
                    else
                    {
                        GrabObject = hit.collider.gameObject;
                        GrabObject.transform.DOScale(1.2f, 0.1f);
                        GrabObject.GetComponent<Collider>().enabled = false;
                        DeltaX = Camera.main.ScreenToWorldPoint(Input.mousePosition).x - GrabObject.transform.position.x;
                        DeltaY = Camera.main.ScreenToWorldPoint(Input.mousePosition).y - GrabObject.transform.position.y;
                        StartPosGrabObject = GrabObject.transform.position;


                        CheckOutlineCell(true);
                        GrabObject.GetComponent<CellScript>().ActiveOrDiactiveOutline(false); //убрать обводку у обьект который взял
                    }
               
                }
            }
        }
        if (Input.GetMouseButton(0) && GrabObject)
        {
            Vector3 MousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            GrabObject.transform.position = new Vector3(MousePosition.x - DeltaX, MousePosition.y - DeltaY, GrabObject.transform.position.z);

        }
        if (Input.GetMouseButtonUp(0) && GrabObject)
        {
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            CheckOutlineCell(false);
           GrabObject.GetComponent<CellScript>().SortOrder(0);
            if (Physics.Raycast(ray, out hit))
            {
                CellScript HitCellObject = hit.collider.GetComponent<CellScript>();
                CellScript GrabObjectCell = GrabObject.GetComponent<CellScript>();
                Level LevelScript = hit.collider.GetComponent<Level>();

                if (HitCellObject 
                    && GrabObject.GetComponent<CellScript>().GetType == HitCellObject.GetType 
                    && GrabObjectCell.GetIndex == HitCellObject.GetIndex 
                    && DataController.Instance.GetData.CheckThereisIndex(HitCellObject.GetType, HitCellObject.GetIndex+1)
                    && OpenCellController.Instance.OpenOrNoCell(HitCellObject.GetType, HitCellObject.GetIndex+1))
                {
                    GridCellController.Instance.DeleteCell = GrabObject.GetComponent<CellScript>();
                    Destroy(GrabObject);
                    HitCellObject.NextCell();
                    VibrationController.Instance.VibrateWithTypeSelection();
                    //Table.Instance.OneRotateChan();


                }
                else if (LevelScript)
                {
                    if (LevelScript.GetInfoForType(GrabObjectCell.GetType, GrabObjectCell.GetIndex))
                    {
                        LevelScript.Spawn(GrabObjectCell.GetType, GrabObjectCell.GetIndex);
                        CellScript InfoCellitem = GrabObject.GetComponent<CellScript>();
                        CellItemWorkSpace CurrentSellObject = JsonController.Instance.InfoWorkSpace.First(a => a.Types == InfoCellitem.GetType && a.Index == InfoCellitem.GetIndex);
                        float CurrentLevel = CurrentSellObject.Level;
                        int FirstCount = Mathf.RoundToInt(3 * Mathf.Pow(2.2f, CurrentSellObject.Index) * (CurrentSellObject.Level == 0 ? 1 : (0.2f * CurrentSellObject.Level + 1.1f)));
                        UiController.Instance.SetMoneyFinish = FirstCount;

                        VibrationController.Instance.VibrateWithTypeMEDIUMIMPACT();
                        CurrentSellObject.CurrentCount += 1;


                        GridCellController.Instance.DeleteCell = GrabObject.GetComponent<CellScript>();
                        Destroy(GrabObject);

                    }
                    else
                    {
                        LevelScript = LevelController.Instance.GetCurrentCharaster.GetComponent<Level>();
                        LevelScript.NoAnim();
                        GrabObjectCell.enabled = true;
                        GrabObject.transform.position = StartPosGrabObject;
                        GrabObject.GetComponent<Collider>().enabled = true;
                        GrabObject.transform.DOScale(1f, 0.1f);
                        CheckOutlineCell(false);
                        VibrationController.Instance.VibrateWithTypeHAIDIMPACT();
                    }
                }
                else if (hit.collider.tag == "CellBackGround")
                {
                    GrabObject.transform.SetParent(hit.collider.transform);
                    GrabObject.transform.localPosition = Vector3.zero;
                    GrabObject.GetComponent<Collider>().enabled = true;
                    GrabObject.transform.DOScale(1f, 0.1f);
                    
                }
                else if (hit.collider.GetComponent<BonusCell>() && GrabObjectCell.GetType == hit.collider.GetComponent<BonusCell>().GetType  && GrabObjectCell.GetIndex == hit.collider.GetComponent<BonusCell>().GetIndex)
                {
                    GrabObject.transform.SetParent(hit.collider.transform);
                    GrabObject.transform.localPosition = Vector3.zero;
                    GrabObject.transform.DOScale(1f, 0.1f);

                    CellScript InfoCellitem = GrabObject.GetComponent<CellScript>();
                    hit.collider.GetComponent<Collider>().enabled = false;
                    if (InfoCellitem.GetType != TypeSell.Salt)
                    {
                        CellItemWorkSpace CurrentSellObject = JsonController.Instance.InfoWorkSpace.First(a => a.Types == InfoCellitem.GetType && a.Index == InfoCellitem.GetIndex);
                        float CurrentLevel = CurrentSellObject.Level;
                        int FirstCount = Mathf.RoundToInt(3 * Mathf.Pow(2.2f, CurrentSellObject.Index) * (CurrentSellObject.Level == 0 ? 1 : (0.2f * CurrentSellObject.Level + 1.1f)));
                        UiController.Instance.SetMoneyFinish = FirstCount;

                        CurrentSellObject.CurrentCount += 1;
                        VibrationController.Instance.VibrateWithTypeSelection();

                    }
                   

                    if (BonusCellController.Instance.BonusActive)
                    {
                        if (BonusCellController.Instance.CheckWinBonus())
                        {
                            LevelScript = LevelController.Instance.GetCurrentCharaster.GetComponent<Level>();
                            LevelScript.Spawn(TypeSell.Bonus, BonusCellController.Instance.GetCurrentIndexBonus);
                            BonusCellController.Instance.CloseContainer();
                            VibrationController.Instance.VibrateWithTypeSelection();
                        }
                    }
                    else if (BonusCellController.Instance.SaltActive)
                    {
                        if (BonusCellController.Instance.CheckWinSalt())
                        {
                            VibrationController.Instance.VibrateWithTypeSelection();
                            LevelScript = LevelController.Instance.GetCurrentCharaster.GetComponent<Level>();
                            LevelScript.Spawn(BonusCellController.Instance.GetTypeSaltObject, BonusCellController.Instance.GetIndexSeltObject,true);
                            BonusCellController.Instance.CloseContainer();
                        }
                    }
                    GridCellController.Instance.DeleteCell = GrabObject.GetComponent<CellScript>();

                }
                else if (hit.collider.GetComponent<GrillCell>())
                {
                    LevelScript = LevelController.Instance.GetCurrentCharaster.GetComponent<Level>();
                    bool NeedIngridient = false;
                    bool CurrentBoolLevel = false;
                    for (int i = 0; i < LevelScript.GetGrill.Count; i++)
                    {
                        if (GrabObjectCell.GetType == LevelScript.GetType[i] && GrabObjectCell.GetIndex == LevelScript.GetIndex[i] && LevelScript.GetGrill[i]==true)
                        {
                            NeedIngridient = true;
                            CurrentBoolLevel = LevelScript.GetGrill[i];
                            break;
                        }
                    }
                    if (NeedIngridient)
                    {
                        GrabObject.transform.SetParent(hit.collider.transform);
                        GrabObject.transform.localPosition = Vector3.zero;
                        GrabObject.transform.DOScale(1f, 0.1f);
                        GrabObject.GetComponent<CellScript>().ActiveBarGrill();
                       
                        Debug.Log("CellGrill");
                    }
                    else
                    {
                        GrabObject.transform.SetParent(hit.collider.transform);
                        GrabObject.transform.localPosition = Vector3.zero;
                        GrabObject.transform.DOScale(1f, 0.1f);
                        GrabObject.GetComponent<CellScript>().DestroyGrillCell(1);
                        Debug.Log("Не тот ингридиент ГОРИ");
                    }
                    VibrationController.Instance.VibrateWithTypeSelection();
                    GrillCell.Instance.ActiveGrillCell(false);
                    GridCellController.Instance.DeleteCell = GrabObject.GetComponent<CellScript>();
                }
                else
                {
                   
                    GrabObject.transform.DOScale(1f, 0.1f);
                    GrabObject.GetComponent<Collider>().enabled = true;
                    GrabObject.transform.position = StartPosGrabObject;
                   
                }
            }
            else
            {
                GrabObject.transform.DOScale(1f, 0.1f);
                GrabObject.GetComponent<Collider>().enabled = true;
                GrabObject.transform.position = StartPosGrabObject;
                VibrationController.Instance.VibrateWithTypeMEDIUMIMPACT();

            }
            GrabObject = null;
        }
    }
    private void CheckOutlineCell(bool _active)
    {
        List<CellScript> AllCellOpen = GridCellController.Instance.GetAllCellOpen;
        for (int i = 0; i < AllCellOpen.Count; i++)
        {
            CellScript HitCellObject = AllCellOpen[i].GetComponent<CellScript>();
            CellScript GrabObjectCell = GrabObject.GetComponent<CellScript>();

            if (HitCellObject && GrabObject.GetComponent<CellScript>().GetType == HitCellObject.GetType && GrabObjectCell.GetIndex == HitCellObject.GetIndex && DataController.Instance.GetData.CheckThereisIndex(HitCellObject.GetType, HitCellObject.GetIndex + 1))
            {
                HitCellObject.ActiveOrDiactiveOutline(_active);
            }
        }
    }
}
