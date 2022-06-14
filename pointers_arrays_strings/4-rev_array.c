#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: string of int
 * @n: is the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i <= n)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	}
}
