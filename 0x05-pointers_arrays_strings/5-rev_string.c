#include "holberton.h"

/**
 *rev_string - print in rev
 *@s: give the pointing direction
 *Return: Always 0.
 */

void rev_string(char *s)
{
	int i = 0, k = 0;

	while (s[i] != '\0') /*esto busca el tamaño del array*/
	{
		i++;
	}

	char rev[i];

	i--;

	for (; i >= 0; i--) /*usando el tamaño del array comienzo desde el final*/
	{
		rev[k] =  s[i];
		k++;
	}

	i = 0;

	while (i < k) /*aqui ya usando el array invertido lo devuelvo al original*/
	{
		s[i] = rev[i];
		i++;
	}
}
