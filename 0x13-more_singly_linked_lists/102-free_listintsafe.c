#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int d;
	listint_t *file;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			file = (*h)->next;
			free(*h);
			*h = file;
			number_of_nodes++;
		}
		else
		{
			free(*h);
			*h = NULL;
			number_of_nodes++;
			break;
		}
	}
	*h = NULL;
	return (number_of_nodes);
}
