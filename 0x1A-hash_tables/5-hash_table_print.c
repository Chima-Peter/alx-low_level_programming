#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 *
 * @ht: the hash table tp print
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, n;

	if (ht == NULL)
		printf(" ");
	printf("{");
	n = 0;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			if (n > 0)
				printf(", ");
			n++;
			printf("'%s': '%s", ht->array[i]->key, ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}\n");
}
