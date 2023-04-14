#include "main.h"
#include <stdlib.h>

/**
 * str_nconcat - function to concatenate two strings
 * @s1: string one to concatenate
 * @s2: string two to concatenate
 * @n: number of bytes of s2
 * Return: content of s1 followed by s2, and null terminated
 */

char *str_concat(char *s1, char *s2, unsigned int n)
{
	char *concatn;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	concatn = malloc(sizeof(char) * len1 + len2 + 1);
	if (concatn == NULL)
		return (NULL);
	len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		concatn[len1] = s1[len1];
		len1++;
	}
	if (n >= len2)
	{
		concatn[len2] = s2[len2];
		len1++, len2++;
	}
	while (len2 == '\0')
	{
		s2 = "";
	}
	concatn[len1] = '\0';
	return (concatn);
}
