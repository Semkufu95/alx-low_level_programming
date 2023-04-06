#include "main.h"

/**
  * _pow_recursion - function to compute power expression
  * @x: base of expression
  * @y: exponent of expression
  * Return: if y < 0 return -1
  */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
