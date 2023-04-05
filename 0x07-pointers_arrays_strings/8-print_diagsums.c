#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: array
 * @size: size of int
 * Return:0 if Success
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, num;

	sum1 = 0;
	sum2 = 0;

	for (num = 0; num < size; num++)
	{
		sum1 = sum1 + a[num * size + num];
	}

	for (num = size - 1; num >= 0; num--)
	{
		sum2 += a[num * size + (size - num - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
