#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that print numbers
 * @separator: a string that will be printed between numbers
 * @n: number of param
 * @...: other param
 * Return: all param
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list par;
	unsigned int x;
	int num;

	va_start(par, n);
	for (x = 0; x < n; x++)
	{
		num = va_arg(par, int);
		printf("%d", num);
		if (separator == NULL)
			continue;
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(par);
}
