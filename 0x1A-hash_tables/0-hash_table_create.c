#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: input size
 * Return: hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *table = NULL;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
