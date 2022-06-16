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
	int i = 0, k = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		k = 0;
		while (needle[k] != '\0' && haystack[i] == needle[k])
		{
			i++;
			k++;
		}
		if (needle[k] != '\0')
			i = i - k;
		else
			break;
	}
	if (needle[k] == '\0')
	{
		haystack = &haystack[i - k];
		return (haystack);
	}
	else
		return ('\0');
}
