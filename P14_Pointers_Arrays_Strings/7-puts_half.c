#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * puts_half - Print the second half of str
 * @str : string
 *
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int len = 0;
	int start, i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2 + 1;
	}
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
