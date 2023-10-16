#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: The string to print in reverse
 *
 * This function takes a string and prints it in reverse order, followed by a new line.
 *
 * Return: void
 */
int _atoi(char *s)
{
int c = 0;
unsigned int ni = 0;
int min = 1;
int isi = 0;
while (s[c])
{
if (s[c] == 45)
{
min *= -1;
}
while (s[c] >= 48 && s[c] <= 57)
{
isi = i;
ni = (ni * 10) + (s[c] - '0');
c++;
}
if (isi == 1)
{
break;
}
c++;
}
ni *= min;
return (ni);
}
