#include "main.h"

int primenum(int n, int p);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primenum(n, n - 1));
}

/**
 * primenum - calculates if a number is prime recursively
 * @n: number to evaluate
 * @p: integer to loop
 * Return: 1 if n is prime number, 0 if not
 */
int primenum(int n, int p)
{
	if (p == 1)
		return (1);
	if (n % p == 0 && p > 0)
		return (0);
	return (primenum(n, p - 1));
}

