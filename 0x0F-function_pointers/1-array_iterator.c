#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array element on a newline
 * @array: array
 * @size: size of an array
 * @action: pointer to a function to print an array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int b;

	if (array == NULL || action == NULL)
		return;

	for (b = 0; b < size; b++)
	{
		action(array[b]);
	}
}
