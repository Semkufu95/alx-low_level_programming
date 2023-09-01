#include "main.h"
#include <stddef.h>

/**
 * print_binary - function that prints binary representation of number
 * @n: A number to be printed in binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
