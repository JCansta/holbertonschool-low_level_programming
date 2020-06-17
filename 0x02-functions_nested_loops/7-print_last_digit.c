#include "holberton.h"

/* more headers goes there */
/**
*print_last_digit-prototype function,
*@n: this letter give us a any number
*function print 1 if the char is a letter
*Return: the return of finish file
*/

int print_last_digit(int n)
{
	if (n >= 0)
	{
		n = (n % 10);
	}
	else
	{
		n = -1 * (n % 10);
	}
	_putchar(n + '0');
	return (n);
}
