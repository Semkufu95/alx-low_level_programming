#include "function_pointers.h"
#include <stdio.h>

/**
  * print_name - function to print name using pointer to function
  * @name: input to be printed
  * @f: pointer to function
  * Return: nil
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
