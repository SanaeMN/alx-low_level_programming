#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - function that prints strings.
* @separator: the string to be printed.
* @n: number of strings.
* Return: the strings.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(ap);
	printf("\n");
}
