#include "main.h"
int is_div(int a, int b)

/**
 * is_prime_number - function that returns 1 if the input is prime
 * @n: integer
 * Return: 1 if n is prime
 */
int is_prime_number(int n)
{
	int b = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_div(n, b));
}

/**
 * is_div - check if num is dividable
 * @a: the num to be checked
 * @b: results of division
 * Return: 1 if num is dividable or 0 otherwise
 */
int div(int a, int b)
{
	if (a % b == 0)
		return (0);

	if (b == a / 2)
		return (1);

	return (is_div(a, b + 1));
}
