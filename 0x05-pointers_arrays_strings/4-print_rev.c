#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: The string to print in reverse
 *
 * This function takes a string and prints it in reverse order
 *
 * Return: void
 */
void print_rev(char *s)
{
int c = 0;
while (s[c] != '\0')
{
c++;
}
for (c -= 1; c >= 0; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
