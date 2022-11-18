#include "variadic_functions"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * @...: other parameters
 * Return: all the paramemeters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int x = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(par, n);
	for (; x < n; x++)
		sum +- va_arg(par, int);

	va_end(par);
	return (sum);
}
