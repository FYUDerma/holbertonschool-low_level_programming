#include <stdio.h>
#include "main.h"
/**
 * print_square - print a square
 * @size: number of line
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int a, b;

	a = 0;
	if (size > 0)
	{
		while (a < size)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
