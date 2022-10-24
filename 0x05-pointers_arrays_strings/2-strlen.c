#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string type input
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
