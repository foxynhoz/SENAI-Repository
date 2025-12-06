using UnityEngine;

public class CarScript : MonoBehaviour
{
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {

    }

    void Update()
    {

    }

    private void OnCollisionStay2D(Collision2D collision)
    {
        Debug.Log("Semas");
    }
}
