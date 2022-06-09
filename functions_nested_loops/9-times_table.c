#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	char i, j;
	int res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = (i * j);
			if (res > 9)
			{
				_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
			} else
			{
				if (j == 0)
					_putchar(res + 48);
				else
				{
					_putchar(' ');
					_putchar(res + 48);
				}

			}
			if (j == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
