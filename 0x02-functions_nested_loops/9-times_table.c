#include "main.h"

/**
 * times_table - prints the times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{ 
if (j == 0 && i == 0)
_putchar('0');
else if (j == 0)
_putchar(' ');
else if (i == 0)
_putchar(' ');
else
_putchar('0' + i * j % 10);
if (j != 9)
_putchar(',');
}
_putchar('\n');
}
}
