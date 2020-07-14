#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog - print the name of the file,
*@d: structure dog.
*Return: the return of finish file
*/

dog_t *new_dog(char *name, float age, char *owner)
{	
	struct dog *n;
	n = malloc(sizeof(struct dog));
	if (n == NULL)
		return (NULL);
	n->name = name;
	n->age = age;
	n->owner = owner;
	return (n);
}
