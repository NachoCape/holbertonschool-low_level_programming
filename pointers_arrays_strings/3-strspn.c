#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string of chars
 * @accept: string of chars
 *
 * Return number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		if (s[i] == accept[j])
			break;
		i++;
	}
	return (count);
}
