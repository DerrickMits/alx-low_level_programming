#include "main.h"
#include <stdlib.h>

/**
 * _calloc - prints the allocated memory for an array
 * @nmemb: number of members
 * @size: Size
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
int i = 0, k = 0;
char *p;
if (nmemb == 0 || size == 0)
return (NULL);
k = nmemb * size;
p = malloc(k);
if (p == NULL)
return (NULL);
while (i < k)
{
p[i] = 0;
i++;
}
return (p);
}
