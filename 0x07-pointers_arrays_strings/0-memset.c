#include "main.h"

/**
  * _memset - this function fills memory with a constant byte
  * @s: memory area
  * @b: constant byte
  * @n: number of bytes
  * Return: pointer to memory s
  */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
