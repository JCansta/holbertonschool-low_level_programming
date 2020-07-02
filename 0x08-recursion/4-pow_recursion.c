#include "holberton.h"
/**
 * _pow_recursion - square of number
 * @x: number
 * @y: number
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	y--;
	x = x * _pow_recursion(x, y);
	return (x);
}
