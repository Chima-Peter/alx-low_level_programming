#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table.
 *
 * @size: The size of the array.
 *
 * Return: a pointer to the newly created hash table or NULL
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	table = (hash_table_t*) malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t**) calloc(table->size, sizeof(hash_node_t));

	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}


/**
 * create_item - Creates a hash node
 *
 * key: the key to be converted
 *
 * value: the value to be stored with the key
 *
 *Return: the created hash node
 */
 hash_node_t *create_item(const char* key, const char* value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	return (node);
}
