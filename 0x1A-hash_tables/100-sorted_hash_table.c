#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table, NULL otherwise.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht = NULL;
	shash_node_t **array = NULL;

	if (size == 0)
		return (NULL);

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);

	array = calloc(size, sizeof(shash_node_t *));
	if (array == NULL)
	{
		free(array);
		free(sht);
		return (NULL);
	}

	sht->size = size;
	sht->array = array;

	return (sht);
}

/**
 * hash_table_get - function to get an element from the hash table.
 * @ht: is the hash table you want to look into.
 * @key: is the key you are looking for.
 *
 * Return: value associated with the element or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *sht, const char *key)
{
	unsigned long int sht_key = 0;
	shash_node_t *temp = NULL;

	/*Check conditions*/
	if (sht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	/*calculate index for the key with the size from hash table*/
	sht_key = key_index((unsigned char *)key, sht->size);

	/*head of single linked list in position ht_key in the hash table*/
	temp = sht->array[sht_key];

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

/**
 * hash_table_print - function to print the hash table.
 * @ht: is the hash table you want to look into.
 *
 * Return: nothing.
 */
void shash_table_print(const shash_table_t *sht)
{
	unsigned long int sht_key = 0;
	shash_node_t *temp = NULL;
	unsigned long int sht_size = 0;
	char *delimiter = "";

	/*Check conditions*/
	if (sht == NULL)
		return;

	sht_size = sht->size;
/*{'Betty': 'Holberton', 'python': 'awesome'}*/

	/*calculate index for the key with the size from hash table*/
	printf("{");
	for (sht_key = 0; sht_key < sht_size; sht_key++)
	{
		/*head of single linked list in position ht_key in the hash table*/
		temp = sht->array[sht_key];

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

/**
 * hash_table_delete - function to delete the hash table.
 * @ht: is the hash table you want to delete.
 *
 * Return: nothing.
 */
void shash_table_delete(shash_table_t *sht)
{
	unsigned long int sht_key = 0;
	shash_node_t *node = NULL;
	unsigned long int sht_size = 0;

	/*Check conditions*/
	if (sht == NULL)
		return;

	sht_size = sht->size;

	/*calculate index for the key with the size from hash table*/
	for (sht_key = 0; sht_key < sht_size; sht_key++)
	{
		/*head of single linked list in position ht_key in the hash table*/
		node = sht->array[sht_key];
		if (node != NULL)
			sfree_list(node);
	}

	free(sht->array);
	free(sht);
}

/**
 * sfree_list - function that free a list of type hash_node_t.
 * @head: address of a pointer to a structure of type hash_node_t.
 *
 * Return: void.
 */
void sfree_list(shash_node_t *head)
{
	shash_node_t *temp;

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

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to.
 * @key: key to hash. Can not be an empty string
 * @value: value associated with key. Must be duplicated. value can be empty.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 * In case of collision, add the new node at the beginning of the list
 */
int shash_table_set(shash_table_t *sht, const char *key, const char *value)
{
	unsigned long int sht_key = 0;
	shash_node_t *new_node = NULL, *temp = NULL;

	/*Check conditions*/
	if (sht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);

	/*calculate index for the key with the size from hash table*/
	sht_key = key_index((unsigned char *)key, sht->size);

	/*head of single linked list in position ht_key in the hash table*/
	temp = sht->array[sht_key];

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
	new_node = sadd_node(&(sht->array[sht_key]), key, value);
	if (new_node == NULL)
		return (0);

	return (1);
}

/**
 * sadd_node - adds a new node at the beginning of a hash_node_t list.
 * @head: address of a pointer to a structure of type hash_node_t
 * @key: key to add to the node.
 * @value: string to add to the node.
 *
 * Return: pointer to structure of type hash_node_t.
 */
shash_node_t *sadd_node(shash_node_t **head, const char *key, const char *value)
{
	shash_node_t *p;

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

/**
 * hash_table_print - function to print the hash table.
 * @ht: is the hash table you want to look into.
 *
 * Return: nothing.
 */
void shash_table_print_rev(const shash_table_t *sht)
{
	unsigned long int sht_key = 0;
	shash_node_t *temp = NULL;
	unsigned long int sht_size = 0;
	char *delimiter = "";

	/*Check conditions*/
	if (sht == NULL)
		return;

	sht_size = sht->size;
/*{'Betty': 'Holberton', 'python': 'awesome'}*/

	/*calculate index for the key with the size from hash table*/
	printf("{");
	for (sht_key = 0; sht_key < sht_size; sht_key++)
	{
		/*head of single linked list in position ht_key in the hash table*/
		temp = sht->array[sht_key];

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
