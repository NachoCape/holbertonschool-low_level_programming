#include "main.h"

/**
* binary_recu - recursive function to print numbers > 1
* @n: number to print
*
* Return: void
*/

void binary_recu(unsigned long int n)
{
	unsigned long int bit = 0;

	if (n != 0)
	{

		bit = n & 1;
		binary_recu(n >> 1);
		_putchar(bit + '0');
	}
}

/**
* print_binary - Print number in binary
* @n: unsigned long int to be print in binary
*
* Return: void
*/

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		binary_recu(n);
}
