/**
* delete_dnodeint_at_index - deletes the node at index of a linked list
* @head: pointer to head of the list
* @index: index of the node to delete
*
* Return: 1 if successful, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;

if (current == NULL)
return (-1);

if (index == 0)
{
*head = current->next;
if (current->next != NULL)
current->next->prev = NULL;
free(current);
return (1);
}

while (index > 0)
{
if (current == NULL)
return (-1);
current = current->next;
index--;
}

if (current == NULL)
return (-1);

current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
free(current);
return (1);
}
