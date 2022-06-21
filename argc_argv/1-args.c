#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: integer (number of arguments)
 * @argv: pointer to an array of pointers
 * Return: always 0;
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc);
	return (0);
}
