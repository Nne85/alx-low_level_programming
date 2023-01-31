#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: head of linked list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current && i < index - 1)
	{
		tmp = current->next;
		current = current->next;
		i++;
	}

	if (!current || !current->next)
		return (-1);

	tmp = current->next;
	current->next = tmp->next;
	free(tmp);

	return (1);
}

