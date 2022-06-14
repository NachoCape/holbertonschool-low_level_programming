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
 * _strncpy - copies a string
 * @dest: desatination string
 * @src: string to copy
 * @n: n bytes from src
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length1 = _strlen(dest);
	int length2 = _strlen(src);
	int i = 0;

	while (i <= (length1 - 1) && i < n && i <= length2)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
