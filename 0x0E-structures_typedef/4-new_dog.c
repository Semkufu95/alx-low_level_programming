#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - function that creates a new dog
  * @name: input dog's name
  * @age: input dog's age
  * @owner: input dog owner's name
  * Return: NULL if function fails
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
