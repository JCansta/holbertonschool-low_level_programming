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
	int x = 0;

	for (x; x <= 9;)
	{
	putchar(x + '0');
	x++;
	}
	putchar('\n');
	return (0);
}
