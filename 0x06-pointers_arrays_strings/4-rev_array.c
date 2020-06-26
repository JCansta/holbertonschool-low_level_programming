#include "holberton.h"
/**
 * reverse_array - .
 * @a: bring a direction.
 * @n: bring a direction.
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int *end = a;
	int *ini = a;
	int temp[n];
	int i;

	for (i = 0; i < n; i++)
		end++;

	end--;
	for (i = 0; i < n; i++)
	{
		temp[i] = *end;
		end--;
	}
	for (i = 0; i < n; i++)
	{
		*ini = temp[i];
		ini++;
	}
}
