#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position in a
*                            doubly linked list.
* @h: Pointer to a pointer to the head of the list.
* @idx: Index of the list where the new node should be added (starting at 0).
* @n: Data for the new node.
*
* Return: Address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current_node;
unsigned int i;

/* Check if head is NULL and idx is 0 */
if (*h == NULL && idx == 0)
return (add_dnodeint(h, n));

/* Create new node and check if it was created */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;

/* Traverse the list to find the node at index idx */
current_node = *h;
for (i = 0; i < idx - 1 && current_node != NULL; i++)
current_node = current_node->next;

/* If index is out of range, free the new node and return NULL */
if (i < idx - 1 || current_node == NULL)
{
free(new_node);
return (NULL);
}

/* Insert the new node into the list */
new_node->prev = current_node;
new_node->next = current_node->next;
if (current_node->next != NULL)
current_node->next->prev = new_node;
current_node->next = new_node;

return (new_node);
}
