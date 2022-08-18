#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: is the hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux = NULL, *del = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;
	while (i < ht->size)
	{
		aux = ht->array[i];
		while (aux)
		{
			del = aux;
			aux = aux->next;
			free(del->value);
			free(del->key);
			free(del);
		}
		i++;
		free(aux);
	}
	free(ht->array);
	free(ht);
}
