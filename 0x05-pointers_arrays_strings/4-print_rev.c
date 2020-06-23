#include "holberton.h"

/**
 *print_rev - print in rev
 *@s: give the pointing direction
 *Return: Always 0.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	i--;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
