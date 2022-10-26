#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: char type
 * @src: char type
 * @n: integer type
 * Return: pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int slen = 0, x = 0;
	char *link = dest, *start = src;

	while (*src)
	{
		slen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > slen)
		n = slen;

	src = start;

	for (; x < n; x++)
		*dest++ = *src++;

	*dest = '\0';
	return (link);
}
