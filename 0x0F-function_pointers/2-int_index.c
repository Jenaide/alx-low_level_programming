#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the comparing function
 * Return: the index of the first element for which the cmp
 * function does not return 0; -1 if no elements matches or size 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && cmp)
	{
		for (; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}

	return (-1);
}
