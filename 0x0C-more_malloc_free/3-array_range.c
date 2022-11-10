#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum num to start
 * @max: max number to start
 * Return:pointer
 */
int *array_range(int min, int max)
{
	int *array;
	int mem, x;

	if (min > max)
		return (NULL);

	mem = max - min;
	array = malloc((mem + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (x = 0; x <= mem; x++)
		array[x] = min++;

	return (array);
}
