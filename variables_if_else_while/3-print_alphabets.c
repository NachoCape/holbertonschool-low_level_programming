#include <stdio.h>

/**
 * main - This C program prints the alphabet in lowercase, and
 * then in uppercase, followed by a new line.
 * Return: 0
 */

int main(void)
{
	char c = 'a';
	char ch = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
return (0);
}
