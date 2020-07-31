#include "holberton.h"
#include <stdio.h>
/**
 *flip_bits - look for how many bits need flip to became another number.
 *@n: the decimal number
 *@m: the decimal number which n want to b
 *Return: how many bits need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int size = sizeof(n) * 8, count, count2, index = 0, flip = 0;
	unsigned long int x, y;

	(void)size;
	for (count = 0; count < size; count++)
	{
		x = n;
		y = m;
		for (count2 = 0; count2 < index; count2++)
		{
			x >>= 1;
			y >>= 1;
		}
		for (count2 = 0; count2 < size - 1; count2++)
		{
			x <<= 1;
			y <<= 1;
		}
		if (x != y)
			flip++;
		count++;
		index++;
	}
	return (flip);
}
