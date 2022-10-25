#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that converts string into an integer
 * @s: string input
 * Return: Integer
 */
int _atoi(char *s)
{
	int tk = 1;
	unsigned int tot = 0;
	char null = 0;

	while (*s)
	{
		if (*s == '-')
			tk *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null = 1;
			tot = tot * 10 + *s - '0';
		}

		else if (null)
			break;
		s++;
	}

	if (tk < 0)
		tot = (-tot);
	return (tot);
}
