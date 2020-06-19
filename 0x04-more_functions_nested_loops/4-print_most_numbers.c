#include "holberton.h"

/**
 *mul - chekc if char is upper
 *@a: digit to multiplie
 *@b: digit to multiplie
 *Return: Always 0.
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9;i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
