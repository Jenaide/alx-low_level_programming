#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: copy to
 * @src: copy from
 * @n: number of bytes
 * Return: copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *strt = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (strt);
}
