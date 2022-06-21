#include "main.h"
#include <stdio.h>

/**
 * main -  prints all arguments it receives
 * @argc: integer (number of arguments)
 * @argv: pointer to an array of pointers
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
