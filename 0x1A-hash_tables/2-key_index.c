#include "hash_tables.h"

/**
 * key_index - functiona that returns key index from hash function.
 * @key: the key to hash.
 * @size: the size of the array to store data.
 *
 * Return: key index from hash function.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
