#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * Description: prints 10 times the numbers, from 0 to 14, followed by a new line
 */

void more_numbers(void)
{
	int i, j, ;


	for (i = 0; i < 15; i++)
	{
		if (i > 9)
			_putchar((i / 10) + 48);
		_putchar((i % 10) + 48);	
	}
	_putchar('\n');
}
