#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - free the memory use it malloc
 *@grid: the 2 dimensional grid to free.
 *@height: columns.
 *Return: Always 0.
 */

void free_grid(int **grid, int height)
{
	int i;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);

}
