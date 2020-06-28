#include "holberton.h"
/**
 * print_number - change all lowercase to uppercase.
 * @n: bring a direction.
 * Return: Always 0.
 */

void print_number(int n)
{
	int x, div = 10000, mod = 10;
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	while (div != 0 && n > 9)
	{
		x = n;
		if (n >= div)
		{
			x = x / div;
			x = x % mod;
			_putchar(x + '0');
			div = div / 10;
		}
		else
		{
			div = div / 10;
		}
	}
	if (n < 10)
		_putchar(n + '0');
}
