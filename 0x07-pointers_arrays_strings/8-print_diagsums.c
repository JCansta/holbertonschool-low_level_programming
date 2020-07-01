#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - imprime la suma de las diagonales.
 * @a: array 2D
 * @size: size of the array 2D.
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int *p = a;
	int dig1 = 0, dig2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				dig1 = dig1 + *p;

			if ((i + j) == (size - 1))
				dig2 = dig2 + *p;

			p++;
		}
	}
	printf("%d, %d\n", dig1, dig2);
}
