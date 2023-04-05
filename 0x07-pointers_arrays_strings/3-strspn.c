#include "main.h"
/**
 * _strspn - Entry point
 * @s: initial segment
 * @accept: prefix substring
 * Return: number of byte of initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				k++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (k);
		}
		s++;
	}
	return (k);
}

