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
	unsigned int size = sizeof(n) * 8, count = 0, flip = 0;
	unsigned long int i = 1;

	n ^= m;
	while (count < size)
	{
		if (n & i)
		{
			flip++;
		}
		i <<= 1;
		count++;
	}
	return (flip);
}
