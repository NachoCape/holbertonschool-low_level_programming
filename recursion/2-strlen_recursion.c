#include "main.h"

/**
 * _strlen_recursion - that returns the length of a string
 * @s: string of char
 * Return: the lenght of the string
 */

int count(int res, char *s)
{
	if (*s == '\0')
		return res;
	return (res = count(res + 1, s + 1));
}

int _strlen_recursion(char *s)
{
	int res = 0;
	
	return (res = count(res, s));
}
