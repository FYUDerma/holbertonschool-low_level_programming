#include "lists.h"

/**
 * list_len - Print the number of elements
 * @h: the list value of the list
 * Return: Return the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
