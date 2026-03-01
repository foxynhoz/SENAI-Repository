using UnityEngine;

public class PlayerMove : Entities
{
    public float speed = 6f;

    void Update()
    {
        MoveP();
    }

    void MoveP()
    {
        float h = Input.GetAxis("Horizontal");
        float v = Input.GetAxis("Vertical");
        transform.Translate(new Vector3(h, v, 0) * speed * Time.deltaTime);
    }

}
