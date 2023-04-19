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

/**
  * new_dog - a function that create a new detail of a struct dog
  * @name: input name of dog
  * @age: input age of dog
  * @owner: input name of dog's owner
  * Return: NULL if memory allocation fail, pointer to new detail of struct dog
  */
struct dog *new_dog(char *name, char *owner, float age)
{
	struct dog *my_dog;

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
