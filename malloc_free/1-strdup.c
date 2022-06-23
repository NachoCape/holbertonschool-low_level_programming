#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"

/**
 * _strdup - copy of the string given as a parameter
 * @str: string of char
 *
 * Description: The _strdup() function returns a pointer to a new string which
 * is a duplicate of the string str. Memory for the new string is
 * obtained with malloc, and can be freed with free.
 * Returns NULL if str = NULL
 *
 * Return: a pointer to the duplicated string. It returns
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *res = NULL;
	int i = 0;

	if (str != NULL)
		res = malloc(_strlen(str + 1));
	if (res != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			res[i] = str[i];
	}
	return (res);
}
