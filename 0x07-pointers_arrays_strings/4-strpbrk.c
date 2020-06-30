#include "holberton.h"
/**
 * _strpbrk - pasa por toda la cadena S y busca la priemra ocurrencia de accept.
 * @s: la cadena.
 * @accept: la subcadena
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	char *p = s;
	char *str2 = accept;

	while (*p != '\0')
	{
		str2 = accept;
		while (*str2 != '\0')
		{
			if (*p == *str2)
				return (p);

			str2++;
		}
		p++;
	}
	return (0);
}
