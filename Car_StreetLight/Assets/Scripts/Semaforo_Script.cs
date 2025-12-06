using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using static Unity.VisualScripting.Metadata;

public class Semaforo_Script : MonoBehaviour
{
    
    public enum states
    {
        isRed,
        isYellow,
        isGreen,
    }
    public states actualState = states.isRed;
    float timer = 0f;
    public List<GameObject> Lights = new List<GameObject>();

    void Start()//Antes era só um Serialize Field onde eu arrastava as lampadas, falei "Nah, tem q ter um jeito automatico de fazer isso" e aqui está
    {
        foreach (Transform child in transform) 
        {
            Lights.Add(child.gameObject);
        }
    }

    // Update is called once per frame
    void Update()
    {
        timer += Time.deltaTime;
        changeState();
    }
    public void changeState() //Usando IF ao invez de SWITCH, por conta de ter que checar o tempo junto do estado
    {
        if (timer >= 5f && actualState == states.isRed)
        {
            timer = 0f;
            actualState = states.isGreen;
            colorChange(actualState);
        }
        if (timer >= 3f && actualState == states.isYellow)
        {
            timer = 0f;
            actualState = states.isRed;
        }
        if (timer >= 10f && actualState == states.isGreen)
        {
            timer = 0f;
            actualState = states.isYellow;
        }
    }
    void colorChange(states actualState)
    {
        switch (actualState)
        {
            case states.isRed:
                
                break;
        }

    }
}
