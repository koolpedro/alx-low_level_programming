#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another 
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, y = 0;

	x = n ^ m;

	while (x > 0)
	{
		if ((x & 1) != 0)
			y++;

		x = x >> 1;
	}
	return (y);
}
