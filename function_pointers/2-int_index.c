#include "main.h"
#include "function_pointers.h"

/**
 * int_index - Searches for an integer index on an array
 * @array: Array containing the values
 * @size: Size of the array
 * @cmp: Pointer to a function
 * Return: -1 if not index found or size is 0 or less. Index number when
 * number is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (index = 0; index < size; index++)
		if (cmp(array[index]) != 0)
			return (index);
	return (-1);
}
