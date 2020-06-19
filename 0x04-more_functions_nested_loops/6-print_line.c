#include "holberton.h"

/**
 *print_line - chekc if char is upper
 *@n: give the numbers of lines
 *Return: Always 0.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
