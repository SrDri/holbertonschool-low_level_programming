#include"hash_tables.h"

/**
 * key_index - return the index
 * @key: key
 * @size: size
 * Return: index of a key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key) % size;

	return (idx);
}
