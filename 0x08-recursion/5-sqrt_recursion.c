#include "holberton.h"
/**
 * _sqrt_recursion - natural square root of a number
 * @n: number
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	int r = 1;

	r = _sqrt_recursion(r++);
	r++;

	if ((r * r) > n)
		return (-1);

	if ((r * r) == n)
		return (r);

	return (r);
}
