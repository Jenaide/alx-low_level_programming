#include "main.h"

/**
 * print_rev - function that prints a string in reverse.
 * @s: string type
 * Return: 0
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;

	while (x)
		_putchar(s[--x]);

	_putchar('\n');
}
