#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: counts the number of arguments
 * @argv: argument value in a string
 * Return: 0 always(Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
