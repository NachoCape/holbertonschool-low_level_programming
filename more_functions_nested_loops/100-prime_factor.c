#include "main.h"
#include <stdio.h>
/**
 * main -c finds and prints the largest prime factor of the
 * number 612852475143, followed by a new line.
 * Return: Always 0;
 */

int main(void)
{
	int i, j, biggest;

	biggest = 2;
	for (i = 2; i <= 615.976; i++)
	{
		j = 2;
		while (j <= i && (i % j == 0))
			j++;
		if (i == j - 1)
			if (j > biggest)
				biggest = j;
	}
	printf("%d\n", biggest);
	return (0);
}
