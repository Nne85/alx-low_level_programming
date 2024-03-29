#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - Printsahashtable.
 * @ht: Thehashtable.
 *
 * Return: Printed hash table or nth
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (flag == 1)
				printf(",");
			printf("'%s':'%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
