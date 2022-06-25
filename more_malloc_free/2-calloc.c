#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: a pointer to the allocated memory, If nmemb or size is 0, then
 * _calloc returns NULL, If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *res = NULL;
	unsigned int i = 0;

	if (nmemb != 0 && size != 0)
	{
		res = malloc(nmemb * size);
		for (; i < nmemb * size; i++)
			res[i] = '\0';
	}
	return (res);
}
