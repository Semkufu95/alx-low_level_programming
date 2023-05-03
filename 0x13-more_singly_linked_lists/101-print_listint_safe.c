#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list, even if it contains
 * a loop.
 * @head: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *pntr_1, *pntr_2;
    size_t count = 0;

    pntr_1 = head;
    pntr_2 = head;

    while (pntr_2 != NULL && pntr_2->next != NULL)
    {
        printf("[%p] %d\n", (void *)pntr_1,pntr_1->n);
        count++;
        pntr_1 = pntr_1->next;
        pntr_2 = pntr_2->next->next;

        if (pntr_2 == pntr_1)
        {
            printf("[%p] %d\n", (void *)pntr_1, pntr_1->n);
            count++;
            printf("-> [%p] %d\n", (void *)pntr_2->next, pntr_2->next->n);
           pntr_2 = pntr_2->next;
            while (pntr_2 != pntr_1)
            {
                printf("[%p] %d\n", (void *)pntr_2, pntr_2->n);
                count++;
                pntr_2 = pntr_2->next;
            }
            printf("[%p] %d\n", (void *)pntr_2, pntr_2->n);
            count++;
            break;
        }
    }

    return (count);
}
