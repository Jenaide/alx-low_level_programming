#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @x: input
 * Return: value of x
 */
char *leet(char *x)
{
	int i, j;
	char str1[] = "aAgGjJhHiIoO";
	char str2[] = "8833661122";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (x[i] == str1[j])
			{
				x[i] = str2[j];
			}
		}
	}
	return (x);
}
