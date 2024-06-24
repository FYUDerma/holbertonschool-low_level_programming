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
	while (a < size)
	{
		if (size > 0)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
		}
		else
		{
			_putchar('\n');
		}
		_putchar('\n');
		a++;
	}
}
