#include <stdio.h>

/**
 * main - This C program prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
return (0);
}
