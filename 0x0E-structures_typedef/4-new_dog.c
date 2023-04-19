#include "dog.h"
#include <stdlib.h>

/**
  * _strlen - function to return the length of string
  * @str: string
  * Return: length of a string
  */

int _strlen(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		k++;
	}
	return (k);
}

/**
  * _strcpy - function to copy string
  * @dest: destination string (string 2)
  * @src: source string (string 1)
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';
	return (dest);
}

/**
  * new_dog - function that creates a new dog
  * @name: input dog's name
  * @age: input dog's age
  * @owner: input dog owner's name
  * Return: NULL if function fails
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(_strlen(name) + 1);
	new_dog->owner = malloc(_strlen(owner) + 1);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);

	new_dog->age = age;
	return (new_dog);
}
