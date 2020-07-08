#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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



/**
 * str_concat - concatenate 2 strings
 * @s1: first string
 * @s2: second string.
 * Return: concatenate string.
 */

char *str_concat(char *s1, char *s2)
{
	int sum, i = 0, d = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	sum = _strlen(s1) + _strlen(s2);

	p = (char *) malloc((sum * sizeof(char)) + 1);

	if (p == NULL)
		return (NULL);

	while (i < sum)
	{
		if (i < _strlen(s1))
		{
			p[i] = s1[i];
		}
		else
		{
			p[i] = s2[d];
			d++;
		}

		i++;
	}

	return (p);
}
