#include "main.h"
#include <stdio.h>

/**
 * fibo - a
 * @w: first half
 * @x: first half part2
 * @y: second half
 * @z: second half part2
 * @i: continue in i
 */
void fibo(long int w, long int x, long int y, long int z, int i)
{
	long int a, b;

	while (i <= 98)
	{
		a = w + y;
		b = x + z;
		printf("%lu%lu", a, b);
		if (i != 98)
			printf(", ");
		w = y;
		x = z;
		y = a;
		z = b;
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
	int i;
	long int w, x, y, z, first, sec, sig;

	/** First 92 numbers of fibonacci */
	first = 1;
	sec = 2;
	sig = first + sec;
	printf("%d, %d, ", 1, 2);
	for (i = 3; i <= 90; i++)
	{
		printf("%lu", sig);
		printf(", ");
		first = sec;
		sec = sig;
		sig = first + sec;
	}
	/** Divide the big numbers(last 6) */
	w = first / 1000000000;
	x = first % 1000000000;
	y = sec / 1000000000;
	z = sec % 1000000000;
	/** Last 6 numbers of fibonacci */
	fibo(w, x, y, z, i);
	printf("\n");
	return (0);
}
