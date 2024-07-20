#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

 /**
  * linear_search - function to search for a value in an array
  * @array: pointer to the first element of an array
  * @size: number of elements in an array
  * @value: Value to search for
  * Return: return -1 if value not present
  */

int linear_search(int *array, size_t size, int value)
{
  size_t k = 0;

  for (k = 0; k < size; k++)
  {
    printf("Value checked array[%ld] = [%d]\n", k, array[k]);
    if (array[k] == value)
      return (k);
  }
  return (-1);
}
