using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using static JsonController;

public class MiniGameController : Singleton<MiniGameController>
{
    [SerializeField] private CanvasGroup CurrentContainer;
    [SerializeField] private GameObject CellAlchimy;
    [SerializeField] private GameObject GridMiniGameBack, GridMiniGame;
    [SerializeField] private GameObject CenterPos;
    [SerializeField] private GameObject[] RandomPos;
    [SerializeField] private ParticleSystem Effect;
    [SerializeField] private GameObject LastPos;
    [SerializeField] private Image DownImageCell;


    private List<GameObject> AllObject = new List<GameObject>();
    List<CellMinigame> StartObject = new List<CellMinigame>();
    List<CellItemWorkSpace> AllDataCell = new List<CellItemWorkSpace>();
    private bool WinGame = true;
    private int CountWin;

    private void Update()
    {
        if (WinGame)
            return;

        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            if (Physics.Raycast(ray, out hit))
            {
                Debug.Log(hit.collider.name);
                if (hit.collider.GetComponent<CellMinigame>())
                {
                    CellMinigame Object =null;
                    if (StartObject[CountWin].GetType == hit.collider.GetComponent<CellMinigame>().GetType && StartObject[CountWin].GetIndex == hit.collider.GetComponent<CellMinigame>().GetIndex)
                    {
                        Object = StartObject[CountWin];
                    }
                   

                    if (Object)
                    {
                        hit.collider.transform.DOMove(Object.transform.position, 0.5f).OnComplete(() =>
                        {
                            StartObject[CountWin].OpenOrNoOutline(false);
                            Object.GetComponent<Image>().DOFade(1f, 0);
                            CountWin++;
                            CheckGame();
                            if(CountWin < StartObject.Count)
                            {
                                StartObject[CountWin].OpenOrNoOutline(true);
                                StartObject[CountWin].gameObject.SetActive(true);
                            }
                            AllObject.Remove(hit.collider.gameObject);
                            MoveCenterPos();
                            StartCoroutine(MoveRandomPos(0.5f));
                        });
                        hit.collider.transform.DOScale(Vector3.one, 0.5f).OnComplete(() =>
                        {
                            hit.collider.GetComponent<CanvasGroup>().DOFade(0, 0);

                        });
                    }
                    else
                    {
                        hit.collider.GetComponent<Image>().DOColor(Color.red, 0.25f).OnComplete(() =>
                        {
                            hit.collider.GetComponent<Image>().DOColor(Color.white, 0.25f);

                        });
                        hit.collider.transform.DOShakeRotation(0.5f, new Vector3(0, 0, 15), 15, 90);
                    }
                }


            }
        }
    }
    private void CheckGame()
    {
        if (StartObject.Count == CountWin)
        {
            Debug.Log("Win");
            WinGame = true;
            GridMiniGameBack.GetComponent<GridLayoutGroup>().enabled = false;
          //  GridMiniGame.SetActive(false);
            StartCoroutine(FinishAnimation());
        }
    }
    private IEnumerator FinishAnimation()
    {
        AlchimyController.Instance.GetCap.transform.DOLocalMoveY(0.6f, 0.5f);
        yield return new WaitForSeconds(0.5f);
        for (int i = 0; i < StartObject.Count; i++)
        {
            StartObject[i].MoveLastPos(LastPos.transform.position);
        }
        yield return new WaitForSeconds(0.5f);

        AlchimyController.Instance.GetCap.transform.DOLocalMoveY(0.15f, 0.5f).OnComplete(() =>
        {

            PlayerPrefs.SetInt("ActiveDish" + CurrentLocation.Instance.GetIndex, 1);
            AlchimyController.Instance.Start();
            CurrentContainer.DOFade(0, 0);
            CurrentContainer.blocksRaycasts = false;
        });

    }
    public void ActiveMiniGame(ScriptebleObjectAlchimyLevel InfoLevel)
    {
        
        GetComponent<CanvasGroup>().alpha = 1;
        GetComponent<CanvasGroup>().blocksRaycasts = true;
        DownImageCell.color = new Color32(255, 255, 255,0);

        DownImageCell.DOFade(1, 0.3f);
        for (int i = 0; i < AllObject.Count; i++)
        {
            Destroy(AllObject[i].gameObject);
        }
        for (int i = 0; i < StartObject.Count; i++)
        {
            Destroy(StartObject[i].gameObject);
        }
        GridMiniGame.SetActive(true);
        GridMiniGameBack.SetActive(true);
        GridMiniGame.GetComponent<GridLayoutGroup>().enabled = true;
        GridMiniGameBack.GetComponent<GridLayoutGroup>().enabled = true;

        AllObject.Clear();
        StartObject.Clear();
        AllDataCell.Clear();
        CountWin = 0;
        for (int i = 0; i < InfoLevel.GetLevel.Length; i++)
        {
            var cellAlchimyBack = Instantiate(CellAlchimy, GridMiniGameBack.transform);
            StartObject.Add(cellAlchimyBack.GetComponent<CellMinigame>());
            cellAlchimyBack.GetComponent<CellMinigame>().SetInfo(InfoLevel.GetLevel[i]);
            cellAlchimyBack.GetComponent<Image>().DOFade(0.3f, 0);
            cellAlchimyBack.GetComponent<Collider>().enabled = false;
            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


            var cellAlchimy = Instantiate(CellAlchimy, GridMiniGame.transform);
            AllObject.Add(cellAlchimy);
            cellAlchimy.GetComponent<CellMinigame>().SetInfo(InfoLevel.GetLevel[i]);


        }


        StartCoroutine(Timer());
    }

    private void MoveCenterPos()
    {
        for (int i = 0; i < AllObject.Count; i++)
        {
            AllObject[i].transform.DOMove(CenterPos.transform.position, 0.5f);
        }
    }
    private void SpawnNewCell()
    {
        for (int i = 0; i < JsonController.Instance.InfoWorkSpace.Count; i++)
        {
            AllDataCell.Add(JsonController.Instance.InfoWorkSpace[i]);
        }


        int CountSpawnDopCell = RandomPos.Length - 4;
        for (int i = 0; i < AllObject.Count; i++)
        {
            AllDataCell.Remove(AllDataCell.FirstOrDefault(x => x.Types == AllObject[i].GetComponent<CellMinigame>().GetType && x.Index == AllObject[i].GetComponent<CellMinigame>().GetIndex));
        }
        for (int i = 0; i < CountSpawnDopCell; i++)
        {
            int RandomIndex = Random.Range(0, AllDataCell.Count);

            var cellAlchimy = Instantiate(CellAlchimy, GridMiniGame.transform);
            cellAlchimy.transform.position = AllObject[0].transform.position;

            cellAlchimy.GetComponent<CellMinigame>().SetInfoDopCell(AllDataCell[RandomIndex].Index, AllDataCell[RandomIndex].Types);
            AllObject.Add(cellAlchimy);
            AllDataCell.RemoveAt(RandomIndex);
        }
        AllObject = AllObject.OrderBy(a => System.Guid.NewGuid()).ToList();
      StartCoroutine(MoveRandomPos(0));
    }
    private IEnumerator MoveRandomPos(float Timer)
    {
        yield return new WaitForSeconds(Timer);
        List<GameObject> NewRandompos = new List<GameObject>();
        for (int i = 0; i < RandomPos.Length; i++)
        {
            NewRandompos.Add(RandomPos[i]);
        }

        for (int i = 0; i < AllObject.Count; i++)
        {
            int randomPos = Random.Range(0, NewRandompos.Count);

            AllObject[i].transform.localScale = new Vector3(0.8f, 0.8f, 0.8f);
            AllObject[i].transform.DOMove(NewRandompos[randomPos].transform.position, 0.5f);
            NewRandompos.Remove(NewRandompos[randomPos]);
        }
    }
    private IEnumerator Timer()
    {
        
        yield return new WaitForSeconds(0.01f);
        GridMiniGame.GetComponent<GridLayoutGroup>().enabled = false;
        yield return new WaitForSeconds(0.5f);
        MoveCenterPos();
        GridMiniGameBack.GetComponent<GridLayoutGroup>().enabled = false;
        yield return new WaitForSeconds(0.5f);

        for (int i = 0; i < StartObject.Count; i++)
        {
            StartObject[i].gameObject.SetActive(false);
        }
        StartObject[CountWin].OpenOrNoOutline(true);
        StartObject[CountWin].gameObject.SetActive(true);
        Effect.Play();
        SpawnNewCell();
        WinGame = false;
    }
}
