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
	int x;

	if (n >= 0)
	{
	x = (n % 10);
	_putchar(x + '0');
	return (x);
	}
	else
	{
		x = (-n % 10);
		_putchar( x + '0');
		return (x);
	}
}
