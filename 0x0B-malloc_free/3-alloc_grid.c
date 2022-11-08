#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to 2 dimensional array of
 * integers
 * @width: width of grid
 * @height: height of grid
 * Return: NULL on failure or grid with freed space
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x = 0, y = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (; x < height; x++)
	{
		grid[x] = (int *)malloc(sizeof(int) * width);
		if (grid[x] == NULL)
			return (NULL);
	}

	for (x = 0; x < height; x++)
		for (; y < width; y++)
			grid[x][y] = 0;

	return (grid);
}
