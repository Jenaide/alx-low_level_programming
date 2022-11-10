#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: pointer of the first string
 * @s2:pointer of the second string
 * @n: number of strings to concatenate
 * Return: pointer to concatenated string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int x = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[len1])
		len1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	new_string = malloc(len1 + n + 1);
	if (new_string == NULL)
		return (NULL);

	for (; x < (len1 + n); x++)
	{
		if (x < len1)
			new_string[x] = *s1, s1++;
		else
			new_string[x] = *s2, s2++;
	}
	new_string[x] = '\0';
	return (new_string);
}
