#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to.
 * @key: key to hash. Can not be an empty string
 * @value: value associated with key. Must be duplicated. value can be empty.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 * In case of collision, add the new node at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ht_key = 0;
	hash_node_t *new_node = NULL, *temp = NULL;

	/*Check conditions*/
	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL )
		return (0);

	/*calculate index for the key with the size from hash table*/
	ht_key = key_index((unsigned char *)key, ht->size);

	/*head of single linked list in position ht_key in the hash table*/
	temp = ht->array[ht_key];

	/* check if key exist in linked list position ht_key in the hash table */
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			/*value is changed if the key exist*/
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	/*add a new node with key and value in position ht->array[ht_key]*/
	new_node = add_node(&(ht->array[ht_key]), key, value);
	if (new_node == NULL)
		return (0);

	return (1);
}

/**
 * add_node - adds a new node at the beginning of a hash_node_t list.
 * @head: address of a pointer to a structure of type hash_node_t
 * @key: key to add to the node.
 * @value: string to add to the node.
 *
 * Return: pointer to structure of type hash_node_t.
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *p;

	/*evaluate conditions*/
	if (head == NULL || key == NULL)
		return (NULL);

	/*create new node*/
	p = malloc(sizeof(hash_node_t));
	if (p == NULL)
		return (NULL);

	/* store key in new node*/
	p->key = strdup(key);
	if (p->key == NULL)
	{
		free(p);
		return (NULL);
	}

	/* store value in new node*/
	p->value = strdup(value);
	if (p->value == NULL)
	{
		free(p->key);
		free(p);
		return (NULL);
	}

	/* put new node as head*/
	p->next = *head;
	*head = p;

	return (p);
}
