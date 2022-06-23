#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Description: if malloc fails, the malloc_checked function should
 * cause normal process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	int *res = NULL;

	res = malloc(b * sizeof(int));
	if (res == NULL)
	{
		_putchar('9');
		_putchar('8');
		_putchar('\n');
		exit(EXIT_FAILURE);
	} else 
		return (res);
}
