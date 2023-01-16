#include "main.h"

/**
 * _isdigit - function that checks for a digit(0 - 9)
 * @c: input integer
 * Return: 1 if c is a digit 0 if otherwise
 */
int _isdigit(int c)
{
	int x = 0;

	if (c >= '0' && c <= '9')
		x = 1;

	return (x);
}
