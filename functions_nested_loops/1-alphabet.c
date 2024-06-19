#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print a to z
 * Description: Function print_alphabet print alphabet in uppercase from a to z
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z' ; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
