#include "main.h"

/**
  * print_binary - prints the binary representation of a number
  * @n: number to be printed in binary
  */

void print_binary(unsigned long int n)
{
	int k;
	int binary = sizeof(unsigned long int) * 8;

	for (k = binary - 1; k >= 0; k--)
	{
		if ((n >> k) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
