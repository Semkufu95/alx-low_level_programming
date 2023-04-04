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
	char *_src = (char *)src;
	char *_dest = (char *)dest;

	int a = 0;

	for (; n > 0; a++)
	{
		_dest[a] = _src[a];
	}
	return (dest);
}

