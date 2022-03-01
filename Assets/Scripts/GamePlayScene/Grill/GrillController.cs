using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GrillController : Singleton<GrillController>
{
    [SerializeField] private Sprite[] SpritesGrill;
    [SerializeField] private Image IconGrill;
    private float StartPosY;
   
    private void Start()
    {
        StartPosY = transform.position.y;
        transform.position = new Vector3(transform.position.x, transform.position.y - 5, transform.position.z);


    }
    public void OpenContainer()
    {
        IconGrill.sprite = SpritesGrill[CurrentLocation.Instance.GetIndex];
        if (StartPosY == 0)
        {
            StartPosY = transform.position.y;
        }
        transform.DOMoveY(StartPosY, 0.1f).OnComplete(()=> {

            GetComponent<CanvasGroup>().DOFade(1, 0.3f);

        });
    }
    public void CloseContainer()
    {
        GetComponent<CanvasGroup>().DOFade(0, 0.3f).OnComplete(() => {

            transform.DOMoveY(StartPosY - 5, 0.1f);
        }); 
        


    }

}
