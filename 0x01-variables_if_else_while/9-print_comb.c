#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main-principal function, main function print all letter of alphabet
 * Return: the return of finish file
 */

int main(void)
{
	int x = '0';

	for (x; x <= '9'; x++)
	{
	putchar(x);
	if (x < '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
