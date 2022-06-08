#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer
 * Return: absolute value
 */

int _abs(int n)
{
	int res;

	if (n >= 0)
		res = n;
	else
		res = (n * -1);
	return (res);
}
