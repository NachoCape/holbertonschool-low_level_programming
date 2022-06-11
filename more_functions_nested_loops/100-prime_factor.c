#include "main.h"
#include <stdio.h>
/**
 * main -c finds and prints the largest prime factor of the
 * number 612852475143, followed by a new line.
 * Return: Always 0;
 */

int main(void)
{
	long int j, biggest, i, num;

	num = 612852475143 / 2;
	biggest = 0;
	if (num % 2 == 0)
		continue;
	else
	{
		for (i = 3; i <= num; i = i + 2)
		{
			/**printf("%ld\n",i);*/
			if (num % i == 0 && i != 3)
			{
				for (j = 3; j <= i; j = j + 2)
					if (i % j == 0)
					{
						biggest = j;
						break;
					}
			}
			if (j == num)
			{
				biggest = num;
				break;
			}
			/**printf("%ld\n", biggest);*/
		}
	}
	printf("%ld\n", biggest);
	return (0);
}
