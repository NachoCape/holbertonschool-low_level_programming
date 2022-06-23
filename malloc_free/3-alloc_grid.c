#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: integer
 * @height: integer
 *
 * Return: returns a pointer to a 2 dimensional array of integers
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **res = NULL;
/**	int *aux = NULL;*/
	int i = 0, j = 0;

	if (width != 0 && height != 0)
		res = malloc(height * sizeof(int *));
	if (res != NULL)
	{
		for (; i < height; i++)
		{
			res[i] = malloc(sizeof(int) * width);
			if (res[i] != NULL)
				for (; j < width; j++)
					res[i][j] = 0;
			else
			{
				for (; i >= 0; i--)
					free(res[i]);
				free(res);
				return (NULL);
			}
		}
	}
	return (res);
}
