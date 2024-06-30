#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_most_numbers - print number from 0 to 9 eno 2 / 4
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	char n;

	n = 0;

	while (n <= 9)
	{
		if (n == 2 || n == 4)
		{
			n++;
		}
		_putchar('0' + (n % 10));
		n++;
	}
	_putchar('\n');
}
