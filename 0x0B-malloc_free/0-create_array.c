#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function to create an array
  * @c: character to be printed
  * Return: a pointer to an array, NULL if size is 0
  * @size: size of an array
  */

char *create_array(unsigned int size, char c)
{
	unsigned int s;
	char *arry = malloc((sizeof(char)) * size);

	for (s = 0; s < size; s++)
	{
	arry[s] = c;
	}
	return (arry);
}
