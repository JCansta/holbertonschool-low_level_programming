#include "holberton.h"
/**
 * _strcat - wenas.
 * @dest: bring a direction.
 * @src: bring a int.
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	char *cont = dest;
	char *contsrc = src;

	while (*cont != '\0')
	{
		cont++;
	}

	while (*contsrc != '\0')
	{
		*cont = *contsrc;
		contsrc++;
		cont++;
	}
	return (dest);
}
