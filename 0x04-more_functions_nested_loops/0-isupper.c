#include "main.h"

/**
 * _isupper - function checks for uppercase char
 * @c: Input char
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
