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

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
		{
		putchar(x);
		}
	}
	putchar('\n');
	return (0);

}
