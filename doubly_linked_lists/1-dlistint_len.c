#include "lists.h"

/**
 * dlistint_len - Function thats print the number of element in a list
 * @h: Elements of the list
 * Return: The number of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
