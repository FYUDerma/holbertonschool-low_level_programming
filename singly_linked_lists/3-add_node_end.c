#include "lists.h"
int len(const char *str);

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 *
 * @head: A pointer to the head of the list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;

	/* Create a new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string */
	new_node->len = len(str);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Initialize the new node's next pointer to NULL */
	new_node->next = NULL;

	/* If the list is empty, set the head to the new node */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Find the last node in the list */
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;

	/* Set the last node's next pointer to the new node */
	last_node->next = new_node;

	return (new_node);
}

/**
 * len - Calculates the length of a string.
 * @str: Constant string
 * Return: The length of the string
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
