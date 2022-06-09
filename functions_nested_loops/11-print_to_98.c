#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural numbers
 * @n: the starting number (integer)
 * Description: prints all natural numbers from n to 98,
 * followed by a new line
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 * You are allowed to use the standard library
 */

void print_to_98(int n)
{
	int i;

	if (n == 98)
		printf("98\n");
	else if (n < 98)
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
		printf("98\n");
	} else
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
		printf("98\n");
	}
}
