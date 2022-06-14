#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: of the value to swap
 * @b: the other value to swap
 */

void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
