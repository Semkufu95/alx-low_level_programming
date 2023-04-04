#include "main.h"

/**
  * _strncat - A function that concatenates two strings without null terminator
  *
  * @src: source code
  * @dest: destination code
  * @n: number of bytes
  * Return: destination (dest)
  */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
