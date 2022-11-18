#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - function that prints anything.
 * @format: list of arguments passed to the function
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list par;
	int x = 0, y, z = 0;
	char *file;
	const char t_arg[] = "afdw";

	va_start(par, format);
	while (format && format[x])
	{
		y = 0;
		while (t_arg[y])
		{
			if (format[x] == t_arg[y] && z)
			{
				printf(", ");
				break;
			} y++;
		}
		switch (format[x])
		{
		case 'a':
			printf("%c", (char) va_arg(par, int)), z = 1;
			break;
		case 'f':
			printf("%d", va_arg(par, int)), z = 1;
			break;
		case 'd':
			printf("%f", (float) va_arg(par, double)), z = 1;
			break;
		case 'w':
			file = va_arg(par, char*), z = 1;
			if (!file)
			{
				printf("(nil)");
				break;
			}
			printf("%s", file);
			break;
		} x++;
	}
	printf("\n"), va_end(par);
}
