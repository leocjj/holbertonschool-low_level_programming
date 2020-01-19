#include "hash_tables.h"

/**
 * hash_table_print - function to print the hash table.
 * @ht: is the hash table you want to look into.
 *
 * Return: nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int ht_key = 0;
	hash_node_t *temp = NULL;
	unsigned long int ht_size = 0;
	char *delimiter = "";

	/*Check conditions*/
	if (ht == NULL)
		printf("{}");

	ht_size = ht->size;
/*{'Betty': 'Holberton', 'python': 'awesome'}*/

	/*calculate index for the key with the size from hash table*/
	printf("{");
	for(ht_key = 0; ht_key < ht_size; ht_key++)
	{
		/*head of single linked list in position ht_key in the hash table*/
		temp = ht->array[ht_key];

		/* prints linked list at position ht_key in the hash table */
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", delimiter, temp->key, temp->value);
			temp = temp->next;
			delimiter = ", ";
		}
	}
	printf("}\n");
}
