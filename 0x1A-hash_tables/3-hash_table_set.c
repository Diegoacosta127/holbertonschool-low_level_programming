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
	if (ht->array[idxkey])
	{
		new_node = ht->array[idxkey];
		while(new_node)
		{
			if (new_node->key == key)
			{
				new_node->value = (char *)value;
				return (1);
			}
			else
			{
				new_node = new_node->next;
			}
		}
	}
	new_node = malloc(sizeof(*new_node));
	if (!new_node)
	{
		return (0);
	}
	new_node->key = (char *)dupkey;
	new_node->value = strdup(value);
	new_node->next = ht->array[idxkey];
	ht->array[idxkey] = new_node;
	return (1);
}
