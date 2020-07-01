#include "holberton.h"
/**
 * _strcpy - wenas.
 * @dest: bring a direction.
 * @src: bring a int.
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (*src == '\0')
		return(dest);
	do {
		dest[i] = src[i];
		i++;
	} while (src[i] != '\0');
	dest[i] = '\0';


	return (dest);
}
