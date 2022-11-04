#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: argument param
 * @argv: array
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
