#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - A function that creates a hash table.
 * @size: The size of hash table.
 * Return: A pointer to the new hash table in memory (heap).
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	/* Allocate memory for the hash table structure */
	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* Allocate memory for the array of pointers to hash nodes */
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	/* Initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;
	return (new_table);
}

/**
 * shash_table_set - A function that sets a key value pair in the hash table.
 * @ht: A pointer to hash table to set in.
 * @key: The key to set in hash table.
 * @value: The value to set as hash_node's value.
 * Return: 1 on success, or 0 on failure.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *temp, *prev;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);

	/* Get the index for the key using the djb2 hash function */
	index = key_index((unsigned char *)key, ht->size);

	/* Check for collision by iterating through the linked list at the index */
	temp = ht->array[index];
	prev = NULL;

	while (temp != NULL && strcmp(temp->key, key) < 0)
	{
		prev = temp;
		temp = temp->next;
	}

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	/* Set the key and value for the new node */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	/* Insert the new node at the right place in the sorted list */
	if (prev == NULL)
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = prev->next;
		prev->next = new_node;
	}

	/* Update the sorted linked list */
	if (temp == NULL) /* Insert at the end of the sorted list */
	{
		new_node->sprev = ht->stail;
		new_node->snext = NULL;
		if (ht->stail != NULL)
			ht->stail->snext = new_node;
		ht->stail = new_node;
		if (ht->shead == NULL)
			ht->shead = new_node;
	}
	else if (prev == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		new_node->sprev = prev->sprev;
		new_node->snext = temp;
		prev->sprev->snext = new_node;
		temp->sprev = new_node;
	}
	return (1);
}

/**
 * shash_table_get - A function that gets key and value froma hash table.
 * @ht: A pointer to hash table to pull value from.
 * @key: The key to get value from hash table.
 * Return: The value associated to key, or NULL if key was not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp != NULL && strcmp(temp->key, key) <= 0)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints the contents of a hash table
 * @ht: hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (node = ht->shead; node != NULL; node = node->snext)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->snext != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - A function that frees a hash table.
 * @ht: The pointer to hash table to delete.
 *Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (node = ht->shead; node != NULL;)
	{
		temp = node;
		node = node->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
	free(ht->array);
	free(ht);
}

/**
 * shash_table_print_rev - A function that frees a hash table.
 * @ht: The pointer to hash table to delete.
 *Return: Nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (node = ht->stail; node != NULL; node = node->sprev)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->sprev != NULL)
			printf(", ");
	}
	printf("}\n");
}
