#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string of char
 * @n: unsigned int
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	for (; i < n; i++)
	{
		if (va_arg(ap, char*))
			printf("%s", va_arg(ap, char*));
		else
			printf("nil");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
