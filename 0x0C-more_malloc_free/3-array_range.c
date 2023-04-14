#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *arry;
	int num, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arry = malloc(sizeof(int) * size);
	if (arry == NULL)
		return (NULL);
	for (num = 0; min <= max; num++)
		arry[num] = min++;
	return (arry);
}
