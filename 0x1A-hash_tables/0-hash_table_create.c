#include "hash_tables.h"
/**
 * hash_table_create - create the hash table
 * @size: the size of the array
 * Return: pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t)*size);
	if (new == NULL)
		return NULL;
	return new;
}
