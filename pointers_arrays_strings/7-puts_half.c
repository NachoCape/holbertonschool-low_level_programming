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
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to print
 * Description: The function should print the second half of the string
 * If the number of characters is odd, the function should print the
 * last n characters of the string, where n = (length_of_the_string - 1) / 2
 */

void puts_half(char *str)
{
	int le = _strlen(str);
	int n;

	if (le % 2 == 0)
		n = le / 2;
	else
		n = (le + 1) / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
