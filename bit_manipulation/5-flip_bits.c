#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: unsigned long int number
 * @m: unsigned long int number
 *
 * Return: the number of bits needed to flip to get grom one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res = 0;

	n = n ^ m;
	while (n)
	{
		res += n & 1;
		n >>= 1;
	}
	return (res);
}
