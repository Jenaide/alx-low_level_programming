#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src.
 * @dest: destination
 * @src: source
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	char *cpy = dest;

	while (*src)
		*dest++ = *src++;
	return (cpy);
}
