#include "hash_tables.h"
/**
  * hash_table_get - retrieves a value associated with a key
  * @ht: hash table to look into
  * @key: key to look for
  * Return: the value associated, NULL if key isn't found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int auxkey;

	if (!ht || !key)
		return (NULL);
	auxkey = key_index((const unsigned char *)key, ht->size);
	while (ht->array[auxkey])
	{
		if (strcmp(ht->array[auxkey]->key, key) == 0)
			return (ht->array[auxkey]->value);
		ht->array[auxkey] = ht->array[auxkey]->next;
	}
	return (NULL);
}
