#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concatenate two strings
 * @s1: string one to concatenate
 * @s2: string two to concatenate
 * Return: content of s1 followed by s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *concatn;
	int m, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	m = n = 0;
	while (s1[m] != '\0')
		m++;
	while (s2[n] != '\0')
		n++;
	concatn = malloc(sizeof(char) * (m + n + 1));
	if (concatn == NULL)
		return (NULL);
	m = n = 0;
	while (s1[m] != '\0')
	{
		concatn[m] = s1[m];
		m++;
	}
	while (s2[n] != '\0')
	{
		concatn[m] = s2[n];
		m++, n++;
	}
	concatn[m] = '\0';
	return (concatn);
}
