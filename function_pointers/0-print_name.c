#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: string of char
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
