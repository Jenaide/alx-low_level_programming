#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: argument param
 * @argv: array
 * Return: 0 always
 */
int main(int argc __attribute__((usused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
