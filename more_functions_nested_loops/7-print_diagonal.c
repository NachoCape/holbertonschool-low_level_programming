#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 *
 * Description: You can only use _putchar function to print
 * Where n is the number of times the character \ should be printed
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 */

void print_diagonal(int n)
{
	char i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
