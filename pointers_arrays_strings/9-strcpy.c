#include "main.h"
#include <stdio.h>

/**
 * copies the string pointed to by src
 * @dest: string
 * @src: string
 * Description: copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
