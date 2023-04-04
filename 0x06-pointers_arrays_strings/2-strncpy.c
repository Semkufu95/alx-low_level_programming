#include "main.h"

/**
  * _strncpy - copies a string
  * @src: source string
  * @dest: destination string
  * @n: number of bytes
  * Return: destination
  */

char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;

	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
