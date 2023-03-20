#include <stdio.h>

/**
  * main - main function
  *
  * Return: always 0
  */

int main(void)
{
	int m;
	int n;
	int i;

	for (m = 0 ; m < 10 ; m++)
	{
		for (n = 1 ; n < 10 ; n++)
		{
			for (i = 2 ; i < 10 ; i++)
			{
				if (m < n && n < i && m != n && n != i && m != i && m < i)
				{
					putchar(m + '0');
					putchar(n + '0');
					putchar(i + '0');
					if (m + n + i != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
