#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */
/**
* main-print the name of the file,
*@argc: how long is the function
*@argv: porinter to the array of the function.
*Return: the return of finish file
*/

int main(int argc, char *argv[])
{
	int sum = 0, val;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	argv++;
	argc--;
	while (argc--)
	{
		if (atoi(*argv) == 0 && *argv[0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		val = atoi(*argv);
		sum = sum + val;
		argv++;
	}
	printf("%d\n", sum);
	return (0);
}
