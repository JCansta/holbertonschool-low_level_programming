#ifndef DOG_H
#define DOG_H

/**
  * struct dog - structure for dog
  * @name: name of dog
  * @age: age of dog
  * @owner: name of owner of dog
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
  *dog_t - es el nuevo nombre que se le da a dog luego de usar typedef
  */
typedef struct dog dog_t; 
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
