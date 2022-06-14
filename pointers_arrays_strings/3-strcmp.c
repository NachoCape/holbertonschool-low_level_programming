#include "main.h"

/**
 * _strlen - returns the length of a string
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
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/** *s1 instead of s1[i] and then increase s1++ */
	while ((s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]))
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);

}
