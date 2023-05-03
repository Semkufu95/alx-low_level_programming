#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;
	listint_t *current_node;

	current_node = head;
	for (k = 0; k < index && current_node != NULL; k++)
	{
		current_node = current_node->next;
	}
	return (current_node);
}
