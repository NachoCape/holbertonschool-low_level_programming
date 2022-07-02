#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string of chars
 * @n: unsigned int
 *
 * Description:where separator is the string to be printed between numbers
 * and n is the number of integers passed to the function
 * You are allowed to use printf If separator is NULL, don’t print it
 * Print a new line at the end of your function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list = ap;

	va_start(ap, n);
	for (; i < n; i++)
	{
		printf("%d\n", va_arg(ap, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
