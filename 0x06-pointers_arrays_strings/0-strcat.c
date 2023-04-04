#include "main.h"

/**
  * _strcat - This function concatenate two strings
  * @src - source string
  * @dest - destination string
  *
  * Return: destination string
  */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++; b++;
	}
	return (dest);
}
