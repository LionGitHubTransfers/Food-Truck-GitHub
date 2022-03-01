using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArmScript : MonoBehaviour
{
    [SerializeField] private GameObject Arm;

    public void GrabObject()
    {
        Table.Instance.GetCurrentObject.transform.SetParent(Arm.transform);
        Table.Instance.Cleaner();
    }
    public void MoveFinish()
    {
        GetComponentInParent<Level>().MoveFinishAnim();
    }
}
