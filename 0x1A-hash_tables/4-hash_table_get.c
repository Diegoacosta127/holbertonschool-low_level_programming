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
	if (ht->array[auxkey])
		return (ht->array[auxkey]->value);
	else
		return (NULL);
}
