#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array of integers
 * @a: Array of integers
 * @n: Number of arrays to be printed
 * This function prints an array of integers
 *
 * Return: void
 */
void print_array(int *a, int n)
{
int j;
for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
