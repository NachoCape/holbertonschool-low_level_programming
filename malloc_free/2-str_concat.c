#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"
#include <stdio.h>

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

	res = malloc(_strlen(s1) + _strlen(s2));
	if (res != NULL)
	{
		for (; i < _strlen(s1); i++)
			res[i] = s1[i];
		for (; i < (_strlen(s1) + _strlen(s2)); i++, j++)
			res[i] = s2[j];
		res[i] = '\0';
	}
	return (res);
}
