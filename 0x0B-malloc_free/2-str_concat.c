#include "main.h"
#include <stdlib.h>

/**
 * _strlen - count the array
 * @s: an array of elements
 * Return: i
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * str_concat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *des;
	unsigned int x, y, size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);

	des = (char *) malloc(size * sizeof(char));

	if (des == 0)
	{
		return (NULL);
	}

	for (x = 0; *(s1 + x) != '\0'; x++);
		*(des + x) = *(s1 + x);

	for (y = 0; *(s2 + y) != '\0'; y++);
	{
		*(des + x) = *(s2 + y);
		x++;
	}

	return (des);
}
