#include "main.h"
/**
 * print_alphabet - This C program print alphabet
 * Description: prints 1 time the alphabet,
 * in lowercase, followed by a new line
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
