#include "main.h"
#include <stdio.h>
/**
 * main -c finds and prints the largest prime factor of the
 * number 612852475143, followed by a new line.
 * Return: Always 0;
 */

int main(void)
{
	long int i, num;

	num = 612852475143;
	for (i =  3; i <= num; i += 2)
		if (num % i == 0)
			num = num / i;
	printf("%ld\n", i);
	return (0);
}
