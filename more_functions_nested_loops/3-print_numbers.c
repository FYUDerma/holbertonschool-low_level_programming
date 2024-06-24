#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_numbers - print number from 0 to 9
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	char n;

	n = 0;

	while (n <= 9)
	{
		_putchar('0' + (n % 10));
		n++;
	}
	_putchar('\n');
}
