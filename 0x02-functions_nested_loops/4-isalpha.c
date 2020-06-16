#include "holberton.h"
/* more headers goes there */
/**
* _isalpha-prototype function,
*function print 1 if the char is a letter
*@c: this give us a letter
*Return: the return of finish file
*/

int _isalpha(int c)
{
	int x;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		x = 1;
	}
	else
	{
		x = 0;
	}
	return (x);
}
