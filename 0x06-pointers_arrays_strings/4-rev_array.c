#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 * of integers.
 * @a: type array
 * @n: elements of an array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int x = 0;
	int aux;

	while (x < n--)
	{
		aux = a[x];
		a[x++] = a[n];
		a[n] = aux;
	}
}
