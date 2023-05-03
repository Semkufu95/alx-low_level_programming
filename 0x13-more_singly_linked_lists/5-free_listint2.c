#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: address/pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *node_to_be_freed;

	if (head == NULL)
		return;
	while (*head)
	{
		node_to_be_freed = (*head)->next;
		free(*head);
		*head = node_to_be_freed;
	}

	*head = NULL;
}
