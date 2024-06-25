#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * puts2 -  print pair number
 * @str : Pointer str
 *
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
