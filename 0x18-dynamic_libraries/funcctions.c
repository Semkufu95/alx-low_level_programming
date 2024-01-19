#include "main.h"

/**
 * _isupper - checks if the character is uppercase
 * @c: is the int used for the argument of the function.
 * Return: 1 if uppercase character 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

/**
 * _memset - fills n bytes
 * @s: pointer to the char parameters
 * @b: data to change
 * @n: index
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return(s);
}

/**
 * _strcat - concatenates two strings
 * @dest: pointer destination
 * @src: source of pointer
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0'; i++)
	;
	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');

	return (dest);
}


/**
 * _isdigit - prints the code
 * @c: int to be checked
 * Return: successful digit is 1 is 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _memcpy - copies n bytes to the pointer of a pointer
 * @dest: pointer to char parameters
 * @src: pointer to char params
 * @n: size
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
