#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to head of list
 * @n: value to store in new node
 *
 * Return: address of new node, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	if (head == NULL)
		return (NULL);

	/* create new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	/* if list is empty, new node is the head */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	/* traverse the list to find the last node */
	current = *head;
	while (current->next != NULL)
		current = current->next;

	/* add new node to the end */
	current->next = new;
	new->prev = current;

	return (new);
}
