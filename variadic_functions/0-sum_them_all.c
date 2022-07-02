#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: unsigned int
 * Return: the sum of all its parameters, If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		res += va_arg(ap, int);
	va_end(ap);
	return (res);
}
