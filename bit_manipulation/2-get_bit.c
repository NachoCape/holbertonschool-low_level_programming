#include "main.h"

/**
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (index > n)
		return (-1);
	return ((n >> index) & 1);
}
