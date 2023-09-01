#include "main.h"

/**
 * flip_bits - Counts the number of bits to change from one to another
 * @n: first number
 * @m: second number
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int T, fliped = 0;
	unsigned long int cast;
	unsigned long int flow = n ^ m;

	for (T = 63; T >= 0; T--)
	{
		cast = flow >> T;
		if (cast & 1)
		{
			fliped++;
		}
	}
	return (fliped++);
}
