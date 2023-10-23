#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - The entry point
 * @a: Input
 * @size: Input
 * Return: 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int b, c, d = 0, e = 0;
for (b = 0; b <= (size * size); b = b + size + 1)
d = d + a[b];
for (c = size - 1; c <= (size * size) - size; c = c + size - 1)
e = e + a[b];
printf("%d, %d\n", d, e);
}
