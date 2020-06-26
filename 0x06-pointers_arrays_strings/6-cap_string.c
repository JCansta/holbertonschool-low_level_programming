#include "holberton.h"
/**
 * *cap_string - change all lowercase to uppercase.
 * @s: bring a direction.
 * Return: Always 0.
 */

char *cap_string(char *s)
{
	char *count = s;
	char car[] = {' ', '\t', '\n', ',', ';', '?', '"', '(', ')', '{', '}'};
	int i, val;

	if (*count >= 'a' && *count <= 'z')
		*count = *count - 32;

	count++;
	while (*count != '\0')
	{
		i = 0;
		val = 0;
		while (car[i] != '\0')
		{
			if (*(count - 1) == car[i])
			{
				val = 1;
				break;
			}
			i++;
		}
		if (val == 1 && (*count  >= 'a' && *count <= 'z'))
		{
			*count = *count - 32;
		}
		count++;
	}
	return (s);
}
