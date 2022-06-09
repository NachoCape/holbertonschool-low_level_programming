#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *  followed by a new line.
 *  Return: Always 0
 */

int main(void)
{
	int i;
	unsigned long next_term, first, second, sum;

	first = 1;
	second = 2;
	sum = 2;
	next_term = first + second;
	for (i = 3; i <= 50; i++)
	{
		first = second;
		second = next_term;
		next_term = first + second;
		if (next_term >= 4000000)
			break;
		if (next_term % 2 == 0)
			sum = sum + next_term;
	}
	printf("%lu\n", sum);
	return (0);
}
