#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_separator - print separator
 * @format: is a list of types of arguments passed to the function
 * @i: integer
 * Return: void
 */

void print_separator(const char * const format, int i)
{
	if (format != NULL && format[i + 1] != '\0')
		printf(", ");
}

/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed to the function
 *
 * Description:
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 * You are not allowed to use for, goto, ternary operator, else, do ... while
 * You can use a maximum of
 * 2 while loops
 * 2 if
 * You can declare a maximum of 9 variables
 * You are allowed to use printf
 * Print a new line at the end of your function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *aux;
	va_list ap;

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				print_separator(format, i);
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				print_separator(format, i);
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				print_separator(format, i);
				break;
			case 's':
				aux = va_arg(ap, char*);
				if (aux)
				{
					printf("%s", aux);
					print_separator(format, i);
				} else
				{
					printf("(nil), ");
					print_separator(format, i);
				}
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
