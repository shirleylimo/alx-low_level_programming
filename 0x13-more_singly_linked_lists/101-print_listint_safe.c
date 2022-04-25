#include "lists.h"

/**
 * reverse_listint - prints a listint_t linked list.
 * @head: pointer to the list.
 * Return: number of nodes in the list.
 **/

size_t print_listint_safe(const listint_t *head)
{
	size_t p = 0;
	const listint_t *a_node = head;

	if (!head)
		exit(98);

	while (a_node)
	{
		printf("[%p] %i\n", (void *)a_node, a_node->n);
		a_node = a_node->next;
		p++;
	}
	return (p);
}
