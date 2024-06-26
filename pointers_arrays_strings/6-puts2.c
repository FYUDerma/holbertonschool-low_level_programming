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
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
