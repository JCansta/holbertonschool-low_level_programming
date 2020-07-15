#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: the array will be printed
 * @size: the size of the array
 * @cmp: the function I will use
 * Return: Always 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0, i, value;

	if (cmp == NULL)
		return;
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		value = (*cmp)(array[i]);
		if (value != 0)
			count++;
	}
	if (count == 0)
		return (-1);

	return (count);
}
