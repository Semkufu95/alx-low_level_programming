#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @mem: memory area to be filled
 * @c: char to copy
 * @num: number of times to copy b
 * Return: pointer to the memory area s
 */

char *_memset(char *mem, char c, unsigned int num)

{
	unsigned int k;

	for (k = 0; k < num; k++)
	{
		mem[k] = c;
	}
	return (mem);
}

/**
 * _calloc - allocates memory of an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arry;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arry = malloc(size * nmemb);
	if (arry == NULL)
		return (NULL);
	_memset(arry, 0, nmemb * size);
	return (arry);
}
