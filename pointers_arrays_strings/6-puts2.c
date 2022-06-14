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
 * puts2 - prints every other character of a string, starting
 * with the first character, followed by a new line.
 * @str: string to printf
 */

void puts2(char *str)
{
	int i = 0;
	int le = _strlen(str);

	while (i <= le && str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
