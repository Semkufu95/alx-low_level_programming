#include "main.h"

/**
  * _memcpy - fuctions that copies memory area
  * @src: source of memory area
  * @dest: destination of memory area
  * @n: number of bytes
  * Return: destination
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; b > a; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}

