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
	ptr = NULL;
	aux = NULL;
	for (idx = 0; idx < ht->size; idx++)
	{
		aux = ht->array[idx];
		while (aux)
		{
			free(aux->key);
			free(aux->value);
			ptr = aux;
			aux = aux->next;
			free(ptr);
		}
	}
	free(ht->array);
	free(ht);
}
