#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: hash table
 * Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash_nodes = NULL;
	unsigned int i = 0;
	char *none_str = "";

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		hash_nodes = ht->array[i];

		if (hash_nodes != NULL)
			printf("%s", none_str);

		while (hash_nodes != NULL)
		{
			printf("'%s': '%s'", hash_nodes->key, hash_nodes->value);
			if (hash_nodes->next != NULL)
				printf("%s", none_str);
			hash_nodes = hash_nodes->next;
			none_str = ", ";
		}
	}
	printf("}\n");
}
