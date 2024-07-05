#include "main.h"

/**
 * print_diagsums - Print the sum of the two diagonals
 * @a: value
 * @size: size of the diagonals
 *
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int first_diagonals;
	int second_diagonals;
	int i, j; /* Index first_diagonal and second_diagonals */

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				first_diagonals += a[i * size + j];
			}
			if (i + j == size - 1)
			{
				second_diagonals += a[i * size + j];
			}
		}
	}
	printf("%d, %d\n", first_diagonals, second_diagonals);
}
