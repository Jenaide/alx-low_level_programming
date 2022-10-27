#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase.
 * @x: pointer
 * Return: char
 */
char *string_toupper(char *x)
{
	char *start = x;

	while (*x)
	{
		if (*x >= 'a' || *x <= 'z')
			*x -= 32;
		x++;
	}
	return (start);
}
