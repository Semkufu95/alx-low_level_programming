#include "main.h"

/**
 * _strpbrk - A function that searches a string for any set of byte
 * @s: string
 * @accept: bytes in the string
 * Return: pointer to the byte in s that matches byte in accept,
 * or NULL if no such byte found
 */
char *_strpbrk(char *s, char *accept)
{
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
		if (*s == accept[c])
			return (s);
		}
	s++;
	}

	return ('\0');
}

