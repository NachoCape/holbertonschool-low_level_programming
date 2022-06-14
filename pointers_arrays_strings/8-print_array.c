#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of
 * integers, followed by a new line
 * @a: string
 * @n: num of elements to print
 * Description: where n is the number of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order as
 * they are stored in the array You are allowed to use printf
 */

void print_array(int *a, int n)
{
	int cont, i;

	cont = 0;
	i = 0;
	while (a[i] != '\0' && cont < n)
	{
		if (cont == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
		i++;
		cont++;
	}
	printf("\n");
}
