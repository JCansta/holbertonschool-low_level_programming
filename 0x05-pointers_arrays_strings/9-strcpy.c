#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - wenas.
 * @dest: bring a direction.
 * @src: bring a int.
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, n = 0;

	while (dest[n] == '\0')
		n++;

	do {
		dest[i] = src[i];
		i++;
	} while (src[i] != '\0');

	while ()
		dest[i] = '\0';

	return (dest);
}
