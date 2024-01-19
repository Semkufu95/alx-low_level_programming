#include "main.h"

/**
 * *_strncat - oncatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_leng, i;

	for (dest_leng = 0; dest[dest_leng] != '\0'; dest_leng++)
	;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_leng + i] = src[i];

	/*should end with a end of string char*/
	dest[dest_leng + i] = '\0';

	return (dest);
}

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */
int _atoi(char *s)
{
	int i;
	int res = 0;
	int sig = -1;
	int brk = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sig = sig * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10;
			res -= (s[i] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	res = sig * res;
	return (res);
}


/**
 * _strchr - prints found c
 * @s: pointer to the char
 * @c: char parameters to be found
 * Return: *s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}

/**
 * _strlen - finds the length of the string
 * @s: pointer for the string to be checked
 * Return: void
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}


/**
 * *_strncpy - finds the length of the string
 * @dest: pointer to the string
 * @src: pointer
 * @n: int
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
