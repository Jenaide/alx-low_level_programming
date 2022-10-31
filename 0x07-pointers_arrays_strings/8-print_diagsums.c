#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of two diagonals
 * @a: square matrix of int
 * @size: size of matrix
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int x = 0, max = size * size, s1 = 0, s2 = 0;

	for (; x < max; x += size + 1)
		s1 += a[x];

	for (x = size - 1; x < max - 1; x += size - 1)
		s2 += a[x];

	printf("%d, %d\n", s1, s2);
}
