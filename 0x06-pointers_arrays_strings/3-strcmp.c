#include "main.h"

/**
  * _strcmp - custom compares two strings
  * Return: 0 if string is null else return compared string
  * @s1: string one
  * @s2: string two to compare
  */

int _strcmp(char *s1, char *s2)
{
	int k;

	for (k = 0; s1[k] == s2[k]; k++)
	{
		if (s1[k] == '\0')
			return (0);
	}
	return (s1[k] - s2[k]);
}
