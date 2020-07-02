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
