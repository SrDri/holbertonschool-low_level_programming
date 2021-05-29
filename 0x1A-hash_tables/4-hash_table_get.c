#include "hash_tables.h"

/**
 * hash_table_get - value a key
 * @ht: hash table
 * @key: key
 * Return: Null o value
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *check;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *) key, ht->size);
	check = ht->array[idx];

	while (check != NULL)
	{
		if (strcmp(key, check->key) == 0)
			return (check->value);
		check = check->next;
	}

	return (NULL);
}
