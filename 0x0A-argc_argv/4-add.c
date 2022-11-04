#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that adds positive numbers
 * @argc: argument counter
 * @argv: argument value
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	int no, results = 0, x;

	while (argc-- > 1)
	{
		for (x = 0; argv[argc][x]; x++)
		{
			if (!(isdigit(argv[argc][x])))
			{
				printf("Error\n");
				return (1);
			}
		}
		no = atoi(argv[argc]);
		results += no;
	}
	printf("%d\n", results);
	return (0);
}
