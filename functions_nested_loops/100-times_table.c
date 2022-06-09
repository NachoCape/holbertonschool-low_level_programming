#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: The number of times to print table
 */
void print_times_table(int n)
{
	int i, j, res;

	if (n <= 15 || n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = (i * j);
				if (res > 99)
					_putchar((res / 100) + 48);
				if (res > 9)
				{
					if (res < 100)
						_putchar(' ');
					_putchar(((res / 10) % 10) + '0');
				}
				if (j >= 1 && j <= n && res <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((res % 10) + 48);
				if (j == n)
					_putchar('\n');
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
	_putchar('\n');
}
