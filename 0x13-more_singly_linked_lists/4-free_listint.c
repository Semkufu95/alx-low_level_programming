#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *node_to_be_freed;

	while (head != NULL)
	{
		node_to_be_freed = head;
		head = head->next;
		free(node_to_be_freed);
	}
}
