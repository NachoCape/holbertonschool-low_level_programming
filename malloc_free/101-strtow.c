#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * len_word - count the length of a word
 * @str: string of char
 * Return: the number of chars of a word
 */

int len_word(char *str)
{
	int i = 0, flag = 0, char_count = 0;

	while (str[i] != '\0' && flag == 0)
	{
		while (str[i] != '\0' && str[i] != ' ')
		{
			char_count++;
			flag = 1;
			i++;
		}
		i++;
	}
	return (char_count);
}

/**
 * strtow - splits a string into words.
 * @str: string of char
 *
 * Description: Each element of this array should
 * contain a single word, null-terminated
 * The last element of the returned array should be NULL
 * Words are separated by spaces
 * Returns NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 *
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **res = NULL;
	int i = 0, j = 0, k = 0, count_words = 0, flag = 0, l = 0;

	while (str != NULL && str[i] != '\0')
	{
		while (str[i] != ' ')
		{
			i++;
			flag = 1;
		}
		if (flag == 1)
			count_words++;
		flag = 0;
		i++;
	}
	if (str != NULL && *str != '\0' && count_words > 0)
		res = malloc(count_words * sizeof(char *) + 1);
	if (res != NULL)
	{
		for (; j < count_words; j++)
		{
			res[j] = malloc(len_word(str) + 1);
			if (res[j] != NULL)
			{
				while (*str == ' ')
					str++;
				l = len_word(str);
				for (k = 0; k < l; k++, str++)
					res[j][k] = *str;
				res[j][k + 1] = '\0';
				str++;
			}
		}
	}
	return (res);
}
