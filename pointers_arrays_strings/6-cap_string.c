#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @c: string of chars
 * Return: a pointer to a string
 */

char *cap_string(char *c)
{
	int aux = c[0];
	char *res = c;

	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] = c[0] - 32;

	while (*c != '\0')
	{
		if (aux == ' ' || aux == '\t' || aux == '\n' || aux == ',')
			if (c[0] >= 'a' && c[0] <= 'z')
				c[0] = c[0] - 32;
		if (aux == ';' || aux == '.' || aux == '!' || aux == '"')
			if (c[0] >= 'a' && c[0] <= 'z')
				c[0] = c[0] - 32;
		if (aux == '(' || aux == ')' || aux == '{' || aux == '}')
			if (c[0] >= 'a' && c[0] <= 'z')
				c[0] = c[0] - 32;
		aux = c[0];
		c++;
	}
	return (res);
}
