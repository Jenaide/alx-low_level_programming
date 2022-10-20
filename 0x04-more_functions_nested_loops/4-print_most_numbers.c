#include "main.h"

/**
 * print_most_numbers - print numbers 0 - 9
 * without 2 and 4
 * Return: always 0
 */
void print_most_numbers(void)
{
	int x = '0';

	for (x <= '9'; x++)
	{
		if (x != '2' && x != '4')
			_putchar(x);
	}
	_putchar('\n');
}
