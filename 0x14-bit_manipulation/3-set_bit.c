#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
/**
 *set_bit - set the value of a bit to 1 in a decimal number.
 *@n: the decimal number
 *@index: the location of the bit
 *Return: the new decimal number
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int new = 1;
	unsigned int size = sizeof(n) * 8, count = 0;

	if (index > size)
		return (-1);

	while (count < index)
	{
		new <<= 1;
		count++;
	}
	*n = *n | new;
	return (1);
}
