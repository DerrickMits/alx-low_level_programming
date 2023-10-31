#include "main.h"
#include <stdlib.h>

/**
 * free_grid - prints a 2 dimensional grid previously created
 * @grid: the address of the grid
 * @height: the height of the grid
 * Return: Nothing
 */

free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
