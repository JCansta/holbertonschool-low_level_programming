#include "holberton.h"
/**
 * string_toupper - change all lowercase to uppercase.
 * @s: bring a direction.
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
	char *up = s;

	while (*up != '\0')
	{
		if (*up >= 'a' && *up <= 'z')
		{
			*up = *up - 32;
		}
		up++;
	}
	return (s);
}
