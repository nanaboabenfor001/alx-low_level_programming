#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to a pointer to the first node of the list
 * @idx: index of the list where the new node should be added
 * @n: data for the new node
 *
 * Return: the address of the new node, or NULL if it failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *prev_node = NULL, *current_node = *head;
    unsigned int i;

    /* allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    /* fill in the data for the new node */
    new_node->n = n;

    /* find the previous and current nodes at the given index */
    for (i = 0; i < idx && current_node != NULL; i++)
    {
        prev_node = current_node;
        current_node = current_node->next;
    }

    /* if the index is out of bounds, free the new node and return NULL */
    if (i < idx)
    {
        free(new_node);
        return (NULL);
    }

    /* insert the new node into the list */
    new_node->next = current_node;
    if (prev_node == NULL)
        *head = new_node;
    else
        prev_node->next = new_node;

    return (new_node);
}
