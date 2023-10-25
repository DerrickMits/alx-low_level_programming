#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - Returns if a number is prime
 * @n: The number to be looked at
 * Return: Integer value
 */
int is_prime_number(int n)
{
return (check_prime(n, 1));
}
/**
 * check_prime - Looks if a number is prime number
 * @n: the number to be checked
 * @i: the repeated times
 * Return: 1 for a prime otherwise 0
 */
int check_prime(int n, int i)
{
if (n <= 1)
return (0);
if (n % i == 0 && i > 1)
return (0);
if ((n / i) < i)
return (1);
return (check_prime(n, i + 1));
}
