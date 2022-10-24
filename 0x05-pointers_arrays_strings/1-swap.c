#include "main.h"

/**
 * swap_int - function that swaps the value of 2 int
 * @a: int a
 * @b: int b
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
