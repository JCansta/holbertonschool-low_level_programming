#include "holberton.h"
#include <stdio.h>
/**
 * _print_rev_recursion - print a string followd by a new line
 * @s: the string
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
