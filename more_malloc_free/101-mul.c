#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sl - count the large of a string
 * @n1: string of chars
 * Return: the large of the string n1
 */

int sl(char *n1)
{
	int res = 0;

	for (; n1[res] != '\0'; res++)
		;
	return (res);
}

int correct_string(char *s)
{
	int i = 0, flag = 1;

	while (s[i] != '\0' && flag == 1)
	{
		if (s[i] > '9' || s[i] < '0')
			flag = 0;
		i++;
	}
	return (flag);
}

int main(int argc, char *argv[])
{
	int size1 = 0, size2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (correct_string(argv[1]) == 0 && correct_string(argv[2]) == 0)
	{
		printf("Error\n");
		exit(98);
	}
	size1 = sl(argv[1]);
	size2 = sl(argv[2]);
	return (0);
}

