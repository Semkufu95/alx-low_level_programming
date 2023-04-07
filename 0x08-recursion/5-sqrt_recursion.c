#include "main.h"

int perfect_sqrt_recursion(int n, int s);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (perfect_sqrt_recursion(n, 0));
}

/**
 * perfect_sqrt_recursion - find the natural square root of a number
 * @n: number to calculate the sqaure root of
 * @s: integer to loop
 * Return: natural square root, else return -1
 */

int perfect_sqrt_recursion(int n, int s)
{
	if (s * s > n)
		return (-1);
	if (s * s == n)
		return (s);
	return (perfect_sqrt_recursion(n, s + 1));
}

