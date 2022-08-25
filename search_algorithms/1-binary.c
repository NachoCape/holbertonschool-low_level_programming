#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: array of ints
 * @size: size of the array
 * @value: int (value to search)
 *
 * Return: the index where value is located, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, max = size - 1, j = 0, fr = 0;

	if (!array)
		return (-1);
	while (i <= max)
	{
		printf("Searching in array:");
		for (j = i; j <= max; j++)
		{
			if (j == max)
				printf(" %ld\n", j);
			else
				printf(" %ld,", j);
		}
		fr = (max + i) / 2;
		if (value < array[fr])
			max = fr - 1;
		else if (value > array[fr])
			i = fr + 1;
		else
			break;
	}
	if (i > max)
		return (-1);
	return (fr);
}
