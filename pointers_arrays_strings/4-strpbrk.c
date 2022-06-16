#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string of chars
 * @accept: string of chars
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
			if (*s == accept[i])
				break;
		if (*s == accept[i])
			break;
		s++;
	}
	if (*s != '\0')
		return (s);
	else 
		return ('\0');
}
