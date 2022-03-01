using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModelSprite : MonoBehaviour
{
    [SerializeField] private MeshRenderer[] AllObject;
    [SerializeField] private GameObject EffectGrill;

    public void SetNewSprite(Sprite _NewSprite)
    {
        for (int i = 0; i < AllObject.Length; i++)
        {
            AllObject[i].material.mainTexture = _NewSprite.texture;
        }
    }
    public void SetColorGrill()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int u = 0; u < AllObject.Length; u++)
            {
                Material NewMat = new Material(AllObject[u].material);
                NewMat.SetInt("_RimEnabled", 1);
                AllObject[u].material = NewMat;

            }
        }
       if(CurrentLocation.Instance.GetIndex == 0)
        {
            Instantiate(EffectGrill, transform);
        }
       
    }
}
