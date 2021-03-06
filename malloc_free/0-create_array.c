#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 * @size: unssigned int
 * @c: char
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *res = NULL;
	unsigned int i = 0;

	if (size != 0)
		res = malloc(sizeof(char) * size);
	if (res != NULL)
		for (i = 0; i < size; i++)
			res[i] = c;
	return (res);
}
