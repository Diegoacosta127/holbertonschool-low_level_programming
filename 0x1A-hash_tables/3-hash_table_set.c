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
	const unsigned char *dupkey;
	unsigned long int idxkey;
	hash_node_t *new_node;

	if (!value || !ht)
		return (0);
	dupkey = (const unsigned char *)strdup(key);
	idxkey = key_index(dupkey, ht->size);
	new_node = malloc(sizeof(*new_node));
	if (!new_node)
	{
		return (0);
	}
	while (ht->array[idxkey])
	{
		if (key == ht->array[idxkey]->key)
		{
			ht->array[idxkey]->value = (char *)value;
			return (1);
		}
		else
		{
			ht->array[idxkey] = ht->array[idxkey]->next;
		}
	}

	new_node->key = (char *)dupkey;
	new_node->value = strdup(value);
	new_node->next = NULL;
	ht->array[idxkey] = new_node;
	return (1);
}
