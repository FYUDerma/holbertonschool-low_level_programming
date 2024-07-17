#include "main.h"
#include "function_pointers.h"

/**
 * array_iterator - Function that prints a name
 * @name: name to print
 * @f: string
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array != NULL || action != NULL)
		for (index = 0; index < size; index++)
			action(array[index]);
}
