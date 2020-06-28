#include "holberton.h"
/**
 * *rot13 - change all lowercase to uppercase.
 * @s: bring a direction.
 * Return: Always 0.
 */

char *rot13(char *s)
{
	char *p = s;
	int i;

	while (*p != '\0')
	{
		for (i = 0; i < 13 && ((*p >= 'a' && *p <= 'z') ||
					(*p >= 'A' && *p <= 'Z')); i++)
		{
			if ((*p == 'z' || *p == 'Z') && i < 13)
				*p = *p - 26;
			*p = *p + 1;
		}
		p++;
	}
	return (s);
}
