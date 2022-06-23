#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"

/**
 * str_concat - concatenates two strings
 * @s1: string of chars
 * @s2: string of chars
 * Return: a pointer to the new space in memory which contains
 * the contents of s1 followed by s2. Otherwise NULL in failure
 */

char *str_concat(char *s1, char *s2)
{
	char *res = NULL;
	int i = 0, j = 0;

	if (s1 != NULL && s2 != NULL)
		res = malloc(_strlen(s1) + _strlen(s2) + 1);
	else if (s1 != NULL)
		res = malloc(_strlen(s1) + 1);
	else
		res = malloc(_strlen(s2) + 1);
	if (res != NULL)
	{
		for (i = 0; i < _strlen(s1); i++)
			res[i] = s1[i];
		for (; i < _strlen(s2); i++, s++)
			res[i] = *s2;
		res[i] = '\0'
	}
	return (res);
}
