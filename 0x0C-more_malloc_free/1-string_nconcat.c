#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncat - give a concatenate string.
 * @p: where two string is gonna locate.
 * @dest: bring a direction.
 * @src: bring a int.
 * @n: number of letters of the array to copy.
 * Return: Always 0.
 */

void *_strncat(char *p, char *dest, char *src, int n)
{
	int i;

	while (*dest != '\0')
	{
		*p = *dest;
		p++;
		dest++;
	}
	while (i < n)
	{
		*p = *src;
		p++;
		src++;
		i++;
	}

	*p = '\0';

	return (p);
}

/**
 *_strlen - chekc the nuber of elements of a array
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
 *string_nconcat - concatenate 2 strings
 *@s1:first string
 *@s2:second string
 *@n:number of bytes second string
 *Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int l1, l2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l1 = _strlen(s1);
	l2 = _strlen(s2);

	if (n >= l2)
		n = l2;

	p = malloc((sizeof(char) * l1) + (sizeof(char) * n) + 1);

	if (p == NULL)
		return (NULL);

	_strncat(p, s1, s2, n);
	return (p);
}
