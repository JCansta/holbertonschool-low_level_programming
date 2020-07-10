#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: min value
 * @max: max value
 * Return: return a pointer created with malloc
*/

int *array_range(int min, int max)
{
	int n, i = 0;
	int *p;
	int *g;

	if (min > max)
		return (NULL);

	n = max - min;
	p = malloc(n * sizeof(int));

	if (p == NULL)
		return (NULL);
	g = p;

	if (i < n)
	{
		*g = min + 0x00;
		min++;
		i++;
		g++;
	}
	return (p);
}
