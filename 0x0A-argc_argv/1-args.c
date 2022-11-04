#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: argument param
 * @argv: array
 * Return: 0 always
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
