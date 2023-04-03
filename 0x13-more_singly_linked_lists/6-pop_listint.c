#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Double pointer to the head node.
 *
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    int data;
    listint_t *tmp;

    if (*head == NULL)
        return (0);

    tmp = *head;
    data = tmp->n;
    *head = (*head)->next;
    free(tmp);

    return (data);
}
