#include "hash_tables.h"

/**
 * hash_table_get - Retrives the value associated with a key
 *
 * @ht: The hash table
 *
 * @key: the key to retrive value for
 *
 * Return: either the value or nulunsigned long int i;
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;

	if (ht == NULL)
		return (NULL);

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			if (strcmp(ht->array[i]->key, key) == 0)
				return (ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
		}
	}
	return (NULL);
}
