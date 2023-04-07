#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: Size of the array
 * Return: Pointer to the created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht = malloc(sizeof(shash_table_t));

    if (!ht)
        return NULL;

    ht->size = size;
    ht->array = calloc(size, sizeof(shash_node_t *));
    if (!ht->array)
    {
        free(ht);
        return NULL;
    }

    ht->shead = NULL;
    ht->stail = NULL;

    return ht;
}

/**
 * shash_table_set - Inserts a key-value pair into a sorted hash table
 * @ht: Pointer to the hash table
 * @key: Key string
 * @value: Value string
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *node, *prev;

    if (!ht || !key || !*key)
        return 0;

    index = key_index((unsigned char *)key, ht->size);

    for (node = ht->array[index]; node; prev = node, node = node->next)
    {
        if (!strcmp(node->key, key))
        {
            free(node->value);
            node->value = strdup(value);
            if (!node->value)
                return 0;
            return 1;
        }
        if (strcmp(node->key, key) > 0)
            break;
    }

    node = malloc(sizeof(shash_node_t));
    if (!node)
        return 0;

    node->key = strdup(key);
    node->value = strdup(value);
    if (!node->key || !node->value)
    {
        free(node->key);
        free(node->value);
        free(node);
        return 0;
    }

    if (!ht->array[index] || strcmp(ht->array[index]->key, key) > 0)
    {
        node->next = ht->array[index];
        ht->array[index] = node;
    }
    else
    {
        prev->next = node;
        node->next = prev->next;
    }

    if (!ht->shead || strcmp(ht->shead->key, key) > 0)
    {
        node->snext = ht->shead;
        ht->shead = node;
    }
    else
    {
        prev = ht->shead;
        for (node = ht->shead->snext; node && strcmp(node->key, key) < 0;
             prev = node, node = node->snext)
            ;
        node->sprev = prev;
        prev->snext = node;
        node->snext = node->snext->sprev;
    }

    return 1;
}

/**
 * shash_table_get - Retrieves a value associated with a given key
 * @ht: Pointer to the hash table
 * @key: Key string
 * Return: Pointer to the value string, or NULL if key not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *node;

    if (ht == NULL || key == NULL || *key == '\0')
	    return (NULL);
    index = key_index((const unsigned char *)key, ht->size);
    node = ht->array[index];

    while (node != NULL)
    {
	    if (strcmp(node->key, key) == 0)
		    return (node->value);
	    node = node->next;
    }
    return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table in ascending order.
 * @ht: The hash table to print.
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node = NULL;
	int flag = 0;
	
	if (ht == NULL)
		return;
	printf("{");
	
	for (node = ht->shead; node != NULL; node = node->snext)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		flag = 1;
	}
	
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in descending order.
 * @ht: The hash table to print.
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node = NULL;
	int flag = 0;
	if (ht == NULL)
		return;
	printf("{");
	
	for (node = ht->stail; node != NULL; node = node->sprev)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		flag = 1;
	}
	
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The hash table to delete.
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node = NULL, *tmp = NULL;
	unsigned long int i = 0;
	
	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	
	free(ht->array);
	free(ht);
}
