#include <stdio.h>
#include "dog.h"

/**
* init_dog - print the name of the file,
*@dog: structure dog.
*Return: the return of finish file
*/

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

}
