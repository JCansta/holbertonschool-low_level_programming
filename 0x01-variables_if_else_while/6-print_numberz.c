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
	int x;

	for(x=0 ; x < 10 ; x++)
	{
	putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
