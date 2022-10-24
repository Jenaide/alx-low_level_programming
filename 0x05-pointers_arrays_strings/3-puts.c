#include "main.h"

/**
 * _puts - function that prints a string, followed by new line to stdout
 * @str: string type
 * Return: 0
 */
void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
