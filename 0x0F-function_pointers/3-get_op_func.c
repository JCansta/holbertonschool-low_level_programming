#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"
/**
 * get_op_func - search for the correct function
 * @s: operator to loof the function
 * Return: Always 0.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
	int i;

	i = 0;
	while (ops[i].op != NULL && (*s != *ops[i].op))
	{
		i++;
	}
	if (ops[i].op == NULL)
		return (NULL);
	return (ops[i].f);
}
