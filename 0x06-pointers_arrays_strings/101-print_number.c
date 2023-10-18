#include "main.h"

/**
 * print_number - prints an integer
 * @n: The integer to be printed.
 * THe function that prints an integer
 * Return: An integer
 */
void print_number(int n)
{
unsigned int n1;
n1 = n;
if (n < 0)
{
_putchar('-');
n1 = -n;
}
if (n1 / 10 != 0)
print_number(n1 / 10);
_putchar(( a % 10) + '0');
}
