#include "holberton.h"
/**
 * _strspn - muestra la longitud de una subcadena dentro de una cadena.
 * @s: la cadena.
 * @accept: la subcadena
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	char *str1 = s;
	char *str2 = accept;
	int i, max = 0;
	if (*str1 == '\0')
		return (0);

	while (*str1 != '\0')
	{
		while (*str2 != '\0')
		{
			if (*str1 == *str2)
			{
				i = 1;
				str2 = accept;
				while (*str2 != '\0')
				{
					if (str2 == accept)
						str1++;

					if (*str2 == *str1)
					{
						i++;
						str2 = accept;
					}
					else
						str2++;

				}
				if (i > max)
					max = i;
			}
			str2++;
		}
		str2 = accept;
		str1++;
	}
	return (max);
}
