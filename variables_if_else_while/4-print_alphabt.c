#include <stdio.h>

/**
 * main - This C program prints the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}
	putchar('\n');

return (0);
}
