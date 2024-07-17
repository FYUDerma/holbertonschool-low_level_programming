#include "main.h"
#include "function_pointers.h"

/**
 * array_iterator - Iterates through an array and calls a function
 * @array: Array to iterate
 * @size: size of the array
 * @action: Pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array == NULL || action == NULL)
		return;
	for (index = 0; index < size; index++)
		action(array[index]);
}
