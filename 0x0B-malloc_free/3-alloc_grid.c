#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - create a 2D array with malloc
 *@width: filas
 *@height: columnas
 *Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i = 0, j = 0;

	if (width < 1 || height < 1)
		return (NULL);

	p = (int **) malloc(height * sizeof(int *));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	while (i < height)
	{
		p[i] = (int *)malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			free(p);
			return (NULL);
		}
		i++;
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}

	return (p);
}
