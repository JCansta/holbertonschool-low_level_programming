#include "holberton.h"
/* more headers goes there */

/**
 * main-principal function, main function print a phrase
 * Return: the return of finish file
 */

int main(void)
{
	int i=0;
	char string[] = "Holberton\n";

	while(string[i]!='\0')
	{
		_putchar(string[i]);
		i++;
	}
	return (0);
}
