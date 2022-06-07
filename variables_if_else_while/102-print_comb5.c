#include <stdio.h>

/**
 * main - This C program prints all possible combinations
 * of two digits
 * Numbers must be separated by ,, followed by a space
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * Return: 0
 */

int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0' ; j <= '9'; j++)
		{
			for (k = i; k <= '9'; i++)
			{
				for (l = j + 1; l <= '9'; j++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (j != 56)
					{
						putchar(',');
						putchar(' ');
					
				}
			}
		}
	}
	putchar('\n');

return (0);
}
