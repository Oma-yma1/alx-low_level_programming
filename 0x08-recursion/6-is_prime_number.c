#include "main.h"
int act_prime(int n, int j);
/**
 * is_prime_number -  function that says if an integer is prime number or not
 * @n: number
 * Return: 1 if n is prime number otherwise return 0
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (act_prime(n, n - 1));
}
/**
 * act_prime - calculate if n is prime
 * @n: number
 * @j: iterator
 * Return: 1 if n is prime otherwise return 0
 */
int act_prime(int n, int j)
{
if (j == 1)
return (1);
if (n % j == 0 && j > 0)
return (0);
return (act_prime(n, j - 1));
}
