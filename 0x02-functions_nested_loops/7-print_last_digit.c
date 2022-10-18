#include "main.h"

/**
 * print_last_digit - check main
 * @h: integer number
 * Return: value of last digit
 */
int print_last_digit(int h)
{
	int dk = n % 10;

	if (dk < 0)
		dk *= -1;
	_putchar(dk + '0');

	return (0);
}
