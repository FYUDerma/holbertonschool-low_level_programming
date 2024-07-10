#include "main.h"

/**
 * malloc_checked - Allocating with malloc
 * @b: Amount of bytes that need to be allocated
 * Return: a pointer to a void
 */

void *malloc_checked(unsigned int b)
{
	void *heap;

	heap = malloc(b);

	if (heap == NULL)
	{
		exit(98);
	}

	return (heap);
}
