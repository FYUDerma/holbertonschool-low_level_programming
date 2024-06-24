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
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
