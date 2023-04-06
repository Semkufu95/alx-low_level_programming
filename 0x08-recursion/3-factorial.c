#include "main.h"

/**
  * factorial - This function returns factorial of a number
  * @n: an integer
  * Return: -1 for n < 0
  */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
