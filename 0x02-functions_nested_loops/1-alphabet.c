#include "main.h"


/**
  * print_alphabet - function that prints alphabet in lowercase
  *
  * Return: always return 0
  */

void print_alphabet(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		_putchar(x);
	_putchar('\n');
}
