#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * op_add - sum
 * @a: first value
 * @b: second value
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract
 * @a: first value
 * @b: second value
 * Return: substract of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplie
 * @a: first value
 * @b: second value
 * Return: multiplie a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide
 * @a: first value
 * @b: second value
 * Return: divide a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - mod
 * @a: first value
 * @b: second value
 * Return: mod
 */
int op_mod(int a, int b)
{
	return (a % b);
}
