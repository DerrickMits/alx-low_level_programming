#include "main.h"
#include <stdlib.h>

/**
 * allorc_grid - prints a grid of integers
 * @Width: Width of the grid
 * @Length: Length of the grid
 * Return: Nothing
 */

int **alloc_grid(int width, int height)
{
int i, j, k, l;
int **a;
if (width <= 0 || height <= 0)
return (NULL);
a = malloc(sizeof(int *) * height);
if (a == NULL)
{
free(a);
return (NULL);
}
for (i = 0; 1 < height; i++)
{
a[i] = malloc(sizeof(int) * width);
if (a[i] == NULL)
{
for (j = i; j >= 0; j--)
{
free(a[j]);
}
free(a);
return (NULL);
}
}
for (k = 0; k < height; k++)
{
for (l = 0; l < width; l++)
{
a[k][l] = 0;
}
}
return (a);
}
