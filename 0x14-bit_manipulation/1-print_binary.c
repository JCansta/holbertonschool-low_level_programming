#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
/**
 *print_binary - print the binary representation of a number.
 *@n: values of arguments
 *Return: nothing
 */

void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8, val = 0, count = 0;
	unsigned long int checker;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (count < size)
	{
		checker = (n << 1);
		checker >>= 1;
		if (checker != n)
		{
			_putchar('1');
			val = 1;
		}
		if (checker == n && val == 1)
		{
			_putchar('0');
		}
		n <<= 1;
		count++;
	}
}
