#include "main.h"

/**
 * more_numbers - function that prints 0 to 14 numbers
 * Return: Always 0
 */
void more_numbers(void)
{
	int nm, x;

	for (x = 0; x <= 9; x++)
	{
		for (nm = 0; nm <= 14; nm++)
		{
			if (nm > 9)
			{
				_putchar((nm / 10) + '0');
			}
			_putchar((nm % 10) + '0');
		}

		_putchar('\n');
	}
}
