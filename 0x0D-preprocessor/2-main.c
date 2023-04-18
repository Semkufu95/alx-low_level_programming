#include <stdio.h>

/**
  * main - This function prints the name of the file it was compiled from
  * Return: always 0 for success
  */

int main(void)
{
	printf("%s\n", _FILE_);

	return (0);
}
