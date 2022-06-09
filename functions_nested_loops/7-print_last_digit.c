#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer
 * Return: Returns the value of the last digit
 */

int print_last_digit(int n)
{
	int res;

	if (n >= 0)
		res = n % 10;
	else
		res = (n % 10) * -1;
	_putchar('0' + res);
	return (res);
}
