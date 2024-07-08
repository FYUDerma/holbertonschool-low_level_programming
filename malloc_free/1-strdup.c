#include "main.h"

/**
 * _strdup - Duplicates a string using malloc
 * @str: String to be duplicated
 *
 * Return: NULL if not enough space in memory otherwise a pointer
 * to the beginning of the array
 */

char *_strdup(char *str)
{
	int len; /* Lenght of the Array */
	int i; /* Index of the Array */
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
	{}
	array = malloc(len + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';
	return (array);
}
