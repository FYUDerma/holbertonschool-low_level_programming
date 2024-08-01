#include "lists.h"

/**
 * print_dlistint - Function thats print all elements of a list
 * @h: Elements of the list
 * Return: The elements of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
