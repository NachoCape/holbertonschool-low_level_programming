#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: integer (number of arguments)
 * @argv: pointer to an array of pointers
 * Return: 0 if the program receives 2 numbers, otherwise 1
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc < 3)
	{
		printf("Error\n");
		res = 1;
	} else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		res = 0;
	}
	return (res);
}
