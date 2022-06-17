#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string of chars
 * Return: a pointer to a string 
 */

char *rot13(char *s)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (j <= 51)
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
				break;
			}
			j++;	
		}
		i++;
	}
	return (s);
}
