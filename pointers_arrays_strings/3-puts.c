#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _puts : print a string
 * @str : pointer string
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
