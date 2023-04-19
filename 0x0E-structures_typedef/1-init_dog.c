#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: a pointer to struct dog
 * @name: input name of a dog
 * @age: input age of a dog
 * @owner: input name of dog's owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    d->name = name;
    d->age = age;
    d->owner = owner;
}
