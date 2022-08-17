#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: unsigned long int (its the size of the array)
 *
 * Return: a pointer to the newly created hash table, otherwise NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	int i = 0;
	hash_table_t *ht = malloc(sizeof(hash_table_t) * size);

	if (!ht)
		return (NULL);
	ht->size = size;
	for (; i < size; i++)
		ht[i].array = NULL;
	return (ht);
}
