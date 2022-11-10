#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocated memory using malloc
 * @b: unsigned integer
 * Return: a pointer to allocate memory or NULL on failure
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
		exit(98);

	return (x);
}
