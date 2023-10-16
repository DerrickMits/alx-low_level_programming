#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: Half a string
 *
 * This function prints half of a string
 *
 * Return: void
 */
void puts_half(char *str)
{
int a = 0;
int c;
while (str[a] != '\0')
{
a++;
}
if (a % 2 == 1)
{
c = (a - 1) / 2);
c += 1;
}
else
{
c = a / 2;
}
for (; c < a; c++)
{
_putchar(str[c];
}
_putchar('\n');
}
