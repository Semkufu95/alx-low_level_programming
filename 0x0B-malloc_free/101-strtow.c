#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */

int count_word(char *s)

{
	int token, a, word;

	token = 0;
	word = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			token = 0;
		else if (token == 0)
		{
			token = 1;
			word++;
		}
	}
	return (word);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, j = 0, len = 0, words, a = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (a)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (a + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[j] = tmp - a;
				j++;
				a = 0;
			}
		}
		else if (a++ == 0)
			start = i;
	}
	matrix[j] = NULL;
	return (matrix);
}
