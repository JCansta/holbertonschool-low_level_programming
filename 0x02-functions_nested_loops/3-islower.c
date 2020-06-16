#include "holberton.h"
/* more headers goes there */
/**
* _islower-prototype function,
*function print 1 if the char is lowercase
*@c: is the letter coming from another finction
*Return: the return of finish file
*/

int _islower(int c)
{
	int x;

	if (c >= 'a' && c <= 'z')
	{
	x = 1;
	}
	else
	{
	x = 0;
	}
	return (x);
}
