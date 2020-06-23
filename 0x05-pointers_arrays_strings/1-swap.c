#include "holberton.h"

/**
 *swap_int - chekc if char is upper
 *@a: give the pointing direction
 *@b: give the pointing direction
 *Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;

}
