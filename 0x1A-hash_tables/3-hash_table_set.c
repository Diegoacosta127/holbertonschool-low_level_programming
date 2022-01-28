#include "hash_tables.h"
/**
  * hash_table_set - adds an element to the hash table
  * @ht: hash table to add or update the key/value
  * @key: the key (cannot be an empty string)
  * @value: value associated to key (cannot be an empty string)
  * Return: 1 if succeed, otherwise 0
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idxkey;
	hash_node_t *new_node;

	if (!value || !ht)
		return (0);
	idxkey = key_index((unsigned char *)key, ht->size);
	if (ht->array[idxkey] && strcmp(ht->array[idxkey]->key, key) == 0)
	{
		free(ht->array[idxkey]->value);
		ht->array[idxkey]->value = strdup(value);
		return (1);
	}
	new_node = malloc(sizeof(*new_node));
	if (!new_node)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[idxkey];
	ht->array[idxkey] = new_node;
	return (1);
}
