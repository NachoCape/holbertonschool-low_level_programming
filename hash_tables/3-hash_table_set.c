#include "hash_tables.h"

/**
 * hash_table_set - that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. value
 * must be duplicated. value can be an empty string
 *
 * Description: In case of collision, add the new node
 * at the beginning of the list
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ki = key_index(key, ht->size);
	hash_node_t *node = NULL;

	node = malloc(sizeof(hash_node_t *));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (!ht->array[ki])
		ht->array[ki] = node;
	else
	{
		node->next = ht->array[ki];
		ht->array[ki] = node;
	}
	return (1);
}
