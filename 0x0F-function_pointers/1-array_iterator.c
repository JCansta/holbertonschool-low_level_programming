#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - print a name
 * @array: the array will be printed
 * @size: the size of the array
 * @action: the function I will use
 * Return: Always 0.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;
	if (size <= 0)
		return;
	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
