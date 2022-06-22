#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: unssigned int
 * @c: char
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *res = malloc(sizeof(size));

	if (size == 0)
		res = NULL;
	while (*res != '\0')
	{
		*res = c;
		res++;
	}
	return (res);
}
