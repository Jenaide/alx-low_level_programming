#include "main.h"

/**
 * print_times_table - check main
 * @k: integer
 * prints times table from 0-14
 */
void print_times_table(int k)
{
	int l, m;

	if (k > 0 && k < 15)
	{
		for (l = 0; l <= k; l++)
		{
			_putchar('0');
			for (m = 1; m <= k; m++)
				putformat(l * m);
			_putchar('\n');
		}
	}
}

/**
 * putformat - formatted characters
 * @k: integer
 */
void putformat(int k)
{
	if (k <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(k + '0');
	}
	else if (k > 9 && k <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(k / 10 + '0');
		_putchar(k % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(k / 100 + '0');
		_putchar(k / 10 % 10 + '0');
		_putchar(k % 10 + '0');
	}
}
