#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function to concatenate two strings
 * @s1: string one to concatenate
 * @s2: string two to concatenate
 * @n: number of bytes of s2
 * Return: content of s1 followed by s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatn;
	unsigned int len1, len2, x, y;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		concatn = malloc(sizeof(char) * (len1 + n + 1));
	else
		concatn = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!concatn)
		return (NULL);
	while (x < len1)
	{
		concatn[x] = s1[x];
		x++;
	}
	while (n < len2 && x < (len1 + n))
		concatn[x++] = s2[y++];
	while (n >= len2 && x < (len1 + len2))
		concatn[x++] = s2[y++];
	concatn[x] = '\0';
	return (concatn);
}
