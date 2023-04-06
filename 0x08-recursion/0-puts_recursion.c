#include "main.h"

/**
  * _puts_recursion - This function prints a string
  * @s: string
  * Return: void
  */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
