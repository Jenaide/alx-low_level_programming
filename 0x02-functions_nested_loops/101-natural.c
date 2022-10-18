#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 success
 */

int main(void)
{
	int k, num = 0;

	for (k = 0; k <= 1024; k++)
	{
		if ((k % 5) == 0 || (k % 3) == 0)
			num += k;
	}
	printf("%d\n", num);

	return (0);
}
