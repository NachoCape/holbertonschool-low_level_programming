#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: is the size of the square
 * Description: You can only use _putchar function to print
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
			for (j = 1; j <= size)
				_putchar('#');
	}
}
