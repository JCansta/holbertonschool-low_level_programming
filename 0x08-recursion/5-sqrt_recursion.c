#include "holberton.h"
/**
 * _sqrt_recursion - natural square root of a number
 * @n: number
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	int r = 1;

	r = sqrt_fun(r, n);

	return (r);
}
/**
 * sqrt_fun - search for the root
 * @r: r to find the root
 * @i: same n of the function
 * Return: return the number if is a natural root
 */
int sqrt_fun(int r, int i)
{
	if ((r * r) > i)
		return (-1);
	if ((r * r) == i)
		return (r);
	r++;
	r = sqrt_fun(r, i);
	return (r);
}
