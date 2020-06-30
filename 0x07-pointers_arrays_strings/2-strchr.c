#include "holberton.h"
/**
 * *_strchr - return array from c appears.
 * @s: a pointer.
 * @c: a letter to find on the array.
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
		{
			s = p;
			break;
		}
		p++;
	}

	if (*p == '\0')
	{
		s = '\0';
	}
	return (s);
}
