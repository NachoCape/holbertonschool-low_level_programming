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
	int i, res = 0, sum = 0;

	if (argc == 1)
		printf("0\n");
	else if (argc == 2)
		if (atoi(argv[1]) != 0)
			printf("%d\n", atoi(argv[2]));
		else
			res = 1;
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				res = 1;
				break;
			}
			sum = sum + atoi(argv[i]);
			if (i == argc - 1)
				printf("%d\n", sum);
		}
	}
	return (res);
}
