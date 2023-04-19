#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
  * struct dog - defines a new type with specified elements of a structure
  * @name: input name of a dog
  * @age: input age of a dog
  * @owner: input name of dog's owner
  * Description: a structure that defines a dog with name, age and owner
  */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
