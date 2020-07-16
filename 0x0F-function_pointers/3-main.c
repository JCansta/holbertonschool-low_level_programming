#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
#include "3-calc.h"
/**
 * main - check the code for Holberton School students.
 * @av: number of arguments
 * @ar: arguments
 * Return: Always 0.
 */
int main(int av, char **ar)
{
	int num1 = atoi(ar[1]), num2 = atoi(ar[3]);
	int value;
	int (*p)(int, int);

	if (av != 4)
	{
		printf("Error\n");
		exit(98);
	}

	p = (*get_op_func)(ar[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*ar[2] == '/' || *ar[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	value = (*p)(num1, num2);

	printf("%d\n", value);

	return (0);
}
