#include "main.h"
#include <stdio.h>

/**
 * sqroot - Recursive part to finde the sqrt of a number
 * @n: integer (number to found the sqrt)
 * @i: integer helpfull in recursion
 * @res: integer (result)
 * Return: res in case i * i equal to sqrt of n, else -1
 */

int sqroot(int n, int i, int res)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	res = sqroot(n, i + 1, res);
	return (res);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	int res = 0, i = 1;

	res = sqroot(n, i, res);
	return (res);
}
