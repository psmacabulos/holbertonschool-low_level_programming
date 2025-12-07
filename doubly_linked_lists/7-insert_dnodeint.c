#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added, starting from 0
 * @n: integer to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i = 0;

	/* Handle invalid head pointer */
	if (h == NULL)
		return (NULL);

	/* Special case: insert at the beginning (index 0) */
	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;

	/* Traverse the list until the node before the desired index */
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	/* If we reached NULL before idx - 1, index is out of bounds */
	if (current == NULL)
		return (NULL);

	/* Special case: insert at the end of the list */
	if (current->next == NULL && i == idx - 1)
		return (add_dnodeint_end(h, n));

	/* Allocate memory for the new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* Initialize new node */
	new->n = n;
	new->next = current->next;
	new->prev = current;

	/* Update the next node's prev pointer if it exists */
	if (current->next != NULL)
		current->next->prev = new;

	/* Link current node to the new node */
	current->next = new;

	return (new);
}
