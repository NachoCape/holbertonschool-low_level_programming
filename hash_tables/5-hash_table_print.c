#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: is the hash table
 *
 * Description: You should print the key/value in the order that they
 * appear in the array of hash table.
 * f ht is NULL, don’t print anything
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0, size;
	hash_node_t *aux;

	if (!ht)
		return;
	printf("{");
	aux = ht->array[i];
	size = ht->size - 1;
	while (i < size)
	{
		aux = ht->array[i];
		while (aux)
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
			j = 1;
			aux = aux->next;
		}
		i++;
	}
	printf("}\n");
}
