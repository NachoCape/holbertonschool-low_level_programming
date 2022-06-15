#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337
 * @c: string of chars
 * Return: a pointer to a string
 */

char *leet(char *c)
{
	char arr[] = "oOlLeEaAtT", arr2[] = "0011334477";
	int i, j = 0;

	while (c[j] != '\0')
	{
		for (i = 0; i <= 7; i++)
			if (c[j] == arr[i])
				c[j] = arr2[i];
		j++;
	}
	return (c);
}
