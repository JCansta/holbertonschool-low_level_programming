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
	int x = 0;
	int y;

	for (x; x <= 9;)
	{
		for (y = 0; y <= 9;)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x < 9 || y < 9)
			{
				putchar(',');
				putchar(' ');
			}
		y++;
		}
	x++;
	}
	putchar('\n');
	return (0);
}
