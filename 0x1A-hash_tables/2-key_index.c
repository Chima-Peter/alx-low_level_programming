#include "hash_tables.h"

/**
 * key_index - Gives you the key of a key
 *
 * @key: The key to work the djb algorithm on
 *
 * @size: Size of the hash table
 *
 * Return: the index at which the key/value pair will be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result;

	result = hash_djb2((unsigned char *) key);
	result = result % size;

	return (result);
}
