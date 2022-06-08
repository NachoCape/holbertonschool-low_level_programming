#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: caracter
 * Return: In case of lowercase return 1 else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
