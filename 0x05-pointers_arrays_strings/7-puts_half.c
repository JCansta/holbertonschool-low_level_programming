#include "holberton.h"

/**
 * puts_half - wenas.
 * @str: bring a direction.
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i = 0, n;

	while (str[i] != '\0')
	{
		i++;
	}

	if ((i % 2) == 0)
	{
		n = i / 2;
		for (; str[n] != '\0'; n++)
			_putchar(str[n]);
	}
	else
	{
		n = (i - 1) / 2;
		for (; str[n] != '\0'; n++)
			_putchar(str[n]);
	}
	_putchar('\n');
}
