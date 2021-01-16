#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: the key to find
 * @size: is the size of the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = (hash_djb2(key) % size);
	return (hash);
}
