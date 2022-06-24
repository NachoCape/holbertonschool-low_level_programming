#include "main.h"
#include "2-strlen.c"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string of chars
 * @s2: string of chars
 * @n: unsigned int
 * Description: If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 *
 * Return: a pointer to a newly allocated space in memory, which
 * contains s1, followed by the first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res = NULL;
	unsigned int len1 = _strlen(s1), len2 = _strlen(s2), j = 0, i = 0;

	if (n < len2)
	{
		res = malloc(len1 + 1 + n);
		n = len1 + 1 + n;
	} else
	{
		res = malloc(len1 + len2 + 1);
		n = len1 + len2 + 1;
	}
	if (res != NULL)
	{
		for (; i < len1; i++)
			res[i] = s1[i];
		for (; i < n - 1; j++, i++)
			res[i] = s2[j];
		res[i] = '\0';
	}
	return (res);
}
