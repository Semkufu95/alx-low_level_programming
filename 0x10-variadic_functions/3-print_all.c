#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_all - function that prints anything
  * @format: list of type of arguments passed
  *
  */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *strng, *separator = "";

	va_start(args, format);

	if (format)
	{
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				strng = va_arg(args, char *);
				if (strng == NULL)
					strng = "(nil)";
				printf("%s%s", separator, strng);
				break;
			default:
				i++;
			continue;
		}
		separator = ",";
		i++;
	}
	}
	printf("\n");
	va_end(args);
}
