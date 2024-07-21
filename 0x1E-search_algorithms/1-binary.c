#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binAry_search - function to search by using binary method
 * @size: number of elements in an array
 * @value: The value to be searched for
 * @array: a pointer to the first element of an array
 * @Return: Return value else -1
 */

int binary_search(int *array, size_t size, int value)
{
    size_t left = 0;
    size_t right = size - 1;
    size_t median;
    size_t k;

    if (!array)
      return (-1);

    while (left <= right)
    {
        median = left + (right - left) / 2;
        printf("Searching in array: ");
        for (k = left; k<= right; k++)
        {
	    printf("%d", array[k]);
	    if (k < right)
	        printf(", ");
	    else
	        printf("\n");
        }
        if (array[median] == value)
	    return (median);
        if (array[median] < value)
	    left = median + 1;
        else
       	    right = median - 1;
    }
    return (-1);
}
