#include "main.h"

/**
 * _memset - function that fills memory with constant byte.
 * @s: char type
 * @b: char type
 * @n: unsigned integer
 * Return: a pointer to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
