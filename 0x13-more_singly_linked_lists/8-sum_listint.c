#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int add;

	for (add = 0; head != NULL;)
	{
		add = add + (head->n);
		head = head->next;
	}
	return (add);
}
