#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - function to allocate memory using malloc
  * @b: integer to store
  * Return: pointer of allocated memory
  * Exit with a value of 98
  */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(sizeof(unsigned int) * b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
