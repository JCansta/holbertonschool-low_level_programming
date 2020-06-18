#include "holberton.h"

/**
 *_isdigit - chekc if char is upper
 *@c: value of char
 *Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
