#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char new_string, *start1, *start2;
	int x = 0, len1 = 0, len2 = 0;

	start1 = s1;
	start2 = s2;
	if (s2 == NULL)
		s1 = "";
	while (*s1)
	{
		len1++;
		s1++;
	}
	s1 = start1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		len2++;
		s2++;
	}
	s2 = start2;
	new_string = malloc(sizeof(char) * (len1 + len2 + 1));
	start1 = new_string;
	if (new_string == NULL)
		return (NULL);

	for (; x < (len1 + len2); x++)
	{
		if (x < len1)
		{
			new_string[x] = *s1;
			s1++;
		}
		else
		{
			new_string[x] = *s2;
		}
	}
	new_string[x] = '\0';
	return (start1);
}
