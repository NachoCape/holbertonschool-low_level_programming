#include "main.h"

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
	int aux, count, i;

	aux = n;
	count = 0;
	while (aux % 10 != aux)
	{
		aux = aux / 10;
		count++;
	}
	aux = n;
	if (count > 0)
		for (i = count; i >= 1; i--)
		{
			aux = aux / (10 * i);
			_putchar(aux + '0');
			aux = n;
		}
	_putchar(n % 10 + '0');
}
