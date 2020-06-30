#include "holberton.h"
/**
 * *_memset - change all lowercase to uppercase.
 * @s: bring a direction.
 * @b: bring the byte.
 * @n: how many times in s, b is gonna be.
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*p = b;
		p++;
	}
	return (s);
}
