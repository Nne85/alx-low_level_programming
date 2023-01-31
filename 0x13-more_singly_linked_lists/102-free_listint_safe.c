#include "lists.h"

/**
 * free_listint_safe - frees a linked list.
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count = 0;

	if (!h || !(*h))
		return (0);

	current = *h;
	while (current)
	{
		count++;
		next = current->next;
		free(current);
		current = next;

		if (current >= *h && current <= next)
		{
			*h = NULL;
			return (count);
		}
	}
	*h = NULL;
	return (count);
}
