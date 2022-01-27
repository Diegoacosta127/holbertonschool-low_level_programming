#include "hash_tables.h"
/**
  * hash_table_create - creates a hash table
  * @size: size of the array
  * Return: a pointer to the created hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *new_ht = malloc(sizeof(hash_table_t));

	if (!new_ht)
	{
		return NULL;
	}
	new_ht->array = malloc(size*sizeof(hash_node_t));
	if (!new_ht->array)
	{
		free(new_ht);
		return NULL;
	}
	new_ht->size = size;
	for(i = 0; i < size; i++)
	{
		new_ht->array[i] = NULL;
	}
	return new_ht;
}
