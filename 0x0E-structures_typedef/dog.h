#ifndef DOG_H
#define DOG_H

/**
  * struct dog - structure for dog
  * @name: name of dog
  * @age: age of dog
  * @owner: name of owner of dog
  */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} n_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

n_dog *new_dog(char *name, float age, char *owner);
#endif
