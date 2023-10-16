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
int b;
for (b = 0; b < n; a++)
printf("%d", a[b]);
if (b != (n - 1))
printf(", ");
printf("\n");
}
