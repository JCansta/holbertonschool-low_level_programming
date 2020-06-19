#include "holberton.h"

/**
 *print_diagonal - chekc if char is upper
 *@n: give the numbers of lines
 *Return: Always 0.
 */

void print_diagonal(int n)
{
	int i, k;

	for (i = 0; i < n; i++)
	{
		for (k = 0; k < i; k++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
