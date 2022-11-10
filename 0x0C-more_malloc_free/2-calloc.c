#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: no of memory spaces
 * @size: size of nmemb
 * Return: pointer to allocate space of NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x = 0;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	for (; x < nmemb * size; x++)
		*(mem + x) = 0;

	return (mem);
}
