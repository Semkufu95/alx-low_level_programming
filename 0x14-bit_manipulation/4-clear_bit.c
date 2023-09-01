#include "main.h"

/**
 * clear_bit - sets(restore) the value of a given bit to 0
 * @n: A pointer to the number of bit to be cleared
 * @index:mLocation of the bit to clear
 * Return: 1 for success and -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}
