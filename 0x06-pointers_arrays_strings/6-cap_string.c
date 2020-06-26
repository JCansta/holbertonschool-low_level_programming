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

	while (*count != '\0')
	{
		i = 0;
		val = 0;
		while (car[i] != '\0')
		{
			if (*count == car[i])
			{
				val = 1;
				break;
			}
			i++;
		}
		if (val == 1 && (*(count + 1)  >= 'a' && *(count + 1) <= 'z'))
		{
			*(count + 1) = *(count + 1) - 32;
		}
		count++;
	}
	return (s);
}
