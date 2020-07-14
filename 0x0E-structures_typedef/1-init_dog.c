#include <stdio.h>
#include "dog.h"

/**
* init_dog - print the name of the file,
*@dog: structure dog.
*@name: name of the dog.
*@age: age of the dog.
*@owner: name of the owner.
*Return: the return of finish file
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
