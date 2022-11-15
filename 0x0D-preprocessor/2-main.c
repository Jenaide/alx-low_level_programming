#include <stdio.h>

/**
 * main - prints the file name it was compiled from followed by newline
 * Return: 0 Always
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
