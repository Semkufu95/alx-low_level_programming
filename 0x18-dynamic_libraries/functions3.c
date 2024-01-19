#include "main.h"

/**
 * _islower - checks for lower case letter
 * @c : character to check the case
 * Return:0 or 1
 */
int _islower(int c)
{
	return (c >= 97 && c <= 122);

}

/**
 * _puts - prints str followed by a new line
 * @str: pointer to the string to point
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

/**
 * _strcmp - compares 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 0 if matching, and ns1 - ns2 if not matching
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}

/**
 * _strspn - gets the length of the prefix substring
 * @s: string where substring will look
 * @accept: substring of accepred chars
 * Return: length of occurance
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}

	return (c);
}

/**
 * _isalpha - checks if the letter is lower case
 * @c : character to check
 * Return:0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
