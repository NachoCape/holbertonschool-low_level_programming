#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string of char
 * @c: char
 * Return: pointer to a char
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
		s++;
	if (*s != c)
		s = '\0';
	return (s);
}
