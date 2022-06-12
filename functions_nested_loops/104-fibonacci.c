#include "main.h"
#include <stdio.h>

/**
 * fibo - print the numbers (91-98) of fibonacci
 * @w: half of 91
 * @x: half part2 91
 * @y: half 92
 * @z: half part2 92
 * @i: continue in i
 */
void fibo(long int w, long int x, long int y, long int z, int i)
{
	unsigned long int a, b;

	while (i < 98)
	{
		a = y + (z / 1000000000);
		b = z % 1000000000;
		printf(", %ld", a);
		printf("%ld", b);
		y = y + w;
		w = y - w;
		z = z + x;
		x = z - x;
		i++;
	}
}

/**
 * main - prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, followed by a new line.
 * The numbers should be separated by comma, followed by a space ,
 * You are allowed to use the standard library
 * You are not allowed to use any other library (You can’t use GMP etc…)
 * You are not allowed to use long long, malloc, pointers,
 * arrays/tables, or structures You are not allowed to hard code
 * any Fibonacci number (except for 1 and 2)
 * Return: Always 0
 */

int main(void)
{
	unsigned long int i, w, x, y, z, first, sec, sig;

	/** First 91 numbers of fibonacci */
	first = 1;
	sec = 2;
	printf("%ld", first);
	for (i = 1; i < 91; i++)
	{
		printf(", %ld", sec);
		sec = first + sec;
		first = sec - first;
	}
	/** Divide the big numbers (91 and 92) */
	w = first / 1000000000;
	x = first % 1000000000;
	y = sec / 1000000000;
	z = sec % 1000000000;
	/** Last 7 numbers of fibonacci */
	fibo(w, x, y, z, i);
	printf("\n");
	return (0);
}
