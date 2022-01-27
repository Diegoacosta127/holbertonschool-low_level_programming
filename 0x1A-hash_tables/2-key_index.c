#include "hash_tables.h"
/**
  * key_index - gives the index of a key
  * @key: the key
  * @size: size of the array of the hash table
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int a;

	a = hash_djb2((const unsigned char *)strdup((const char *)key)) % size;
	return (a);
}
