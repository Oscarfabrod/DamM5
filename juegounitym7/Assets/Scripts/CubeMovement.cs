using UnityEngine;

public class CubeMovement : MonoBehaviour
{
    public float speed = 5f; // Velocidad de movimiento
    public float jumpForce = 7f; // Fuerza del salto
    public int maxHealth = 100; // Vida m�xima
    private int currentHealth;
    private Rigidbody _rb;
    private bool _isGrounded;
    private Renderer _renderer;
    public GameObject bulletPrefab;
    public Transform firePoint;
    public float bulletSpeed = 10f;

    void Start()
    {
        _rb = GetComponent<Rigidbody>();
        _renderer = GetComponent<Renderer>();
        currentHealth = maxHealth;
        UpdateColor();
    }

    void Update()
    {
        // Movimiento en los ejes X y Z
        float moveX = Input.GetAxis("Horizontal") * speed;
        float moveZ = Input.GetAxis("Vertical") * speed;

        Vector3 movement = new Vector3(moveX, _rb.linearVelocity.y, moveZ);
        _rb.linearVelocity = new Vector3(movement.x, _rb.linearVelocity.y, movement.z);

        // Salto
        if (Input.GetKeyDown(KeyCode.Space) && _isGrounded)
        {
            _rb.AddForce(Vector3.up * jumpForce, ForceMode.Impulse);
            _isGrounded = false;
        }

        // Disparo
        if (Input.GetKeyDown(KeyCode.F))
        {
            Shoot();
        }
    }

    void OnCollisionEnter(Collision collision)
    {
        // Detecta si toca el suelo
        if (collision.gameObject.CompareTag("Ground"))
        {
            _isGrounded = true;
        }
    }

    public void TakeDamage(int damage)
    {
        currentHealth -= damage;
        currentHealth = Mathf.Clamp(currentHealth, 0, maxHealth);
        UpdateColor();

        if (currentHealth <= 0)
        {
            Die();
        }
    }

    private void UpdateColor()
    {
        if (currentHealth >= 70)
        {
            _renderer.material.color = Color.green;
        }
        else if (currentHealth >= 40)
        {
            _renderer.material.color = Color.yellow;
        }
        else
        {
            _renderer.material.color = Color.red;
        }
    }

    private void Die()
    {
        Debug.Log("El cubo ha muerto.");
        gameObject.SetActive(false); // Desactiva el cubo
    }

    private void Shoot()
    {
        GameObject bullet = Instantiate(bulletPrefab, firePoint.position, firePoint.rotation);
        Rigidbody bulletRb = bullet.GetComponent<Rigidbody>();
        bulletRb.linearVelocity = firePoint.forward * bulletSpeed;
    }
}
