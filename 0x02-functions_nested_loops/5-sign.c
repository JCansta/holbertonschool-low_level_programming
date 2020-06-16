#include "holberton.h"
/* more headers goes there */
/**
*print_sign-prototype function,
*function print 1 if the char is a letter
*@n: this give us a number
*Return: the return of finish file
*/

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
	}
}
