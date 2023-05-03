#include "lists.h"

/**
  * sum_listint - a function to return the sum of all data.
  * @head: The first node
  * Return: 0 if no data, else return sum
  */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	else
		return (head->n + sum_listint(head->next));
}
