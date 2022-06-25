#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: integer
 * @max: integer
 * Return: a pointer to the newly created array, if min>max or malloc fails
 * return NULL
 */

int *array_range(int min, int max)
{
	int *res = NULL;
	int i = 0, j = min;

	if (min <= max)
		res = malloc(sizeof(int) * (max - min + 1));
	if (res != NULL)
		for (; i < max - min; i++, j++)
			res[i] = j;
	return (res);
}
