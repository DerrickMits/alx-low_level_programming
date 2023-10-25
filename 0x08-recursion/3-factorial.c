#include "main.h"

/**
 * factorial - Determines the fctorial of a digit
 * @n: the number to used
 * Return: An integer
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n <= 0)
return (1);
return (n * factorial(n - 1));
}
