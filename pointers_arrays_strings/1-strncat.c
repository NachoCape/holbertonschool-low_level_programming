#include "main.h"

/**
 * _strlen - returns the length of a string
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
 * _strncat - that concatenates two strings
 * @dest: destination string
 * @src: string to concatenate
 * @n: n bytes from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = _strlen(dest);
	int length = i + _strlen(src) - 1;
	int j = 0;

	while (i <= length && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
