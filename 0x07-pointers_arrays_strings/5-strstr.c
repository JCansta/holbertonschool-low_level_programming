#include "holberton.h"
/**
 * _strstr - busca la primera ocurencia de la subcadena
 * needle en haystack
 * @haystack: la cadena.
 * @needle: la subcadena
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	char *str1 = haystack;
	char *str2 = needle;
	char *save;
	int val = 0;

	if (*str2 == '\0')
		return (needle);
	while (*str1 != '\0')
	{
		str2 = needle;
			if (*str1 == *str2)
			{
				save = str1;
				while (*str2 != '\0' && *str1 == *str2)
				{
					str1++;
					str2++;
					if (*str2 == '\0')
					{
						val = 1;
					}
				}
				if (val == 1)
					return (save);
			}
		str1++;
	}
	return (needle);

}
