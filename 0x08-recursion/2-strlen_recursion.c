#include "holberton.h"
#include <stdio.h>
/**
 * _strlen_recursion - return the length of a string
 * @s: the string
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}
	s++;
	i = i + _strlen_recursion(s);
	s--;
	i++;
	return (i);
}
