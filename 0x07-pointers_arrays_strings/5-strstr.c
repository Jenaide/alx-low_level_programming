#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: string to search in
 * @needle: string to locate into haystack
 * Return: pointer of the beginning of the location of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *strtx = needle, *strty = haystack;

	while (*haystack)
	{
		strty = haystack;
		needle = strtx;
		while (*haystack == *needle)
		{
			haystack++;
			needle++
		}

		if (*needle == '\0')
			return (haystack);
		haystack = strty + 1;
	}
	return (NULL);
}
