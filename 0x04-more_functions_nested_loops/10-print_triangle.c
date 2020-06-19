#include "holberton.h"

/**
 *print_triangle - fizzbuzz
 *@size: triangle size
 *Return: Always 0.
 */

void print_triangle(int size)
{
	int i, j, cont;

	for (i = 0; i < size; i++)
	{
		cont = size;
		for (j = 0; j < size; j++)
		{
			if (cont <= (i + 1))
				_putchar('#');
			else
				_putchar(' ');

			cont--;
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
