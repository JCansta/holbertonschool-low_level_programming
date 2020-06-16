#include "holberton.h"
/* more headers goes there */
/**
* print_alphabet-principal function, function print all alphabet in lower case
* Return: the return of finish file
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
