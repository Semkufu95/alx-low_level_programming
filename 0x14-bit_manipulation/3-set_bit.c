#include "main.h"

/**
 * set_bit - sets a bit at a provide index to 1
 * @n: Pointer to the number
 * @index: location(index) of the bit
 * Return: -1 for error, 1 for success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	return (1);
}
