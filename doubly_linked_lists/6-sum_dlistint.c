#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the dataof a linked list.
 * @head: The head of the linked list.
 * Return: The sum of all the data (n) of the linked list. If empty, returns 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
