#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*new_dog - create new dog,
*@name: name tu save.
*@age: age to save.
*@owner: owner to save.
*Return: the return of finish file
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *n;

	if(name == NULL || owner == NULL)
		return (NULL);
	n = malloc(sizeof(struct dog));
	if (n == NULL)
		return (NULL);
	n->name = name;
	n->age = age;
	n->owner = owner;
	return (n);
}
