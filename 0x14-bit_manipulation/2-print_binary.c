#include "main.h"
#include <stddef.h>

/**
 * print_binary - function that prints binary representation of number
 * @n: A number to be printed in binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int k;
	int binary = sizeof(unsigned long int) * 8;
	int print_flag = 0; /* To skip leading zeros */

	for (k = binary - 1; k >= 0; k--)
	{
		if ((n >> k) & 1)
		{
			_putchar('1');
			print_flag = 1;
		}
		else if (print_flag)
		{
			_putchar('0');
		}
		if (!print_flag)
		{
			_putchar('0');
		}
	}
}
