#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to search in the array
 * Return: 0
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		for (; i < size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
