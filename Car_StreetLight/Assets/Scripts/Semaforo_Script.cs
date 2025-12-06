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
    public states actualState;
    float timer = 0f;
    public List<GameObject> Lights = new List<GameObject>();

    void Start()//Antes era só um Serialize Field onde eu arrastava as lampadas, falei "Nah, tem q ter um jeito automatico de fazer isso" e aqui está
    {
        foreach (Transform child in transform) 
        {
            Lights.Add(child.gameObject);
        }
        colorChange(actualState);
    }

    void Update()
    {
        timer += Time.deltaTime;
        changeState();
    }
    public void changeState() //Usando IF ao invez de SWITCH, por conta de ter que checar o tempo junto do estado
    {
        if (timer >= 8f && actualState == states.isRed)
        {
            timer = 0f;
            actualState = states.isGreen;
            colorChange(actualState);
        }
        if (timer >= 3f && actualState == states.isYellow)
        {
            timer = 0f;
            actualState = states.isRed;
            colorChange(actualState);
        }
        if (timer >= 5f && actualState == states.isGreen)
        {
            timer = 0f;
            actualState = states.isYellow;
            colorChange(actualState);
        }
    }
    void colorChange(states actualState)
    {
        switch (actualState)
        {
            case states.isRed:
                Lights[0].GetComponent<SpriteRenderer>().color = Color.red;
                Lights[1].GetComponent<SpriteRenderer>().color = Color.gray;
                Lights[2].GetComponent<SpriteRenderer>().color = Color.gray;
                break;
            case states.isYellow:
                Lights[0].GetComponent<SpriteRenderer>().color = Color.gray;
                Lights[1].GetComponent<SpriteRenderer>().color = Color.yellow;
                Lights[2].GetComponent<SpriteRenderer>().color = Color.gray;
                break;
            case states.isGreen:
                Lights[0].GetComponent<SpriteRenderer>().color = Color.gray;
                Lights[1].GetComponent<SpriteRenderer>().color = Color.gray;
                Lights[2].GetComponent<SpriteRenderer>().color = Color.green;

                break;
        }

    }
}
