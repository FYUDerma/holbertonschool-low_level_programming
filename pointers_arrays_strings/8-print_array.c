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
	int index = 0;
	int len;

	while (a[len])
	{
		len++;
	}

	if (len == 0 && n == 0)
	{
		printf("\n");
	}
	else
	{
		for (; index < n; index++)
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
	}
}
