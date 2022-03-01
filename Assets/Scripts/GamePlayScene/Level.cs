using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class Level : MonoBehaviour
{
    private ScriptebleObjectCellInfo Data;
    [SerializeField] private List<TypeSell> TypeCurrent = new List<TypeSell>();
    [SerializeField] private List<int> Index = new List<int>();
    [SerializeField] private List<bool> Selt = new List<bool>();
    [SerializeField] private List<int> IndexSelt = new List<int>();
    [SerializeField] private List<bool> Grill = new List<bool>();
    [SerializeField] private GameObject[] HairSkin, ClothSkin;
    [SerializeField] private List<Image> IconBubble = new List<Image>();
    [SerializeField] private Animator Anim;
    [SerializeField] private GameObject GridIcon;
    [SerializeField] private SkinnedMeshRenderer SkinEmoji;
    [SerializeField] private Sprite[] GrillOrIce;

    private bool EyeActive = true;
    private int MaxCountType;
    private bool BonusCharaster = false;
    public List<TypeSell> GetType => TypeCurrent.ToList();
    public List<int> GetIndex => Index.ToList();
    public List<bool> GetGrill => Grill;
    Sequence SmileSequence;
    InfoCharaster Info;
    public bool GetInfoForType(TypeSell _type, int _index)
    {
        bool FindObject = false;
        for (int i = 0; i < TypeCurrent.Count; i++)
        {
            if(TypeCurrent[i] == _type && Index[i] == _index && (Selt.Count <=0 || Selt[i] == false) && (Grill.Count<=0 || Grill[i] ==false))
            {
                FindObject = true;
                return true;
                break;
            }
        }
        return false;
    }
    public bool GetInfoForIndex(int _index)
    {
        return Index.Contains(_index);
    }


    public void ActiveGrid()
    {


        GridIcon.transform.localScale = Vector3.zero;
        GridIcon.transform.DOScale(1.1f, 0.3f).OnComplete(() =>
        {
            GridIcon.transform.DOScale(1f, 0.3f);
        });
        GridIcon.gameObject.SetActive(true);

        if (BonusCharaster)
        {
            BonusCellController.Instance.OpenContainer();
            BonusCellController.Instance.SetInfoCell(Index[0]);
        }

        for (int i = 0; i < Selt.Count; i++)
        {
            if (Selt[i])
            {
                BonusCellController.Instance.OpenContainer();
                BonusCellController.Instance.SetInfoSeltCell(TypeCurrent[i], Index[i], IndexSelt[i]);
                break;
            }
        }
        for (int i = 0; i < Grill.Count; i++)
        {
            if (Grill[i])
            {
                GrillController.Instance.OpenContainer();
                if (PlayerPrefs.GetInt("TutorialGameIndex", 0) == 6)
                {
                    TutorialController.Instance.ActiveTutorial(6);
                }
                break;
            }
        }
        CheckTutorial();
    }
    private void CheckTutorial()
    {
        if (PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0) == 0)
        {
            if (LevelController.Instance.GetCountPlayer == 2)
            {
                if (PlayerPrefs.GetInt("TutorialGameIndex", 0) == 0)
                {
                    TutorialController.Instance.ActiveTutorial(0);
                }

            }
            if (LevelController.Instance.GetCountPlayer == 1)
            {
                if (PlayerPrefs.GetInt("TutorialGameIndex", 0) == 1)
                {
                    TutorialController.Instance.ActiveTutorial(1);
                }

            }
        }
        if (PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0) == 1)
        {
            if (LevelController.Instance.GetCountPlayer == 2)
            {
                TutorialController.Instance.ActiveTutorial(2);
            }
        }
        if (PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0) == 4)
        {
            if (LevelController.Instance.GetCountPlayer == 3)
            {
                TutorialController.Instance.ActiveTutorial(4);
            }
        }
        if (PlayerPrefs.GetInt("CurrentLevelMax_" + CurrentLocation.Instance.GetIndex, 0) == 9)
        {
            if (LevelController.Instance.GetCountPlayer == 3)
            {
                TutorialController.Instance.ActiveTutorial(5);
            }
        }
    }
    private void Start()
    {
        HairSkin[Random.Range(0, HairSkin.Length)].SetActive(true);
        ClothSkin[Random.Range(0, ClothSkin.Length)].SetActive(true);
        StartCoroutine(TimerEye());
    }
    public void SetInfo(InfoCharaster _CharasterInfo)
    {
        Data = DataController.Instance.GetData;
        Info = _CharasterInfo;
        if (_CharasterInfo.Index.Length <= 0)
        {
            return;
        }
        for (int i = 0; i < _CharasterInfo.GetIndex.Length; i++)
        {
            TypeCurrent = _CharasterInfo.GetTypePlayer.ToList();
            Index = _CharasterInfo.GetIndex.ToList();
            if (TypeCurrent[0] == TypeSell.Bonus)
            {
                BonusCharaster = true;
            }
            if (_CharasterInfo.GetGrill != null && _CharasterInfo.GetGrill.Length > 0 && !BonusCharaster)
            {

                Grill.Add(_CharasterInfo.GetGrill[i]);
                Debug.Log("add grill");
                if (Grill[i] == true)
                {
                    IconBubble[i].transform.GetChild(2).gameObject.SetActive(true);
                    IconBubble[i].transform.GetChild(2).GetComponent<Image>().sprite = GrillOrIce[CurrentLocation.Instance.GetIndex];
                }

            }

            if (_CharasterInfo.GetSalt != null && _CharasterInfo.GetSalt.Length > 0 && !BonusCharaster)
            {
                Selt.Add(_CharasterInfo.GetSalt[i].SailActive);
                if (Selt[i])
                {
                    IconBubble[i].transform.GetChild(0).gameObject.SetActive(true);
                    IconBubble[i].transform.GetChild(0).GetComponent<Image>().sprite = DataController.Instance.GetData.GetCellSprite(TypeSell.Salt, _CharasterInfo.GetSalt[i].IndexSelt);
                }
                IndexSelt.Add(_CharasterInfo.GetSalt[i].IndexSelt);
            }


            IconBubble[i].gameObject.SetActive(true);
            IconBubble[i].sprite = Data.GetCellSprite(TypeCurrent[i], Index[i]);

        }
        MaxCountType = TypeCurrent.Count;

    }
    public void MovePoint(GameObject _point,int _posIndex)
    {
        Anim.SetInteger("Stay", 1);
        //   transform.DOLocalRotate(_point - transform.position, 0.3f);

        transform.DOMove(_point.transform.position, 1).OnComplete(() =>
        {
            transform.DOLocalRotate(_point.transform.localEulerAngles, 0.3f).OnComplete(()=> {

                if (_posIndex == 0)
                {
                    ActiveGrid();
                  
                }
                Anim.SetInteger("Stay", 0);
                
            });
         
        });
    }
    public void ActiveFinishAnim()
    {
        GridIcon.gameObject.SetActive(false);
        Anim.SetInteger("Random", Random.Range(1, 3));
        SetTips();

    }

    public void MoveFinishAnim()
    {
       
        SmileSequence.Kill();
        DOTween.Kill(SmileSequence);
        EyeActive = false;
        Sequence NewSequnce = DOTween.Sequence()
            .AppendInterval(0.3f)
            .Append(transform.DOMoveZ(1, 0.4f))
           .Append(transform.DOLocalRotate(new Vector3(0, 90, 0), 0.3f))
          
           .Join(transform.DOMoveX(transform.position.x - 10, 1)).OnComplete(() =>
           {
               LevelController.Instance.TimerNextPlayer();
              
           });
    }
    public void NoAnim()
    {
        Anim.SetTrigger("No");
    }
    private void SetTips()
    {
        MoneyBonusScripts.Instance.CheckBonusMoney();
    }
    public void Spawn(TypeSell _type, int _index, bool salt = false, bool GrillActive = false)
    {
        Table.Instance.SpawnObject(Data.GetCellModel(_type, _index), MaxCountType, _type, _index, salt, GrillActive);


        //   TypeCurrent.Remove(_type);
        ////   Selt.RemoveAt(_index);
        //   Index.Remove(_index);


        for (int i = 0; i < Index.Count; i++)
        {
            if (Index[i] == _index && TypeCurrent[i] == _type && (Selt.Count <= 0 || Selt[i] == salt)) 
            {
                Index.RemoveAt(i);
                if(Selt.Count > 0)
                {
                    Selt.RemoveAt(i);
                }
                IconBubble[i].transform.GetChild(1).gameObject.SetActive(true);

                IconBubble.RemoveAt(i);
                TypeCurrent.RemoveAt(i);
                if(Grill.Count > 0)
                {
                    Grill.RemoveAt(i);
                }
             
                break;
            }
        }


        if (TypeCurrent.Count <= 0)
        {
            Table.Instance.ActiveChanAnim(true);
        }
        else
        {
            Table.Instance.ActiveChanAnim(false);
        }

    }
    public IEnumerator TimerEye()
    {
        while (EyeActive)
        {
            yield return new WaitForSeconds(Random.Range(0.5f, 3));
            Smile();
        }
    }
    
    public void Smile()
    {
        float LeftEye = SkinEmoji.GetBlendShapeWeight(0);
        //   SmileSequence.Kill();
        SmileSequence = DOTween.Sequence()
            .Append(DOTween.To(() => LeftEye, x => LeftEye = x, 100, 0.1f).OnUpdate(() =>
            {
                SkinEmoji.SetBlendShapeWeight(0, LeftEye);
            }))
            .Append(DOTween.To(() => LeftEye, x => LeftEye = x, 0, 0.1f).OnUpdate(() =>
            {
                SkinEmoji.SetBlendShapeWeight(0, LeftEye);
            })
            );
    }
}
