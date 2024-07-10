#include "main.h"

/**
 * create_array - Create an array of chars
 * @size: size of the array
 * @c: initialize specific char
 *
 * Return: pointer to the aray or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i; /* Index */
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size);
	if (array == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
