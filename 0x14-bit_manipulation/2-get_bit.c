#include "main.h"
#include <stdio.h>

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the number to extract the bit from
 * @index: the index of the bit to retrieve, starting from 0
 *
 * Return: the value of the bit at the specified index, or -(error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);
n >>= index;
return (n & 1);
}
