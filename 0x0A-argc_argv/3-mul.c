#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */
/**
* main-print the name of the file,
*@argc: how long is the function
*@argv: porinter to the array of the function.
*Return: the return of finish file
*/

int main(int argc, char *argv[])
{
	int mult, y = 0;
	int x[2];

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	argc--;
	argv++;
	while (argc--)
	{
		x[y] = atoi(*argv);
		y++;
		argv++;
	}
	mult = x[0] * x[1];
	printf("%d\n", mult);
	return (0);
}
