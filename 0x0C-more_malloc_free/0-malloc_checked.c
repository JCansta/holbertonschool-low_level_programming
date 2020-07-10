#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - check if malloc is correct
 *@b: size of malloc
 *Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
