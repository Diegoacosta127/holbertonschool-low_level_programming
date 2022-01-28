#include "hash_tables.h"
/**
  * hash_table_print - prints a hash table
  * @ht: the hash table to print
  * Return: void
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int looper;
	hash_node_t *ptr;
	char *string;

	if (!ht)
		return;
	printf("{");
	string = "";
	for (looper = 0; looper < ht->size; looper++)
	{
		ptr = ht->array[looper];
		while (ptr)
		{
			printf("%s'%s': '%s'", string, ptr->key, ptr->value);
			string = ", ";
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
