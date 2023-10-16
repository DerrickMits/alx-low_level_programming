#include <stdio.h>

/*
 * swap_int - swaps the values of two integers
 * @a: First integer swapped
 * @b: Second integer swapped
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b) 
{
int temp = *a;
*a = *b;
*b = temp;
}
