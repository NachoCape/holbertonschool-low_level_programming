#include <stdio.h>

/**
 * main - This C program prints all possible combinations
 * of three digits
 * Numbers must be separated by ',' followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered
 * the same combination of the three digits 0, 1 and 2
 * Print only the smallest combination of thee digits
 * Numbers should be printed in ascending order
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				if ( i != j && i != k && j != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

return (0);
}
