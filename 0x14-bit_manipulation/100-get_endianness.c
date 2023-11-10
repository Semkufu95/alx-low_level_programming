#include "main.h"

/**
 * get_endianness - function to determine endianness
 * Return: 0 for big endian and 1 for little endian
 */

int get_endianness(void)
{
	char *pntr;
	int value;

	value = 1;
	pntr = (char*) &value;

	return (*pntr);
}
