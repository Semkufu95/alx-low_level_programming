#include "lists.h"

/**
 *sum_listint - prints the sum of all data
 * Return: return 0 if no data found, else return sum
 */

int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	else
		return (head->n + sum_listint(head->next));
}
