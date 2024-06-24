#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - print a diagonal
 * @n: number of line
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}

	_putchar('\n');
}
