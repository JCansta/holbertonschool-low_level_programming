#include "holberton.h"

/* more headers goes there */
/**
*times_table-prototype function,
*function print 1 if the char is a letter
*Return: the return of finish file
*/

void times_table(void)
{
	int mult;
	int dec;

	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			mult = i * j;
			if (mult >= 10)
			{
			_putchar(mult / 10 + '0');
			dec = mult % 10;
			_putchar(dec + '0');
			}
			else
			{
				_putchar(mult + '0');
			}

			if (j == 9)
			{
			}
			else
			{
				if (i * (j + 1) >= 10)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}

