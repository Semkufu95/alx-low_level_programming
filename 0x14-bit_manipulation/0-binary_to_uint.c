#include "main.h"
#include <stddef.h>

/**
 *  binary_to_uint - converts binary numbers to unsigned integers
 *  @b: pointing string to 0 and 1.
 *  Return: converted number, if b is NULL it returns 0, If there is
 *  one or more characters than 0 and 1 it returns 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convrtd = 0;
	int k = 0;

	if (b == NULL)
		return (0);
	while (b[k] != '\0')
	{
	if (b[k] == '0' || b[k] == '1')
	{
		convrtd = convrtd << 1;
		if (b[k] == '1')
		{
			convrtd = convrtd | 1;
		}
		k++;
	}
	else
		return (0);
	}
	return (convrtd);
}

