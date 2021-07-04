#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 * Return: void
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *actual, *aux;
	unsigned int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		actual = ht->array[i];
		while (actual != NULL)
		{
			aux = actual->next;

			free(actual->value);
			free(actual->key);
			free(actual);

			actual = aux;
		}
	}
	free(ht->array);
	free(ht);
}
