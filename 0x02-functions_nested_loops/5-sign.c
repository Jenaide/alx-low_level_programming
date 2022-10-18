#include "main.h"

/**
 * print_sign - check main
 * @n: print the number of the sign
 * Return: 1 if the greater than 0(positive)
 * 0 is zero
 * -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
