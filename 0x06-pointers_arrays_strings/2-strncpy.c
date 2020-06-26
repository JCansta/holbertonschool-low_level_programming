#include "holberton.h"
/**
 * _strncpy - copy src over dest how many letter n says.
 * @dest: bring a direction.
 * @src: bring a int.
 * @n: number of letters of the array to copy.
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *cont = dest;
	char *contsrc = src;
	int i;

	for (i = 0; i < n && *cont != '\0'; i++)
	{
		if (*contsrc != '\0')
		{
			*cont = *contsrc;
			contsrc++;
		}
		else
		{
			*cont = '\0';
		}
		cont++;
	}
	return (dest);
}
