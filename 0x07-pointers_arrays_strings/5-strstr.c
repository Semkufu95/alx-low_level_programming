#include "main.h"

/**
 * _strstr - this function locates a substring
 * @haystack: string
 * @needle: occurence of substring
 * Return: pointer to the beginning of substring, otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return (0);
}
