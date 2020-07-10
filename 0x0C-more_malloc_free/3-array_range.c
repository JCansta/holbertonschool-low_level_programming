#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - create an array using calloc.
 * @nmemb: number of elements
 * @size: size of calloc
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
