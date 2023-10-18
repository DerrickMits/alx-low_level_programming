#include "main.h"

/**
 * reverse_array - reverses the content of an array of integer
 * @a: The array of integers to be reversed
 * @n: The number of elements in the array
 *
 * The function reverses the content of an array of integers
 *
 * Return: The reversed arrays
 */
void reverse_array(int *a, int n)
{
int b, c;
for (c = n - 1; c >= n / 2; c--)
{
b = a[n -1 - c];
a[n -1 - c] = a[c];
a[c] = b;
}
}
