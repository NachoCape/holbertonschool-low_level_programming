#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: array of integers
 * @size: size_t (size of the array)
 * @value: int (value to search)
 *
 * Return: first index where value is located, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size && array[i] != value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}
	if (!array)
		return (-1);
	return (i);
}
