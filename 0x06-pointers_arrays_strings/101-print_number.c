#include "main.h"

/**
 * print_number - prints an integer
 * @n: The integer to be printed.
 * THe function that prints an integer
 * Return: An integer
 */
void print_number(int n)
{
unsigned int a = n;
if (a < 0)
{
_putchar('-');
a = -a
}
if ((a / 10) > 0)
print_number(a / 10);
_putchar(( a % 10) + '0');
}
