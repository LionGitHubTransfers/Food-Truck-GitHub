using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class RatingController : Singleton<RatingController>
{
    [SerializeField] private ContainerRating Prefabs;
    [SerializeField] private GameObject[] ContainerSpawn;
    [SerializeField] private int[] CountPlayerInRating;
    [SerializeField] private RectTransform Content;
    [SerializeField] private Image BarStars;
    [SerializeField] private GameObject RatingObject;
    [SerializeField] private ParticleSystem EffectRating;
    private List<string> NameBot = new List<string>();
    private List<ContainerRating> AllContainer = new List<ContainerRating>();
    private ContainerRating PlayerCell;
    private RectTransform PlayerInContainer;
    private Vector3 PosPlayerInContainer;
    private float CurrentFillAmount;
    private Vector3 PosPrevious;
    private int IndexPrevious = 0;
    private bool SavePos = false;
    private bool UpdateInfo = false;

    public float GetFillAmouseStars => BarStars.fillAmount;

    Sequence BillbordAnim;

    public void CloseContainer()
    {
        GetComponent<CanvasGroup>().blocksRaycasts = false;
        GetComponent<CanvasGroup>().DOFade(0, 0.5f);
    }

    public void MoveInPlayerPos()
    {
        Content.anchoredPosition = new Vector2(Content.anchoredPosition.x, 0);
        PosPlayerInContainer = PlayerCell.GetComponent<RectTransform>().anchoredPosition;

        if (CurrentFillAmount < 0.8f)
        {

          
            if (SavePos && UpdateInfo)
            {
                int LastIndex = PlayerCell.GetIndex;
                PlayerCell.SetIndex(IndexPrevious);
              //  PlayerInContainer.GetChild(0).GetComponentInChildren<ContentSizeFitter>().enabled = false;
                PlayerInContainer.GetChild(1).GetComponentInChildren<GridLayoutGroup>().enabled = false;

                PlayerCell.transform.SetParent(Content.transform);
                PlayerCell.transform.localScale = new Vector3(1.1f, 1.1f, 1.1f);
                PlayerCell.GetComponent<RectTransform>().anchoredPosition = new Vector2(PlayerCell.GetComponent<RectTransform>().anchoredPosition.x, PosPrevious.y);
                Sequence NewSequnce = DOTween.Sequence()
                      .Append(Content.DOAnchorPosY(Mathf.Abs(PosPrevious.y + 500), 0))
              .AppendInterval(0.4f)
              .Append(Content.DOAnchorPosY(Mathf.Abs(PlayerInContainer.anchoredPosition.y + PosPlayerInContainer.y + 500f), 1))
              .Join(PlayerCell.GetComponent<RectTransform>().DOAnchorPosY(PlayerInContainer.anchoredPosition.y + PosPlayerInContainer.y, 1)).OnComplete(()=> {

                 // PlayerCell.SetIndex(LastIndex);
                 
                  PlayerCell.transform.localScale = Vector3.one;
                  SpawnContainers(StartMenuButtonController.Instance.GetCurrentFillAmount);
                  SavePos = true;
                  UpdateInfo = false;
                  IndexPrevious = PlayerCell.GetIndex;
              });
                
                SavePos = false;
            }
            else
            {
              
                    Sequence NewSequnce = DOTween.Sequence()
               .Append(Content.DOAnchorPosY(Mathf.Abs(PlayerInContainer.anchoredPosition.y + PosPlayerInContainer.y + 500f), 0));
                
                
               
            }
            if (!SavePos)
            {
                SavePos = true;
                PosPrevious.y = PlayerInContainer.anchoredPosition.y + PosPlayerInContainer.y;
                IndexPrevious = PlayerCell.GetIndex;
            }
            UpdateInfo = false;


        }
        


    }

    public int CheckStars()
    {
        float FillAmouseBarStars = StartMenuButtonController.Instance.GetCurrentFillAmount;

        if (FillAmouseBarStars >= 0 && FillAmouseBarStars <= 0.2f)
        {
            return 0;
        }
        else if (FillAmouseBarStars > 0.2f && FillAmouseBarStars <= 0.4f)
        {
            return 1;
        }
        else if (FillAmouseBarStars > 0.4f && FillAmouseBarStars <= 0.6f)
        {
            return 2;
        }
        else if (FillAmouseBarStars > 0.6f && FillAmouseBarStars <= 0.8f)
        {
            return 3;
        }
        else if (FillAmouseBarStars > 0.8f && FillAmouseBarStars < 1f)
        {
            return 4;
        }
        else if (FillAmouseBarStars >= 1f)
        {
            return 5;
        }
        else return 0;
        
    }
    public void ActiveAnimObject()
    {

        if (CurrentLocation.Instance.GetIndex == 0 && PlayerPrefs.GetFloat("ProgressBarLocation" + 0, 0) >= 0.5f && PlayerPrefs.GetInt("StartRatingAnim", 0) ==0)
        {
            //BillbordAnim?.Kill();
            //BillbordAnim = DOTween.Sequence()
            //  .Append(RatingObject.transform.DOScale(0.27f, 0.15f))
            //  .Append(RatingObject.transform.DOScale(0.25f, 0.15f))
            //  .AppendInterval(2).SetLoops(-1, LoopType.Restart);
                EffectRating.Play();
            
          
        }
        else
        {
            //BillbordAnim?.Kill();
            //RatingObject.transform.DOScale(0.25f, 0.5f);
          
            EffectRating.Stop();

        }
    }
    public void CloseAnimRatingObject()
    {
        if (CurrentLocation.Instance.GetIndex == 0 && PlayerPrefs.GetFloat("ProgressBarLocation" + 0, 0) >= 0.5f && PlayerPrefs.GetInt("StartRatingAnim", 0) == 0)
        {
            PlayerPrefs.SetInt("StartRatingAnim", PlayerPrefs.GetInt("StartRatingAnim", 0) + 1);
            ActiveAnimObject();
        }
    }
    public void SpawnContainers(float _CurrentFillAmountPlayer)
    {
        UpdateInfo = true;
        for (int i = 0; i < ContainerSpawn.Length; i++)
        {
            ContainerSpawn[i].GetComponent<GridLayoutGroup>().enabled = true;
        }

        CurrentFillAmount = _CurrentFillAmountPlayer;

        BarStars.fillAmount = CheckStars() * 0.2f;

        if (AllContainer != null)
        {
            for (int i = 0; i < AllContainer.Count; i++)
            {
                Destroy(AllContainer[i].gameObject);
            }
            AllContainer.Clear();
        }

        int AllCountPlayer = 0;
        int IndexContainer = 0;
        bool PlayerSpawn = false;

        for (int i = 0; i < CountPlayerInRating.Length; i++)
        {
            AllCountPlayer += CountPlayerInRating[i];
        }
        int indexCountPlayer = 0;
        float CurrentFillAmountBot = (1.2f - 0.2f * IndexContainer);
        for (int i = 0; i < AllCountPlayer; i++)
        {
            if (CountPlayerInRating[IndexContainer] <= indexCountPlayer)
            {
                indexCountPlayer = 0;
                IndexContainer++;
                CurrentFillAmountBot = (1.2f - 0.2f * IndexContainer);
            }

            float StepFillAmount = 0.2f / CountPlayerInRating[IndexContainer];
            CurrentFillAmountBot -= StepFillAmount;


            if (!PlayerSpawn && CurrentFillAmountBot <= _CurrentFillAmountPlayer + 0.01f)
            {
                PlayerCell = Instantiate(Prefabs, ContainerSpawn[IndexContainer].transform).GetComponent<ContainerRating>();

                PlayerInContainer = ContainerSpawn[IndexContainer].transform.parent.gameObject.GetComponent<RectTransform>();

       
                PlayerCell.SetFillAmountBar(_CurrentFillAmountPlayer);
                PlayerCell.SetImagePlayer();
                AllContainer.Add(PlayerCell);
                PlayerSpawn = true;
            }
            else
            {
                var container = Instantiate(Prefabs, ContainerSpawn[IndexContainer].transform);
                container.SetFillAmountBar(CurrentFillAmountBot);
                AllContainer.Add(container);
            }
            indexCountPlayer++;

        }

        AllContainer = AllContainer.OrderBy(a => a.GetCountBar).ToList();

        if (NameBot.Count <= 0)
        {
            for (int i = 0; i < AllContainer.Count; i++)
            {
                NameBot.Add(StaticInfo.name[Random.Range(0, StaticInfo.name.Length)]);
            }

        }
        for (int i = 0; i < AllContainer.Count; i++)
        {
            AllContainer[i].SetName(NameBot[i]);
        }

        for (int i = 0; i < AllContainer.Count; i++)
        {
            AllContainer[i].SetIndex(AllContainer.Count - i);
        }
   
        PlayerCell.SetImagePlayer();
    }
}
