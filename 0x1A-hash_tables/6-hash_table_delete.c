#include "hash_tables.h"
/**
  * hash_table_delete - deletes a hash table
  * @ht: hash table to be deleted
  * Return: void
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *ptr, *aux;

	if (!ht)
		return;
	for (idx = 0; idx < ht->size; idx++)
	{
		ptr = ht->array[idx];
		while ((aux = ptr))
		{
			ptr = ptr->next;
			free(aux->key);
			free(aux->value);
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
