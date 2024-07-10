#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Amount of array values
 * @size: The size of each array value
 * Return: A pointer to the begining of the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *heap;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	heap = malloc(nmemb * size);

	if (heap == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		heap[i] = 0;
	}
	return (heap);
}
