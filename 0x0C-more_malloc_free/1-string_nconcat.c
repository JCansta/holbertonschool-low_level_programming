#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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
	char *s;
	unsigned int l1, l2, i = 0;

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
	s = p;
	while (*s1 != '\0')
	{
		*s = *s1;
		s++;
		s1++;
	}
	while (i < n)
	{
		*s = *s2;
		s++;
		s2++;
		i++;
	}
	*s = '\0';
	return (p);
}
