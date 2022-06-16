#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string of chars
 * @needle: string of chars
 *
 * Return:  a pointer to the beginning of the located substring, or
 * NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*needle != '\0')
	{
		for (i = 0; haystack[i] != '\0'; i++)
			if (*needle == haystack[i])
				break;
		if (*needle == haystack[i])
			break;
		needle++;
	}
	if (*needle != '\0')
		return (needle);
	else
		return ('\0');
}
