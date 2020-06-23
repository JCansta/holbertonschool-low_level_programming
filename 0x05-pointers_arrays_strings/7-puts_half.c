#include "holberton.h"

/**
 * puts_half - wenas.
 * @str: bring a direction.
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if ((i % 2) == 0)
	{
		i = i / 2;
		for (; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		i = (i - 1) / 2;
		for (; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
