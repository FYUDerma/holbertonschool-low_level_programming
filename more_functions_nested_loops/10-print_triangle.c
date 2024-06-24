#include <stdio.h>
#include "main.h"
/**
 * print_triangle - print a square
 * @size: number of line
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int row, col, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - row; space > 0; space--)
			{
				_putchar(' ');
			}
			for (col = 1; col <= row; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
