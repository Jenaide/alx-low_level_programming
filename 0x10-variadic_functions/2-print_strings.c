#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @separator: string printed between numbers
 * @n: number of params
 * @...: other params
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list par;
	unsigned int x;
	char *string;

	va_start(par, n);
	for (x = 0; x < n; x++)
	{
		string = va_arg(par, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(par);
}
