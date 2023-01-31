#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees a linked list and returns the number of nodes
 * @h: double pointer to the head of the linked list
 *
 * Return: number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *temp;
	size_t nodes = 0;
	
	slow = *h;
	fast = *h;
	
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		nodes++;
		
		if (slow == fast)
		{
			fast = *h;
			while (slow != fast)
			{
				slow = slow->next;
				temp = fast;
				fast = fast->next;
				free(temp);nodes--;
			}
			free(slow);
			*h = NULL;
			return (nodes);
		}
	}
	while (*h)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		nodes++;
	}
	*h = NULL;
	return (nodes);
}
