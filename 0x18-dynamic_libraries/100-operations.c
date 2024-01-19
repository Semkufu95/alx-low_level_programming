#include <stdio.h>

/* function to add integers */

int add(int a, int b)
{
	return(a + b);
}

/* function to substract two numbers */

int sub(int a, int b)
{
	return(a - b);
}

/* function to divide two integers */
int div(int a, int b)
{
	if (b != 0)
	{
		return(a / b);
	}
	else
	{
		printf("Error: Division by zero!\n");
		return(0);
	}
}

/* function to return modulo of two integers */

int mod(int a, int b)
{
	if (b != 0)
	{
		return(a % b);
	}
	else
	{
		printf("Error: Modulo by zero!\n");
		return(0);
	}
}


/* function to multiply two integers */
int mul(int a, int b)
{
	return(a * b);
}
