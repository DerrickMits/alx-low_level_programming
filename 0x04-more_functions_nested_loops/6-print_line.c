#include "main.h"

/**
 * Print_line - Draws line according to the parameter
 * @n: The number of lines to print
 * Return: Empty
 */
void print_line(int n) 
{
if (n <= 0)
{
_putchar('\n');
return;
}
for (int i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
