#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: is the size of the triangle
 * Description: You can only use _putchar function to print
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j =  1; j <= size - i; j++)
				_putchar(' ');
			for (k = j; k <= size; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
