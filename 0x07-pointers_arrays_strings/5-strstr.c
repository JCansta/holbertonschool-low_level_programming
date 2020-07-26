#include "holberton.h"
#include <stdlib.h>
/**
 * _strstr - busca la primera ocurencia de la subcadena
 * needle en haystack
 * @haystack: la cadena.
 * @needle: la subcadena
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, save;
	char *null = "nil";

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[0])
		{
			save = i;
			while (haystack[i] == needle[j])
			{
				if (needle[j + 1] == '\0')
					return (&haystack[save]);
				j++;
				i++;
			}
			i = save;
		}
		i++;
	}
	return (null);
}
