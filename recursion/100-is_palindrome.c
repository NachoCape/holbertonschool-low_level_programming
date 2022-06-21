#include "main.h"
#include <stdio.h>

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

/**
 * is_palindrome_recu - aux function of is_palindrome to do recursion
 * @s: string of chars
 * @i: integer (move in the string)
 * @len: integer (lenght of the string)
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome_recu(char *s, int i, int len)
{
	int res = 0;

	if (s[i] != s[len])
		return (0);
	if (i == len || (i == len - 1 && s[i] == s[len - 1]))
		return (1);
	res = is_palindrome_recu(s, i + 1, len - 1);
	return (res);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string of chars
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int i = 0, len = _strlen_recursion(s) - 1;

	return (is_palindrome_recu(s, i, len));
}
