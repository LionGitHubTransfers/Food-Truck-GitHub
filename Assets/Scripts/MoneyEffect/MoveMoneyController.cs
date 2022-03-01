using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MoveMoneyController : Singleton<MoveMoneyController>
{
    [SerializeField] private GameObject PrefabsMoney,PrefabsDiamond;
    [SerializeField] private Transform StartPos, EndPos;
    [SerializeField] private float RandomPos = 0.05f;
    [SerializeField] private Sprite[] MoneyEnergyDiamond;
    private void Start()
    {
       
    }
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            SpawnMoney(transform);
        }
    }
    public void SpawnMoney(Transform _StartPos)
    {
        StartPos = _StartPos;
        EndPos = MoneyController.Instance.GetPosTargetMoney;
        for (int i = 0; i < 10; i++)
        {
            var MoneyObject = Instantiate(PrefabsMoney, transform);
            MoneyObject.transform.position = StartPos.position;
            MoneyObject.GetComponent<MoneyMoveScrpts>().MoveTarget(EndPos, RandomPos);
            MoneyObject.GetComponent<Image>().sprite = MoneyEnergyDiamond[0];
        }
    }
    public void SpawnDiamond(Transform _StartPos)
    {
        StartPos = _StartPos;
        
        for (int i = 0; i < 10; i++)
        {
            Transform EndPosDiamond = MoneyController.Instance.GetPosTargetDiamond;
            var MoneyObject = Instantiate(PrefabsDiamond, transform);
            MoneyObject.transform.position = StartPos.position;
            MoneyObject.GetComponent<MoneyMoveScrpts>().MoveTarget(EndPosDiamond, RandomPos);
            MoneyObject.GetComponent<Image>().sprite = MoneyEnergyDiamond[2];
        }
    }

    public void SpawnEnergy(Transform _StartPos)
    {
        StartPos = _StartPos;
        EndPos = EnegryController.Instance.GetPosTarget;
        for (int i = 0; i < 10; i++)
        {
            var MoneyObject = Instantiate(PrefabsMoney, transform);
            MoneyObject.transform.position = StartPos.position;
            MoneyObject.GetComponent<MoneyMoveScrpts>().MoveTarget(EndPos, RandomPos);
            MoneyObject.GetComponent<Image>().sprite = MoneyEnergyDiamond[1];
        }
    }
}
