#include "search_algos.h"
/**
 * print_arr - print the array
 * @array: array of numbers
 * @first: first position in the current array
 * @last: last position in the current array
 */
void print_arr(int *array, int first, int last)
{
	int k = first;

	for (; k <= last; k++)
	{
		printf(" %d", array[k]);
		if (k != last)
			printf(",");
		else
			printf("\n");
	}
}
/**
 * binary_search - searches for a value in an array of integers
 * @array: array of numbers
 * @size: size of the array
 * @value: value to search in the array
 * Return: the position of the value in the array
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, first = 0, last = (size - 1);

	if (array)
	{
		printf("Searching in array:");
		print_arr(array, first, last);
		while (first <= last)
		{
			mid = ((first + last) / 2);
			if (value > array[mid])
			{
				first = mid + 1;
				if (first <= last)
				{
					printf("Searching in array:");
					print_arr(array, first, last);
				}
			}
			else if (value < array[mid])
			{
				last = mid - 1;
				if (first <= last)
				{
					printf("Searching in array:");
					if (array[first] == array[last])
						printf("%d\n", array[first]);
					else
						print_arr(array, first, (last + 1));
				}
			}
			else
			{
				return (mid);
			}
		}
	}
	return (-1);
}
