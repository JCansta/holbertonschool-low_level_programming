#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*free_dog - create new dog,
*@d: name tu save.
*Return: the return of finish file
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);
	free(d->name);
	free(d->owner);
	free(d);
}
