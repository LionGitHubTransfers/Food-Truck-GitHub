using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Podnos : MonoBehaviour
{
    [SerializeField] private GameObject[] Centers;

    public GameObject[] GetCenters => Centers;

    //public GameObject Chan;


    //public void ActiveAnimChan()
    //{
    //    //Chan.GetComponent<Animator>().SetTrigger("Active");
    //}
    public void FinishAnim()
    {
        //Chan.GetComponent<Animator>().SetTrigger("Active");
        StartCoroutine(TimerNextPlayer());
    }
    //public void OneRotateAnim()
    //{
    //    Chan.GetComponent<Animator>().SetTrigger("OneRotate");
    //}
    private IEnumerator TimerNextPlayer()
    {
        yield return new WaitForSeconds(0);
        //Chan.SetActive(false);
        LevelController.Instance.NextPlayer();
       // Table.Instance.SpawnAllObject();
    }
}
