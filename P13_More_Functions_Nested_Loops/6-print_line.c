#include <stdio.h>
#include "main.h"
/**
 * print_line - print a line
 * @n: number of _ printed
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
