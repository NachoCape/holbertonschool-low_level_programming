#include "main.h"

/**
 * prime_number_recu - check if the input integer is a prime recursebly
 * @n: integer (number to check)
 * @i: integer (count )
 * Return: 1 if the number is prime, -1 otherwise
 */

int prime_number_recu(int n, int i)
{
	int res = 0;

	if (i > n)
		return (1);
	if (n % i == 0 && i != n && i != 1)
		return (0);
	i = i + 2;
	res = prime_number_recu(n, i);
	return (res);
}

/**
 * is_prime_number - check if the input integer is a prime number
 * @n: integer
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	int res = 0, i = 1;

	if (n % 2 == 0 || n < 0)
		return (0);
	else if (n == 1 || n == -1)
		return (0);
	else
		return (res = prime_number_recu(n, i));
}
