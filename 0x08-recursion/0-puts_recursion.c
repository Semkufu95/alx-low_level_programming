#include "main.h"

/**
  * _puts_recursion - This function prints a string
  * @s: string
  * Return: void
  */

void _puts_recursion(char *s)
{
	if (*s)
	{
		write(STDOUT_FILENO, s, 1);
		_putchar(s + 1);
	}
	else
	{
		write(STDOUT_FILENO, "\n", 1);
	}
}
