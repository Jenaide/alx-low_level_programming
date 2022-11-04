#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: argument counter
 * @argv: argument value
 * Return: 0 Always
 */
int main(int argc, char **argv)
{
	int no1, no2, results;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		no1 = atoi(argv[1]);
		no2 = atoi(argv[2]);
		results = no1 * no2;
		printf("%d\n", results);
		return (0);
	}
}
