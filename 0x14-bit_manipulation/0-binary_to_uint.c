#include "holberton.h"
#include <stdio.h>
/**
 *binary_to_uint - convert binary to unsigned int.
 *@b: values of arguments
 *Return: unsigend int
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int n = 0, mult = 1;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (b[i] == '1')
		{
			n += mult;
		}
		if (b[i] != '0' && b[i] != '1')
			return (0);
		mult *= 2;
		i--;
	}
	return (n);
}
