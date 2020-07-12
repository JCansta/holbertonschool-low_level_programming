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
	int n;
	int *p;
	int *g;

	if (min > max)
		return (NULL);

	n = max - min;
	p = malloc((n + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);
	g = p;

	while (min <= max)
	{
		*g = min;
		min++;
		g++;
	}
	return (p);
}
