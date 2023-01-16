#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: char to locate a string
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *strt = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = strt;
		s++;
	}
	return (NULL);
}
