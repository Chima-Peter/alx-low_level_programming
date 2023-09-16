#include "hash_tables.h"
/**
 * hash_table_set - Adda an element to the hash table
 *
 * @ht: The hash table you want to add or update the key or value to
 *
 * @key: The string to pass to the hash function
 *
 * @value: The value to be associated to the key
 *
 * Return: either 1 or 0 for success or failure respectively
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *table;
	unsigned long int index;

	if (ht == NULL)
		return (0);

	node = create_item(key, value);

	if (node == NULL)
		return (0);

	if (strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	table = ht->array[index];

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	handle_collision(&table, node);
	return (1);
}

/**
 * handle_collision - Handles the collision of keys
 *
 * @head: the head node
 *
 * @node: the node to be added
 *
 * Return: either 1 or 0 depending on success or failure
 */
hash_node_t *handle_collision(hash_node_t **head, hash_node_t *node)
{
	node->next = (*head);
	(*head) = node;

	return (*head);
}
