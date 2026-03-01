using UnityEngine;

public class Enemy : Entities
{
    public float enemySpeed = 4f;
    public enum EnemyState
    {
        Idle,
        Chase,
    }

    public EnemyState currentState;
    public Transform player;

    void Update()
    {
        switch (currentState)
        {
            case EnemyState.Idle:
                Idle();
                break;

            case EnemyState.Chase:
                Chase();
                break;

        }
    }

    void Idle()
    {
        if (Vector3.Distance(transform.position, player.position) < 8f)
        {
            currentState = EnemyState.Chase;
        }
        else
        {
            currentState = EnemyState.Idle;
        }
    }

    void Chase()
    {
        transform.position = Vector3.MoveTowards(transform.position, player.position, enemySpeed * Time.deltaTime);
    }
}
