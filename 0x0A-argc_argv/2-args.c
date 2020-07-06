#include "holberton.h"
#include <stdio.h>
/* more headers goes there */
/**
* main-print the name of the file,
*@argc: how long is the function
*@argv: porinter to the array of the function.
*Return: the return of finish file
*/

int main(int argc, char *argv[argc])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
