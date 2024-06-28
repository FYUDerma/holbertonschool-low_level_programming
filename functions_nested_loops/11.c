#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all number between n and 98
 * @n: number to print
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	while (n <= 98 || n >= 98)
	{
		if (n < 0)
		{
			_putchar('-');
		}

		if (n >= 0 && n <= 9)
		{
			_putchar('0' + n);
		}
		else if (n >= 10 && n <= 99)
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
		}
		else if (n >= 100)
		{
			_putchar('0' + (n / 100));
			_putchar('0' + ((n / 10) % 10));
			_putchar('0' + (n % 10));
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		
		if (n >= 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	_putchar('\n');
}
