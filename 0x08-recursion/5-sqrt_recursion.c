#include "main.h"
int _sqrt2(int a, int b);

/**
 * _sqrt_recursion - returns the value of square root of n.
 * @n: Integer
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt2(1, n));
}

/**
 * _sqrt2 - finds the square root
 * @a: prev value
 * @b: square root value
 * Return: square root
 */
int _sqrt2(int a, int b)
{
	if (a > b)
		return (-1);
	else if (a * a == b)
		return (a);
	return (_sqrt2(a + 1, b));
}
