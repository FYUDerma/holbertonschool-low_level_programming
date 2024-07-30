#include "lists.h"
int len(const char *str);

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: the head of the list
 * @str: the string to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->len = len(str);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

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
