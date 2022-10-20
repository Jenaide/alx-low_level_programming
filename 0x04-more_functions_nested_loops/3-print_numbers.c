#include "main.h"

/**
 * print_numbers - print from 0 - 9
 * Return: Always 0
 */
void print_numbers(void)
{
	int x = 0;

	while (x < 10)
		_putchar(x++ + '0');

	_putchar('\n');
}
