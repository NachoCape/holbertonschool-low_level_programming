#include "main.h"
#include <stdio.h>

/**
 * _strlen - eturns the length of a string
 * @s: a string of chars
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * rev_string - this functions reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int le = _strlen(s) - 1;
	int i = 0;
	int temp;

	while (i < le)
	{
		temp = s[i];
		s[i] = s[le];
		s[le] = temp;
		i++;
		le--;
	}
}
