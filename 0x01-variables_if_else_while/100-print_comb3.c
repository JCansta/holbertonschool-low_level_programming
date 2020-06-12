#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main-principal function, main function print numbers from 00 to 99
 * Return: the return of finish file
 */

int main(void)
{
	int x;
	int y;
	int i = 1;

	for (x = 0; x <= 8;)
	{
		for (y = i; y <= 9;)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x < 8 || y < 9)
			{
				putchar(',');
				putchar(' ');
			}
		y++;
		}
	i++;
	x++;
	}
	putchar('\n');
	return (0);
}
