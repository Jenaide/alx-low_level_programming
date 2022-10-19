#include "main.h"

/**
 * largest_number - returns the largest of the 3 num
 * @x: first int
 * @y: second int
 * @z: third int
 * Return: largest number
 */
int largest_number(int x, int y, int z)
{
	int largest;

	if (x >= y && x >= z)
	{
		largest = x;
	}
	else if (y >= x && y >= z)
	{
		largest = y;
	}
	else if (z >= x && z >= y)
	{
		largest = z;
	}

	return (largest);
}
