#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - function to allocate memory using malloc
  * @b: integer to store
  * Return: pointer of allocated memory
  * Exit with a value of 98
  */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
