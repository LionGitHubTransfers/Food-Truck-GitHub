using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.NiceVibrations;

public class VibrationController : Singleton<VibrationController>
{

    public bool VibroActive = true;
    private void Start()
    {

        DontDestroyOnLoad(this);

    }

    protected virtual void OnDisable()
    {

    }

    protected virtual void TriggerDefault()
    {
#if UNITY_IOS || UNITY_ANDROID
        Handheld.Vibrate();
#endif
    }
    public void VibrateWithTypeSelection()
    {
        if(VibroActive)
        MMVibrationManager.Haptic(HapticTypes.Selection);
    }
    public void VibrateWithTypeMEDIUMIMPACT()
    {
        if (VibroActive)
            MMVibrationManager.Haptic(HapticTypes.MediumImpact);
    }
    public void VibrateWithTypeLIGHTIMPACT()
    {
        if (VibroActive)
            MMVibrationManager.Haptic(HapticTypes.LightImpact);
    }
    public void VibrateWithTypeHAIDIMPACT()
    {
        if (VibroActive)
            MMVibrationManager.Haptic(HapticTypes.HeavyImpact);
    }
    public void VibrateWithType(HapticTypes _type)
    {
        if (VibroActive)
            MMVibrationManager.Haptic(_type);
    }
}
