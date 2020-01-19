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
	hash_node_t *new_node;

	(void) value;
	if(ht == NULL || key == NULL || *key == '\0')
		return (0);

	ht_key = key_index((unsigned char *)key, ht->size);

	new_node = add_node(&(ht->array[ht_key]), key, value);
	if(new_node == NULL)
		return (0);

	return (1);
}

/**
 * add_node - adds a new node at the beginning of a hash_node_t list.
 * @head: address of a pointer to a structure of type list_t
 * @str: string to add to node.
 *
 * Return: pointer to structure of type hash_node_t.
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *p;

	if (head == NULL || key == NULL)
		return (NULL);

	p = malloc(sizeof(hash_node_t));
	if (p == NULL)
		return (NULL);

	(*p).key = strdup(key);
	if ((*p).key == NULL)
	{
		free(p);
		return (NULL);
	}

	p->value = strdup(value);
	if (p->value == NULL)
	{
		free(p->key);
		free(p);
		return (NULL);
	}

	p->next = *head;
	*head = p;

	return (p);
}
