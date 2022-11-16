#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as 
 * a parameter on each element of an array.
 * @array: an array to iterate
 * @size: size of the array
 * @action:function being used
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array == NULL || action == NULL)
		return;

	for (; x < size; x++)
		action(array[x]);
}
