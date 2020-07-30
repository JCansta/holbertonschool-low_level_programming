#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
/**
 *get_bit - print the value of a bit in a decimal number.
 *@n: the decimal number
 *@index: the location of the bit
 *Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8, count = 0;

	while (count < index)
	{
		n >>= 1;
		count++;
	}
	count = 0;
	while (count < size - 1)
	{
		n <<= 1;
		count++;
	}
	if (n != 0)
		return (1);
	else
		return (0);
}
