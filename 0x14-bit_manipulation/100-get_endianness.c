#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *s = (char *) &k;

	if (*s == 1)
	{
		return (1); /*little endian */
	}
	else
		return (0); /* big endian */
}
