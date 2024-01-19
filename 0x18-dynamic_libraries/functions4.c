#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _strpbrk - bytes
 * @s: char pointer
 * @accept: char pointer
 * Return: Null
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}

/**
 * _strstr - function locate
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}

	return (0);
}

/**
 * _abs - return value
 * @n : the number to be checked
 * Return:0 or 1
 */
int _abs(int n)
{
	return (n >= 0 ? n : n * -1);
}

/**
 * *_strcpy - copies string pointed by src
 * @dest: char type string
 * @src: char type string
 * Description: copy sting pointed by src
 * buffer pointed to dest
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}

/**
 * _putchar - writes c character in the stdout
 * @c: its the character to be printed
 * Return: On success 1
 * On error, return -1 and set error appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
