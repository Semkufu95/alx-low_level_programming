#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: linked list of type listint_t to print
 * Return: number of nodes in the structure
 */
size_t print_listint(const listint_t *h)
{
	size_t node_number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_number++;
		h = h->next;
	}
	return (node_number);
}
