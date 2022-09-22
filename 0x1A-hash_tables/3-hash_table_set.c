#include "hash_tables.h"

/**
 * hash_table_set - function to add an element to the hash table
 * @ht: hash table
 * @key: current key
 * @value: value associated with key
 * Return: 1 if success or 0 if fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp, *new;

	if (key == NULL || strcmp(key, "") == 0)
		return (0);
	if (ht == NULL)
		return (0);
	if (value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
		return (0);
	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = ht->array[index];
	ht->array[index] = tmp;
	return (1);

	new = ht->array[index];
	while (new != NULL)
	{
		if (strcmp(new->key, key) == 0)
		{
			free(new->value);
			new->value = strdup(value);
			return (1);
		}
		new = new->next;
	}
}
