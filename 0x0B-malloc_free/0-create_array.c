#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char to initialize the array
 * Return:NULL if size is 0 or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	s = (char *) malloc(size * sizeof(c));

	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		x = 0;
		while (x < size)
		{
			*(s + x) = c;
			x++;
		}

		return (s);
	}
}
