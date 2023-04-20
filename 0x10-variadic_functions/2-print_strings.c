#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings - function that prints strings
  * @n: number of strings passed to the function
  * @separator: string to be printed between lines
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list args;
        char k;

        va_start(args, n); 

        for (k = 0; k < n; k++)
        {
                printf("%d", va_arg(args, int));
        if (separator != NULL)
        {
                printf("%s", separator);
        }
        }   
        va_end(args);

        printf("\n");
}
