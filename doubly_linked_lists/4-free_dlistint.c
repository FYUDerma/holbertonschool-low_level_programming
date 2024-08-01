#include "lists.h"

/**
 * free_dlistint - frees a list_t list
 * @head: the head of the list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
