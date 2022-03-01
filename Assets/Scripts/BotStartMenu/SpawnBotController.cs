using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Net.NetworkInformation;
using UnityEngine;
using UnityEngine.AI;

public class SpawnBotController : Singleton<SpawnBotController>
{
    [SerializeField] private GameObject[] Bots;
    [SerializeField] private Transform[] PointTable;
    [SerializeField] private Transform[] PointQueue;
    [SerializeField] private Transform Finish;
    private List<GameObject> AllBots = new List<GameObject>();
    private List<Transform> CurrentPointsTable = new List<Transform>();
    private List<Bot> CurrentBotInQueue = new List<Bot>();


    private void Start()
    {
        UpdatePoint();
        SpawnBot();
    }
    private void SpawnBot()
    {
        for (int i = 0; i < 4; i++)
        {
            var _bot = Instantiate(Bots[Random.Range(0, Bots.Length)], transform);
            _bot.transform.position = PointQueue[i].transform.position;
            _bot.transform.rotation = PointQueue[i].transform.rotation;
            _bot.GetComponent<NavMeshAgent>().enabled = true;
            CurrentBotInQueue.Add(_bot.GetComponent<Bot>());
        }
        StartCoroutine(TimerQueue());
        StartCoroutine(SpawnBotTimer());
    }
    private IEnumerator TimerQueue()
    {
        while (true)
        {
            yield return new WaitForSeconds(Random.Range(3,10));
            NextQueue();
            
        }


    }
    private IEnumerator SpawnBotTimer()
    {
        while (true)
        {
            yield return new WaitForSeconds(Random.Range(1, 2));
            if (CurrentBotInQueue.Count < PointQueue.Length)
            {
                SpawnBotStart();
            }
        }
    }
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Tab))
        {
            SpawnBotStart();
        }
    }
    private void SpawnBotStart()
    {
        var _bot = Instantiate(Bots[Random.Range(0, Bots.Length)], transform);
        _bot.transform.position = Finish.position;
        _bot.GetComponent<NavMeshAgent>().enabled = true;
        CurrentBotInQueue.Add(_bot.GetComponent<Bot>());
        _bot.GetComponent<Bot>().MoveQuieue(PointQueue[CurrentBotInQueue.Count-1]);
    }
    private void NextQueue()
    {
        if (CurrentBotInQueue.Count > 0 && CurrentBotInQueue[0].GetCurretnStay == StayBot.Idle)
        {
            CurrentBotInQueue[0].MoveTable(Finish);
            CurrentBotInQueue.RemoveAt(0);

            for (int i = 0; i < CurrentBotInQueue.Count; i++)
            {
                CurrentBotInQueue[i].MoveQuieue(PointQueue[i]);
            }
        }

    }
    public Transform GetPointRandom()
    {
        if (CurrentPointsTable.Count <= 0)
        {
            UpdatePoint();
        }

        int randomPoint = Random.Range(0, CurrentPointsTable.Count);
        Transform Point = CurrentPointsTable[randomPoint];
        CurrentPointsTable.RemoveAt(randomPoint);
        return Point;
    }

    private void UpdatePoint()
    {
        CurrentPointsTable = PointTable.ToList();
    }
}
