#include "holberton.h"
#include <stdio.h>
/**
 * _puts_recursion - print a string followd by a new line
 * @s: the string
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
