#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int to_be_deleted;
	listint_t *file;

	if (*head == NULL)
	{
		return (0);
	}
	to_be_deleted = (*head)->n;
	file = *head;
	*head = (*head)->next;
	free(file);

	return (to_be_deleted);
}
