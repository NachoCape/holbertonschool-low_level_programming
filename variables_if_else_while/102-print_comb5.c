#include <stdio.h>

/**
 * main - This C program prints all possible combinations
 * of two digits
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * The combination of numbers must be separated by comma, followed by a space
 * 00 01 and 01 00 are considered as the same
 * combination of the numbers 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				putchar(' ');
				putchar(k);
				putchar(l);
				if (i == 98 && j == 99)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

return (0);
}
