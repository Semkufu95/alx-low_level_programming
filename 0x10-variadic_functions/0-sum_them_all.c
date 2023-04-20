#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - function to compute the sum of all parameters
  * @n: first integer(parameter) to be summed
  * Return: 0 if n is NULL else return sum
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int k;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	for (k = 0; k < n; k++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
