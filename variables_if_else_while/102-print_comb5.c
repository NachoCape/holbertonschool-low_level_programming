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
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = i; k <= 57; k++)
			{
				for (l = j + 1; l <= 57; l++)
				{
					if (i == 48 && j == 48 && k != 48)
					{
						l--;
					}
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56 && k == 57 && l == 57)
						continue;
					putchar(',');
					putchar(' ');
								
					if (i == 48 && j == 48 && k != 48)
						j++;
				}
			}
		}
	}
	putchar('\n');

return (0);
}
