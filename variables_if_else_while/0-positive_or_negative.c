#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - This C program Positive anything is better than negative nothing
 * Return: devuelve 0
 */

int main(void)
{
	int n = rand();

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
return (0);
}
