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
	int i, temp;

	for (i = 0; i < n; i++)
		end++;

	end--;
	i = 0;
	while (i < (n / 2))
	{
		temp = *end;
		*end = *ini;
		*ini = temp;
		end--;
		ini++;
		i++;
	}
}
