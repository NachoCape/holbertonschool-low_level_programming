#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to a number
 * @index:  is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 64)
		return (-1);
	/** agrego 0 a 1 index veces, por ejemplo si index es 3
	 * el resultado es 1000, luego al hacer ~ el resultado es 0111
	 * si n = 1024 en binario es 1000, luego al usar & el resultado es
	 * 0000
	 */
	*n &= ~(1 << index);
	return (1);
}
