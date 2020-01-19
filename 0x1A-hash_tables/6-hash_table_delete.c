#include "hash_tables.h"

/**
 * hash_table_delete - function to delete the hash table.
 * @ht: is the hash table you want to delete.
 *
 * Return: nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int ht_key = 0;
	hash_node_t *node = NULL;
	unsigned long int ht_size = 0;

	/*Check conditions*/
	if (ht == NULL)
		return;

	ht_size = ht->size;

	/*calculate index for the key with the size from hash table*/
	for (ht_key = 0; ht_key < ht_size; ht_key++)
	{
		/*head of single linked list in position ht_key in the hash table*/
		node = ht->array[ht_key];
		if (node != NULL)
			free_list(node);
	}

	free(ht->array);
	free(ht);
}

/**
 * free_list - function that free a list of type hash_node_t.
 * @head: address of a pointer to a structure of type hash_node_t.
 *
 * Return: void.
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	while (head != NULL)
	{
		temp = (*head).next;

		if (head->key != NULL)
			free(head->key);

		if (head->value != NULL)
			free(head->value);

		free(head);
		head = temp;
	}
}













