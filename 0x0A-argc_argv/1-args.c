#include <stdio.h>

/**
* main-print the name of the file,
*@argc: how long is the function
*@argv: porinter to the array of the function.
*Return: the return of finish file
*/

int main(int argc, char *argv[])
{
	(void)*argv[argc];
	printf("%d\n", (argc - 1));
	return (0);
}
