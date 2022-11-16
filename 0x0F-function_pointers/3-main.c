#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program to perform simple operations
 * @argc: argument counter
 * @argv: array of arguments
 * Return: 0 or 98 on argc ,99 operator
 */
int main(int argc, char *argv[])
{
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	function = get_op_func(argv[2]);
	if (function == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", function(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
