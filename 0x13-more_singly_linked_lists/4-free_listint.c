#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to a pointer to the first node in the list
 * @n: integer to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node, *current_node;

    /* allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    /* set the value of the new node */
    new_node->n = n;
    new_node->next = NULL;

    /* if the list is empty, make the new node the first node */
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    /* traverse the list to find the last node */
    current_node = *head;
    while (current_node->next != NULL)
        current_node = current_node->next;

    /* add the new node to the end of the list */
    current_node->next = new_node;

    return (new_node);
}
