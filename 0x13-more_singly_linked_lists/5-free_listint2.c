#include <stdlib.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a linked list of integers and sets the head to NULL.
 *
 * @head: A pointer to the head of the linked list.
 *
 * Return: Always void.
 */
void free_listint2(listint_t **head)
{
    listint_t *tmp;

    if (head == NULL)
        return;

    while (*head != NULL)
    {
        tmp = (*head)->next;
        free(*head);
        *head = tmp;
    }
    *head = NULL;
}
