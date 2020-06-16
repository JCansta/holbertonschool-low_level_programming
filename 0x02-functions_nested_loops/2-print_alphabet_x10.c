#include "holberton.h"
/* more headers goes there */
/**
* print_alphabet_x10-principal function,
*function print all alphabet in lower case
* Return: the return of finish file
*/

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0 ; j <= 10 ; j++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
