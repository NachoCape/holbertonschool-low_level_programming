#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with
 * 1 and 2, followed by a new line.
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
	for (i = 3; i <= 50; i++)
	{
		printf("%lu", next_term);
		if (i != 50)
			printf(", ");
		first = second;
		second = next_term;
		next_term = first + second;
	}
	printf("\n");
	return (0);
}
