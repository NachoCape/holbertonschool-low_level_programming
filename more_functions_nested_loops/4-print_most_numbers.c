#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Description: Do not print 2 and 4
 * You can only use _putchar twice in your code
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
