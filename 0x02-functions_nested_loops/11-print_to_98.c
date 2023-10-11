#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i < 98; i++)
{
print_number(i);
_putchar(',');
_putchar(' ');
}
}
else
{
for (i = n; i > 98; i--)
{
print_number(i);
_putchar(',');
_putchar(' ');
}
}
print_number(98);
_putchar('\n');
}
/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
if (n == -2147483648)
{
_putchar('-');
_putchar('2');
print_number(147483648);
}
else if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10 != 0)
{
print_number(n / 10);
}
 _putchar((n % 10) + '0');
}
