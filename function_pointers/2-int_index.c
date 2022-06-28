#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Description: return the index of the first element for which the
 * cmp function does not return 0
 * If no element matches, return -1. If size <= 0, return -1
 *
 * Return: index of the first element, otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int res = -1, i = 0;

	if (array && cmp && size > 0)
		for (; i < size; i++)
			if (cmp(array[i]))
			{
				res = i;
				break;
			}
	return (res);
}
