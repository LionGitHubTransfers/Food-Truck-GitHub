using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class TutorialGenerator : Singleton<TutorialGenerator>
{

    public enum StayTutorial
    {
        MoveTarget,
        Click,
        DoubleClick,
        Finish,
        Salt,
        Grill
    }
    public StayTutorial StayTutorials;
    public int IndexTutorial;
    [SerializeField] private Button[] NeedClickButton;
    [SerializeField] private StayTutorial[] ListStay;
    [SerializeField] private GameObject FinishPos;
    [SerializeField] private GameObject DopObject;
    [SerializeField] private Vector3 ScaleFinger = Vector3.one;
    public List<GameObject> TargetObjects = new List<GameObject>();
    [SerializeField] private Image ObjectFinger;
    private int CountClick;
    private Button[] InterectebleButtons;
    Sequence NewSequence;
   
    private void Start()
    {
       
        StartCoroutine(Timer(0.4f));

        InterectebleButtons = TutorialController.Instance.GetInterectebleAllButton;
        List<Button> buttonNewArray = new List<Button>();
        for (int i = 0; i < InterectebleButtons.Length; i++)
        {
            if(InterectebleButtons[i].interactable == true)
            {
                buttonNewArray.Add(InterectebleButtons[i]);
            }
        }
        InterectebleButtons = buttonNewArray.ToArray();
        TutorialController.Instance.SetInterectebleButton = InterectebleButtons;
       
        //  ActiveAnim();
    }
    public void ActiveDopObject(bool Active)
    {
        if (DopObject != null)
        {
            DopObject.SetActive(Active);
        }
       
    }
    public void ActiveAnim()
    {
        ObjectFinger.gameObject.SetActive(true);
        NewSequence.Kill();
        ObjectFinger.transform.localScale = ScaleFinger;
        switch (ListStay[CountClick])
        {

            case StayTutorial.MoveTarget:
                ObjectFinger.rectTransform.position = TargetObjects[CountClick].GetComponent<RectTransform>().position;
                NewSequence = DOTween.Sequence()
                   .Append(ObjectFinger.transform.DOMove(TargetObjects[CountClick - 1].GetComponent<RectTransform>().position, 1f).SetEase(Ease.Linear)).SetLoops(-1, LoopType.Restart);
                break;
            case StayTutorial.Click:
                ObjectFinger.rectTransform.position = TargetObjects[CountClick].GetComponent<RectTransform>().position;

                NewSequence = DOTween.Sequence()
                    .Append(ObjectFinger.transform.DOScale(ScaleFinger / 1.3f, 0.5f)).OnUpdate(()=> {
                        ObjectFinger.rectTransform.position = TargetObjects[CountClick].GetComponent<RectTransform>().position;
                    }).SetLoops(-1, LoopType.Yoyo);

                break;

            case StayTutorial.DoubleClick:
                ObjectFinger.transform.localScale = Vector3.one;
                ObjectFinger.rectTransform.position = TargetObjects[0].GetComponent<RectTransform>().position;
                NewSequence = DOTween.Sequence()
                       .Append(ObjectFinger.transform.DOScale(ScaleFinger / 1.3f, 0.5f)).SetLoops(-1, LoopType.Yoyo);
                break;


            case StayTutorial.Grill:
                ObjectFinger.rectTransform.position = TargetObjects[CountClick].GetComponent<RectTransform>().position;
                NewSequence = DOTween.Sequence()
                   .Append(ObjectFinger.transform.DOMove(TargetObjects[CountClick].GetComponent<RectTransform>().position, 0))
                      .Append(ObjectFinger.transform.DOMove(GrillCell.Instance.GetComponent<RectTransform>().position, 1f)).SetLoops(-1, LoopType.Restart);

                break;

            case StayTutorial.Salt:
                BonusCell[] Cell = BonusCellController.Instance.GetAllBonusCells;
                NewSequence = DOTween.Sequence()
                    .Append(ObjectFinger.transform.DOMove(TargetObjects[CountClick].GetComponent<RectTransform>().position, 0))
                       .Append(ObjectFinger.transform.DOMove(Cell[2].GetComponent<RectTransform>().position, 0.5f))
                       .Append(ObjectFinger.transform.DOMove(TargetObjects[CountClick + 1].GetComponent<RectTransform>().position, 0))
                       .Append(ObjectFinger.transform.DOMove(Cell[1].GetComponent<RectTransform>().position, 0.5f)).SetLoops(-1, LoopType.Restart);
                StartCoroutine(TimerClick());
                break;
            case StayTutorial.Finish:
                ObjectFinger.rectTransform.position = TargetObjects[CountClick].GetComponent<RectTransform>().position;
                NewSequence = DOTween.Sequence()
                 .Append(ObjectFinger.transform.DOMove(FinishPos.transform.position, 1f).SetEase(Ease.Linear)).SetLoops(-1, LoopType.Restart);
                StartCoroutine(TimerClick());
                break;
            default:
                break;
        }
    }
    public void ClickButton(float timer)
    {
        StartCoroutine(Timer(timer));
    }
    public void TimerGrill()
    {
        
        NewSequence.Kill();
        ObjectFinger.gameObject.SetActive(false);
    }
    public void LastGrillClick()
    {
        ObjectFinger.gameObject.SetActive(true);
        ObjectFinger.rectTransform.position = TargetObjects[CountClick].GetComponent<RectTransform>().position;
        NewSequence = DOTween.Sequence()
            .Append(ObjectFinger.transform.DOScale(Vector3.one / 1.3f, 0.5f)).SetLoops(-1, LoopType.Yoyo);
        
    }
   
    private IEnumerator TimerClick()
    {
        yield return new WaitUntil(() => Input.GetMouseButtonDown(0));


        CloseAllTutorial();
    }
    public void CloseAllTutorial()
    {
        ObjectFinger.gameObject.SetActive(false);
        NewSequence.Kill();
        TutorialController.Instance.ActiveAllButton();
        Destroy(gameObject);
        int indexEvent = PlayerPrefs.GetInt("IndexTutorialsEvent", 1);
        EventManager.Instance.SendEventTutorial(indexEvent);
        PlayerPrefs.SetInt("IndexTutorialsEvent", indexEvent + 1);

    }
    private IEnumerator Timer(float Timer)
    {
        yield return new WaitForSeconds(Timer);
        for (int i = 0; i < InterectebleButtons.Length; i++)
        {
            if (InterectebleButtons[i] != null)
            {
                InterectebleButtons[i].interactable = false;
            }
            
        }
        if (NeedClickButton[CountClick] != null)
        {
            NeedClickButton[CountClick].interactable = true;
            //  NeedClickButton[CountClick].onClick.AddListener(NextClick);
        }
        ActiveAnim();

    }
    public void NextClick(GameObject Object, float Timer,float _scaleFinger = 1)
    {
        ObjectFinger.transform.localScale = new Vector3(_scaleFinger, _scaleFinger, _scaleFinger);
        ScaleFinger = new Vector3(_scaleFinger, _scaleFinger, _scaleFinger);
        if (Object != null)
        {
            TargetObjects.Add(Object);
        }
      
        if (NeedClickButton[CountClick] != null)
        {
            NeedClickButton[CountClick].interactable = false;
            //  NeedClickButton[CountClick].onClick.RemoveAllListeners();
        }
        CountClick++;
        if (NeedClickButton[CountClick] != null)
        {
            //     NeedClickButton[CountClick].onClick.AddListener(NextClick);
            NeedClickButton[CountClick].interactable = true;
        }
        ClickButton(Timer);

    }
    public void ActiveScaleFinger(float _scale)
    {
        ObjectFinger.transform.localScale = new Vector3(_scale, _scale, _scale);
        ScaleFinger = new Vector3(_scale, _scale, _scale);
    }
    

}
