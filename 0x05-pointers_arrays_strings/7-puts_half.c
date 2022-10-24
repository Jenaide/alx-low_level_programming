#include "main.h"

/**
 * puts_half - function that prints half a string.
 * @str: string type
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = 0, x, y;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		y = len / 2;

	else
		y = (len + 1) / 2;

	for (x = n; x < len; x++)
		_putchar(str[x]);

	_putchar('\n');
}
