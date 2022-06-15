#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string of chars
 * @b: char
 * @n: first n bytes of the memory area
 * Return: pointer to a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
/**	char *arr = s;*/

	while (s[i] != '\0' && i <= n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
