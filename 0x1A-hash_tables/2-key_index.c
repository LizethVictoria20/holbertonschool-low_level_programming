#include "hash_tables.h"

/**
 * key_index - gets index of array
 * @key: key
 * @size: size of array
 *
 * Return: Return
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;


	hash = hash_djb2(key);
	return (hash % size);
}
