#include "holberton.h"

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
