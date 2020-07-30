#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
/**
 *clear_bit - set the value of a bit to 0 in a decimal number.
 *@n: the decimal number
 *@index: the location of the bit
 *Return: the new decimal number
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(*n) * 8, count;
	unsigned long int check = *n, new = 1;

	if (index > size)
		return (-1);
	for (count = 0; count < index; count++)
		check >>= 1;
	for (count = 0; count < (size - 1); count++)
		check <<= 1;
	if (check == 0)
		return (1);
	for (count = 0; count < index; count++)
		new <<= 1;
	*n ^= new;
	return (1);
}
