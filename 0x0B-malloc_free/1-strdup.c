#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a new allocated space
 * @str: character
 * Return: NULL if string is NULL
 */

char *_strdup(char *str)
{
	char *arry;
	int m, n = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	m = 0;

	while (str[m] != '\0')
		m++;
	{
		arry = malloc((sizeof(char)) * (m + 1));
	}
	if (arry == NULL)
	{
	return (NULL);
	}
	for (n = 0; str[n]; n++)
	{
	arry[n] = str[n];
	}
	return (arry);
}

