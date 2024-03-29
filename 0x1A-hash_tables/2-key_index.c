#include "hash_tables.h"

/**
 * key_index - Takes the index at which a key/value pair should
 *             be stored in array of a hash table.
 * @key: The key to get  index of.
 * @size: The size of  array of  hash table.
 * Return: The index of key.
 * Description: Uses the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
