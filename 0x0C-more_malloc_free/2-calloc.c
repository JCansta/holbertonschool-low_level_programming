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
	unsigned int n, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = nmemb * size;
	p = malloc(n + 1);
	if (p == NULL)
		return (NULL);

	while (i < n)
	{
		p[i] = '0';
		i++;
	}

	p[n + 1] = '\0';

	return (p);
}
