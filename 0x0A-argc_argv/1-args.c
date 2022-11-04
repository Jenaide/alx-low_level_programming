#include <stdio.h>

/**
 * main - program that prints the of arguments passed into it.
 * @argc: argument parameter
 * @argv: an array
 * Return: 0 always
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argv - 1);
	return (0);
}
