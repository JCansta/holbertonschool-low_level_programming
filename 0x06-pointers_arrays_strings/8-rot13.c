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
		if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
		{
			for (i = 0; i < 13; i++)
			{
				if ((*p >= 'a' && *p + 1 <= 'z') || (*p >= 'A' && *p + 1 <= 'Z'))
					*p = *p + 1;
				else
					*p = *p - 25;
			}
		}
		p++;
	}
	return (s);
}