#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function to free listint_t
 * @head: arg
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
