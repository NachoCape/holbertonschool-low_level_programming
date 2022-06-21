#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: integer (number of arguments)
 * @argv: pointer to an array of pointers
 * Return: if the number have correct syntax 0, otherwise 1
 */

int main(int argc, char *argv[])
{
	int i = 0, j = 0, res = 0, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				res = 1;
				break;
			}
		sum = sum + atoi(argv[i]);
	}
	if (res != 1)
		printf("%d\n", sum);
	return (res);
}
