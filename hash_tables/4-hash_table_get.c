#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = key_index((unsigned char *)key, ht->size);
	hash_node_t *aux = NULL;

	if (!ht || !ht->array[i] || !key)
		return (NULL);
	aux = ht->array[i];
	while (aux)
	{
		if (strcmp(key, aux->key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
