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
	unsigned long int ki;
	hash_node_t *node = NULL;
	char *new_key = strdup(key), *new_value = strdup(value);

	node = malloc(sizeof(hash_node_t *));
	if (!node || !new_key || !new_value)
		return (0);
	ki = key_index((unsigned char *)new_key, ht->size);
	node->key = new_key;
	node->value = new_value;
	node->next = NULL;
	if (!ht->array[ki])
		ht->array[ki] = node;
	else
	{
		free(ht->array[ki]);
		ht->array[ki] = node;
	}
	return (1);
}
