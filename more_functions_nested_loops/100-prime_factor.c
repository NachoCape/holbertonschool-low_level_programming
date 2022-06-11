#include "main.h"
#include <stdio.h>
/**
 * main -c finds and prints the largest prime factor of the
 * number 612852475143, followed by a new line.
 * Return: Always 0;
 */

int main(void)
{
	int i;
	long int num, res;

	num = 612852475143;
	for (i =  2; i <= num; i++)
		if (num % i == 0)
		{
			num = num / i;
			res = i;
		}
	printf("%ld\n", res);
	return (0);
}
