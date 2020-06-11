#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * main-principal function, this say if a number is negative or positive
 * Return: the return of finish file
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive");
	}
	else
	{
		if (n < 0)
		{
			printf("is negative");
		}
		else
		{
			printf("is zero");
		}
	}
	return (0);
}
