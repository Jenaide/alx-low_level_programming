#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string type
 * Returns: nothing
 */
void rev_string(char *s)
{
	int len = 0, x = 0;
	char rev;

	while (s[len] != '\0')
		len++;

	while (x < len--)
	{
		rev = s[x];
		s[x++] = s[len];
		s[len] = rev;
	}
}
