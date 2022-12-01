#include "main.h"

/**
 * flip_bits - function that gets bum of bit needed to flip
 * @n: how many flips are needed equal m for n
 * @m: num to set equal
 * Return: num of flipbits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned long int zee = (n ^ m);
	unsigned long int maxi = 0x01;

	while (maxi <= zee)
	{
		if (maxi & zee)
			flip++;
		maxi <<= 1;
	}
	return (flip);
}
