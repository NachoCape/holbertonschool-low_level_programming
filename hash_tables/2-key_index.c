#include "hash_tables.h"


/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}


/**
 * key_index - gives you the index of a key
 * @key: is the key
 * @size: is the size of the array of the hash table
 *
 * Description: This function should use the hash_djb2
 * function that you wrote earlier
 * You will have to use this hash function for all the next tasks
 *
 * Return: the index at which the key/value pair should be
 * stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
