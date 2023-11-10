#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, flipped = 0;
	unsigned long int cast;
	unsigned long int flow = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		cast = flow >> k;
		if (cast & 1)
		{
			flipped++;
		}
	}
	return (flipped++);
}
