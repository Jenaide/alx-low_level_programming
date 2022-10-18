#include "main.h"

/**
 * print_last_digit - check main
 *@h: integer input
 *Return: last digit of a number
 */
int print_last_digit(int h)
{
	int d;

	if (h < 0)
		d = -1 * (r % 10);
	else
		d = h % 10;

	_putchar((d % 10) + '0');
	return (n % 10);
}
