#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * expo - calculate how many times 10 wanna be multiplied by himself
 * @count: numbers of times to multiplie 10
 * Return: 10 ^ count
 */

int expo(int count)
{
	int res, k;

	res = 1;
	for (k = 1; k <= count; k++)
		res = res * 10;
	return (res);
}

/**
 * print_number - This function prints an integer
 * Description: You are not allowed to use long
 * You can only use _putchar function to print
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values
 * @n: num to print
 */

void print_number(int n)
{
	int aux, aux2, count, digit, min;
	char check;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			if (n == INT_MIN)
			{
				check = 'y';
				n = n + 1;
			}
			n = n * -1;
			_putchar('-');
		}
		aux = n;
		count = 0;
		while (aux % 10 != aux)
		{
			aux = aux / 10;
			count++;
		}
		while (count >= 0)
		{
			aux2 = expo(count);
			digit = n / aux2;
			if (check == 'y' && count == 0)
			{
				min = digit % 10;
				min = min + 1;
				_putchar(min + '0');
			} else
				_putchar(digit % 10 + '0');
			count--;
		}
	}

}
