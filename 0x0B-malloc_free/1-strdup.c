#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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
		return (dest);
	do {
		dest[i] = src[i];
		i++;
	} while (src[i] != '\0');
	dest[i] = '\0';


	return (dest);
}

/**
 *_strlen - chekc if char is upper
 *@s: give the pointing direction
 *Return: Always 0.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/* more headers goes there */
/**
*_strdup - return a pointer to a new allocated space
*@str: give us the leng of the array
*Return: the pointer to the new string
*/

char *_strdup(char *str)
{
	char *dst = malloc(_strlen(str) + 1);

	if (dst == NULL)
		return (NULL);
	if (dst == NULL)
	{
		return (NULL);
	}
	_strcpy(dst, str);

	return (dst);
}
