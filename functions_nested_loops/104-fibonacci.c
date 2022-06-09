#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, followed by a new line.
 * The numbers should be separated by comma, followed by a space ,
 * You are allowed to use the standard library
 * You are not allowed to use any other library (You can’t use GMP etc…)
 * You are not allowed to use long long, malloc, pointers,
 * arrays/tables, or structures You are not allowed to hard code
 * any Fibonacci number (except for 1 and 2)
 * Return: Always 0
 */

int main(void)
{
	int i;
	unsigned long next_term, first, second;

	first = 1;
	second = 2;
	next_term = first + second;
	printf("%d, %d, ", 1, 2);
	for (i = 3; i <= 98; i++)
	{
		printf("%lu", next_term);
		if (i != 98)
			printf(", ");
		first = second;
		second = next_term;
		next_term = first + second;
	}
	printf("\n");
	return (0);
}
