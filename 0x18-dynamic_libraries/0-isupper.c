#include "main.h"

/**
 * _isupper - function that checks for uppercase char
 * @c: input char
 * Return: 1 if c is upper 0 if otherwise
 */
int _isupper(int c)
{
	char upper = 'Z';
	int isup = 0;

	for (; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			isup = 1;
			break;
		}
	}

	return (isup);
}
