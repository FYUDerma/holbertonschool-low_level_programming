#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverse an Array of integer
 * @a : Array
 * @n : Number of integer
 */

void reverse_array(int *a, int n)
{
	int index, temp;

	for (index = 0; index < n / 2; index++)
	{
		temp = a[index];
		a[index] = a[n - 1 - index];
		a[n - 1 - index] = temp;
	}
}
