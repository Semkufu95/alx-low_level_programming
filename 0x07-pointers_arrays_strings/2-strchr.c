#include "main.h"

/**
 * _strchr - Locate a character in a string
 * @s: string
 * @c: character
 * Return: first occurence of c in s
 */

char *_strchr(char *s, char c)
{
	int z = 0;

	for (; s[z] >= '\0'; z++)
	{
		if (s[z] == c)
			return (&s[z]);
	}
	return (0);
}

