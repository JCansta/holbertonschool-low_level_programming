#include "holberton.h"

/* more headers goes there */
/**
*jack_bauer-prototype function,
*function print 1 if the char is a letter
*Return: the return of finish file
*/

void jack_bauer(void)
{
	int n;

	for (int i = '0'; i <= '2'; i++)
	{
		if (i != '2')
		{
			n = '9';
		}
		else
		{
			n = '3';
		}

		for (int j = '0'; j <= n; j++)
		{
			for (int k = '0'; k <= '5'; k++)
			{
				for (int l = '0'; l <= '9'; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
