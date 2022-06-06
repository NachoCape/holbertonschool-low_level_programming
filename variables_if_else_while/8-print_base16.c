#include <stdio.h>

/**
 * main - This C program  prints all the numbers of base 16 in lowercase
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	char c;
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

return (0);
}
