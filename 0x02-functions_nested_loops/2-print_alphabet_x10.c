#include "main.h"

/**
  * print_alphabet_x10 - print alphabet 10 times in lower case
  *
  * Return: always 0
  */

void print_alphabet_x10(void)
{
	int x;
	char m;

	for (x = 1 ; x <= 10 ; x++)
	{
		for (m = 'a' ; m <= 'z' ; m++)
			_putchar(m);
		_putchar('\n');
	}
}
