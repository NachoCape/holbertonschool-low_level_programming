#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: string of chars
 * @size: int
 */

void print_diagsums(int *a, int size)
{
	int i = 0, aux = 0, aux2 = size - 1, res = 0, res2 = 0;

	for (i = 0; i <= size * size; i++)
	{
		if (i == aux)
		{
			res = res + a[i];
			aux = aux + size + 1;
		}
		if (i == aux2)
		{
			res2 = res2 + a[i];
			aux2 = aux2 + size - 1;
		}
	}
	printf("%d, %d\n", res, res2);
}
