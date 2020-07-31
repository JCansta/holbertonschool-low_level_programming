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
	unsigned int count = 0, size = sizeof(n) * 8;
	unsigned long int check = 1;
	int y;

	if (index > size)
		return (-1);
	for (count = 0; count < index; count++)
		check <<= 1;
	y = (check & n) ? 1 : 0;
	return (y);
}
