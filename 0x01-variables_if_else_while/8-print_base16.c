#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main-principal function, main function print all base hexadecimal digits
 * Return: the return of finish file
 */

int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
	{
	putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
	putchar(y);
	}
	putchar('\n');
	return (0);

}
