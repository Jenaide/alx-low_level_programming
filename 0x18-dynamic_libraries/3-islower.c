#include "main.h"

/**
 * _islower - check main
 * @c: the character
 * uses putchar function to print alphabet in lowercase x10
 * Return: 1 if lower 0 if upper
 */
int _islower(int c)
{
	char k;
	int h = 0;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k == c)
			h = 1;
	}

	return (h);
}
