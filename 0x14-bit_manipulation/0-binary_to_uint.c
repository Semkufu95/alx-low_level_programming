#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @b: pointing string of 0 and 1
 * Return: converted number, if b is NULL return 0,
 * if there is one or more characters than 0 and 1 return 0.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;
	int k = 0;

	if (b == NULL)
	{
		return  (0);
	}
	while (b[k] != '\\0')
	{
		if (b[k] == '0' || b[k] == '1')
		{
			converted = converted << 1;

			if (b[k] == '1')
			{
				converted = converted | 1;
			}
			k++;
		}
		else
		return (0);
	}
	return (converted);
}
