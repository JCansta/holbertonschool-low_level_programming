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
	int z;
        int i = 1;
	int a = 2;

	for (x = 0; x <= 7;)
	{
		for (y = i; y <= 8;)
		{
			for (z = a; z <= 9;)
			{
			putchar(x + '0');
			putchar(y + '0');
			putchar(z + '0');
				if (x < 7 || y < 8 || z < 9)
				{
					putchar(',');
					putchar(' ');
				}
			z++;
			}
		y++;
		}
	a++;
	i++;
	x++;
	}
	putchar('\n');
	return (0);
}
