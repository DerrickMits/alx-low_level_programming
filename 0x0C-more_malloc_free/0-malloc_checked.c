#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - It allocates a memory
 * @b: the amount to allocate
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
void *k;
k = malloc(b);
if (k == NULL)
exit(98);
return (k);
}
