using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Sun : MonoBehaviour
{
    [SerializeField] private ParticleSystem EffectSun;
    [SerializeField] private GraphicRaycaster Ray;


    private void Start()
    {
        Ray.enabled = false;
    }
    public void Active(bool _activeSun = true)
    {
        EffectSun.gameObject.SetActive(_activeSun);
        EffectSun.Play();
        Ray.enabled = true;
    }
    public void Diactive()
    {
        EffectSun.gameObject.SetActive(false);
        Ray.enabled = false;
        EffectSun.Stop();
    }
}
