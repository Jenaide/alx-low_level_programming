#include "main.h"

/**
 * _isupper - Function checks for uppercase character.
 * @c: input char
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
