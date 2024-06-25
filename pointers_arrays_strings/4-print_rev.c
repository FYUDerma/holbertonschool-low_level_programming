#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_rev - print the string in reverse
 * @s : string
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	char *end = s;

	while (*end)
	{
		end++;
	}

	end--;

	while (end >= s)
	{
		_putchar(*end);
		end--;
	}
	_putchar('\n');
}
