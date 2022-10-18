#include "main.h"

/**
 * print_last_digit - check main
 *@h: integer input
 *Return: last digit of a number
 */
int print_last_digit(int h)
{
	int dk = h % 10;

	if (dk < 0)
		dk *= -1;
	_putchar(dk + '0');

	return (0);
}
