#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: string type
 * @src: string type
 * @n: integer type
 * Return: pointer to resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int slen = 0, x = 0;
	char *link = dest, *start = src;

	while (*src)
	{
		slen++;
		src++;
	}

	slen++;

	if (n > slen)
		n = slen;

	src = start;

	for (; x < n; x++)
		*dest++ = *src++;

	return (link);
}
