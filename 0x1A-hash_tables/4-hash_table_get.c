#include "hash_tables.h"

/**
 * hash_table_get - function to get an element from the hash table.
 * @ht: is the hash table you want to look into.
 * @key: is the key you are looking for.
 *
 * Return: value associated with the element or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ht_key = 0;
	hash_node_t *temp = NULL;

	/*Check conditions*/
	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	/*calculate index for the key with the size from hash table*/
	ht_key = key_index((unsigned char *)key, ht->size);

	/*head of single linked list in position ht_key in the hash table*/
	temp = ht->array[ht_key];

	/* check if key exist in linked list position ht_key in the hash table */
	while (temp != NULL)
	{
		/*value is returned if the key exist*/
		if (strcmp(temp->key, key) == 0)
		{
			return ((char *)temp->value);
		}
		temp = temp->next;
	}

	return (NULL);
}
