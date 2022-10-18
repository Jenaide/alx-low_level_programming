#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int h;
	char k;

	for (h = 0; h <= 9; h++)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);
		_putchar('\n');
	}
}
