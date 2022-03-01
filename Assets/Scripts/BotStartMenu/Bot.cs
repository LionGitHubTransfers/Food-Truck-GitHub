
using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Bot : MonoBehaviour
{
    
    [SerializeField] private SkinBot[] Skins;
    [SerializeField] private EatActive[] Eats;
    [SerializeField] private Animator Anim;
    private NavMeshAgent Agent;
    private Transform Point;
    private StayBot Stay;
    private Transform FinishPos;

    public StayBot GetCurretnStay => Stay;
    private void Awake()
    {
        Agent = GetComponent<NavMeshAgent>();
        Stay = StayBot.Idle;
    }
    private void Start()
    {
        int randomSkin = Random.Range(0, Skins.Length);

        for (int i = 0; i < Skins[randomSkin].Skin.Length; i++)
        {

            Skins[Random.Range(0, Skins.Length)].Skin[i].SetActive(true);
        }

        Agent.updateRotation = false;
        //  MovePoint();
        //  StartCoroutine(CheckDistans());
        ActiveEat();


    }
    private void FixedUpdate()
    {
        if (Agent.velocity.sqrMagnitude > Mathf.Epsilon)
        {
            transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.LookRotation(Agent.velocity.normalized), Time.deltaTime * 5);
        }
    }

  
    private void MovePoint()
    {
        Point = SpawnBotController.Instance.GetPointRandom();
        MoveDestination(Point,2);
       
    }
    public void MoveQuieue(Transform _nextQueie)
    {
        //  Agent = GetComponent<NavMeshAgent>();
        Agent.enabled = true;
        Point = _nextQueie;
        Agent.SetDestination(Point.position);
        Anim.SetInteger("Stay", 1);
        Stay = StayBot.Move;
        StartCoroutine(CheckDistans());

    }
    private void MoveDestination(Transform _pointMove,int IndexAnim)
    {
        Agent.SetDestination(_pointMove.position);
        Anim.SetInteger("Stay", IndexAnim);
    }
    public void MoveTable(Transform _finish)
    {

        FinishPos = _finish;
        MovePoint();
        Stay = StayBot.Move;
        StartCoroutine(CheckDistans());
    }
    private IEnumerator CheckDistans()
    {
        while (Stay == StayBot.Move)
        {
            yield return new WaitForSeconds(0.4f);
            if (Vector3.Distance(transform.position, Point.position) < 0.05f)
            {
                Anim.SetInteger("Stay",0);
                Agent.enabled = false;
                transform.DORotateQuaternion(Point.rotation, 0.3f);
                yield return new WaitForSeconds(0.2f);
                Agent.enabled = true;
                Stay = StayBot.Idle;
                if (FinishPos)
                {
               //     Destroy(gameObject);
                }
                if (FinishPos != null)
                {
                    Anim.SetInteger("Stay", 3);
                    Agent.enabled = false;
                    
                    yield return new WaitForSeconds(Random.Range(5,10));
                    Agent.enabled = true;
                    MoveDestination(FinishPos,1);
                    Anim.SetInteger("Stay", 1);
                    Destroy(gameObject, 15);
                }
               
            }
           
        }
      
    }
    private void ActiveEat()
    {
        int RandomEat = Random.Range(0, Eats.Length);

        for (int i = 0; i < 2; i++)
        {
            Eats[RandomEat].Eats[i].SetActive(true);
        }
    }
    
}
public enum StayBot
{
    Move,
    Idle
}
[System.Serializable]
public class SkinBot
{
    public GameObject[] Skin;
}
[System.Serializable]
public class EatActive
{
    public GameObject[] Eats;
}
