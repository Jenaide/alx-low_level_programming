#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
	char *link = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (link);
}
