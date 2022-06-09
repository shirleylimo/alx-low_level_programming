#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: double pointer to structure
 * @n: number of nodes of the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = (*head);
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	(*head) = new;
	return (new);
}
