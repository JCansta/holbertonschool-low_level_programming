#include "holberton.h"
/**
 * *_memcpy - change all lowercase to uppercase.
 * @dest: bring a direction.
 * @src: bring the byte.
 * @n: how many times in s, b is gonna be.
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (dest);
}
