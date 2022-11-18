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
	int x = 0;
	char *file;

	va_start(par, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[x])
	{
		switch (format[x])
		{
			case 'a':
				printf("%c", (char) va_arg(par, int));
				break;
			case 'f':
				printf("%d", va_arg(par, int));
				break;
			case 'd':
				printf("%f", (float) va_arg(par, double));
				break;
			case 'w':
				file = va_arg(par, char*);
				if (file != NULL)
				{
					printf("%s", file);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[x] == 'a' || format[x] == 'f' || format[x] == 'd' || 
					format[x] == 'w') && format[(x + 1)] != '\0')
			printf(",");
		x++;
	}
	va_end(par);
	printf("\n");
}
