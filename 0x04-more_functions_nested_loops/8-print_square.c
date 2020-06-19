#include "holberton.h"

/**
 *print_square - chekc if char is upper
 *@size: give the numbers of lines
 *Return: Always 0.
 */

void print_square(int size)
{
	int i, j;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
