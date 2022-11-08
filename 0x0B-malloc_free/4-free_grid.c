#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2d array of its previously
 * created malloc-grid function
 * @grid: 2d array of int to be freed
 * @height: height of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	if (grid == NULL)
		return;
	while (x < height)
		free((int *)grid[x++]);
	free(grid);
}
