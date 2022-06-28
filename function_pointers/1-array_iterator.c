#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: array of integer
 * @size: size of the array of type size_t
 * @action: pointer function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action && array)
		for (; i < size; i++)
			action(array[i]);
}
