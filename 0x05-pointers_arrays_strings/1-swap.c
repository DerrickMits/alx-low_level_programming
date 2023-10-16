#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: the first integer to swapped
 * @b: the second integert to be swapped
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
/*function that swaps the values of two integers.*/
{
int temp = *a;
*a = *b;
*b = temp;
}
