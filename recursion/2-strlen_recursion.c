#include "main.h"

/**
 * count - recursive function to count the lenght of a string
 * @res: integer (result)
 * @s: string of char
 * Return: the large of the string
 */

int count(int res, char *s)
{
	if (*s == '\0')
		return (res);
	return (res = count(res + 1, s + 1));
}

/**
 * _strlen_recursion - that returns the length of a string
 * @s: string of char
 * Return: the lenght of the string
 */

int _strlen_recursion(char *s)
{
	int res = 0;

	return (res = count(res, s));
}
