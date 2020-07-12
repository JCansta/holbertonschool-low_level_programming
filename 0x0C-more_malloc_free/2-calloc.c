#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _calloc - create an array using calloc.
 * @nmemb: number of elements
 * @size: size of calloc
 * Return: return a pointer created with malloc
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int n, i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	while (i < nmemb * size)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
