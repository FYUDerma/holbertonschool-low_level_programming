#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_array - Point n element of array
 * @n : ellement to print
 * @a : array
 *
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (n >= 0)
		{
			if (index == n - 1)
			{
				printf("%d\n", a[index]);
			}
			else
			{
				printf("%d, ", a[index]);
			}
		}
		else
		{
			printf("\n");
		}
	}
}
