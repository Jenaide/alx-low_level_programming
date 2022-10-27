#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: string type
 * @s2: string type
 * Return: The difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0' || *s2 == '\0')
			break;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
