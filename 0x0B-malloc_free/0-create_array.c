#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */
/**
*create_array - creates an arrays of char.
*@size: give us the leng of the array
*@c: give us the initialize char
*Return: the return of finish file
*/

char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(size * sizeof(char));
	unsigned int i;

	for (i = 0; i <= size; i++)
		p[i] = c;

	if (size == 0)
	{
		return ('\0');
	}
	return (p);
}
