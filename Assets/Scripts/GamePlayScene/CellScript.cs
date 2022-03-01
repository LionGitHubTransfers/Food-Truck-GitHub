using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class CellScript : MonoBehaviour
{
    [SerializeField] private TypeSell Type;
    [SerializeField] private int Index;
    [SerializeField] private Image Icon;
    [SerializeField] private Image BarGrill,BackBar;
    [SerializeField] private GameObject Outline;
    private bool GrillCellActive = false;
    private ScriptebleObjectCellInfo Data;
    Sequence GrillSequence;
    public bool GetGrillCellActive => GrillCellActive;
    public TypeSell GetType => Type;

    public int GetIndex => Index;


    private void Start()
    {
        GridCellController.Instance.AddCell =GetComponent<CellScript>();
    }
    public void ActiveOrDiactiveOutline(bool _active)
    {
        Outline.SetActive(_active);
    }
    public void SortOrder(int _sort)
    {
        GetComponent<Canvas>().sortingOrder = _sort;
    }
    public void NextCell()
    {
        Index++;
        Icon.sprite = Data.GetCellSprite(Type, Index);

        if (TutorialGenerator.Instance != null)
        {
            TutorialGenerator.Instance.NextClick(gameObject,0.1f);
        }

        transform.DOScale(1.5f, 0.1f).OnComplete(() =>
        {

            transform.DOScale(1f, 0.1f);
        });

    }
    public void SetInfoCell(TypeSell _Type, int _index)
    {
        Data = DataController.Instance.GetData;
        Type = _Type;
        Index = _index;
        Icon.sprite = Data.GetCellSprite(Type, Index);

    }
    public void ActiveBarGrill()
    {
        bool Tutorial = false;

        if (TutorialGenerator.Instance != null && PlayerPrefs.GetInt("TutorialGameIndex", 0) >= 6)
        {
            TutorialGenerator.Instance.TimerGrill();
            Tutorial = true;
        }
        BackBar.gameObject.SetActive(true);
        BarGrill.DOFillAmount(1, 3).SetEase(Ease.Linear).OnComplete(() =>
        {
            if (Tutorial)
            {
                TutorialGenerator.Instance.LastGrillClick();
                BackBar.gameObject.SetActive(false);
                GetComponent<Collider>().enabled = true;
                GrillCellActive = true;
                GrillSequence = DOTween.Sequence()
           .Append(Icon.DOColor(Color.red, 3).SetEase(Ease.Linear));
            }
            else
            {
                BackBar.gameObject.SetActive(false);
                GrillCellActive = true;
                GetComponent<Collider>().enabled = true;
                DestroyGrillCell(3);
            }

        });
    }
    public void DestroyGrillCell(int Timer)
    {
        GrillSequence = DOTween.Sequence()
            .Append(Icon.DOColor(Color.red, Timer).SetEase(Ease.Linear).OnComplete(() =>
            {
                Destroy(gameObject);
                GrillCell.Instance.ActiveGrillCell(true);
            }));
    }
    public void SpawnGrillObject()
    {
        if (GrillCellActive)
        {
            if (TutorialGenerator.Instance != null && PlayerPrefs.GetInt("TutorialGameIndex", 0) >= 6)
            {
                TutorialGenerator.Instance.CloseAllTutorial();
            }

                GrillSequence.Kill();
            Destroy(gameObject);
            LevelController.Instance.GetCurrentCharaster.GetComponent<Level>().Spawn(Type, Index, false, true);
            GrillCell.Instance.ActiveGrillCell(true);
            bool[] LevelGrill = LevelController.Instance.GetCurrentCharaster.GetComponent<Level>().GetGrill.ToArray();
            bool CloseContainer = true;
            if (LevelGrill.Length <= 0 || LevelGrill.FirstOrDefault(x => x != true))
            {
                for (int i = 0; i < LevelGrill.Length; i++)
                {
                    if (LevelGrill[i])
                    {
                        CloseContainer = false;
                        break;
                    }
                }
            }
            if (CloseContainer)
            {
                GrillController.Instance.CloseContainer();
            }
        }
    }
            
}


