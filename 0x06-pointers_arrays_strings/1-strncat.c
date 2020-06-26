#include "holberton.h"
/**
 * _strncat - wenas.
 * @dest: bring a direction.
 * @src: bring a int.
 * @n: number of letters of the array to copy.
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *cont = dest;
	char *contsrc = src;
	int i;

	while (*cont != '\0')
	{
		cont++;
	}

	for (i = 0; *contsrc != '\0' && i < n; i++)
	{
		*cont = *contsrc;
		contsrc++;
		cont++;
	}
	*cont = '\0';
	return (dest);
}
