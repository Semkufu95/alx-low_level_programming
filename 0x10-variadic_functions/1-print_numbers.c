#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - function that prints numbers
  * @n: number of integers passed to the function
  * @separator: string to be printed between lines
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int k;

	va_start(args, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(args, int));
	if (separator != NULL)
	{
		printf("%s", separator);
	}
	}
	va_end(args);

	printf("\n");
}
